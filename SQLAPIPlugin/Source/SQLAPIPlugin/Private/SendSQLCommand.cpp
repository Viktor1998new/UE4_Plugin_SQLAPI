//Copyright(c) 2022, Viktor.F.P

#include "SendSQLCommand.h"
#include "SQLObject.h"
#include "SQLAPIPlugin.h"

FString ConverterSaString(SAString Value) {

    const char* bytes = Value.GetMultiByteChars();
    size_t n = strlen(bytes);
    return FString(n, bytes);
}

USQLQuery::USQLQuery(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
}

USQLConnect::USQLConnect(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
}

void USQLQuery::Activate() {
  
    try{
        
        char* L_SQLQuery = TCHAR_TO_UTF8(*Query);

        SACommand insert(&SQL->con, _TSA(L_SQLQuery));

        insert.Execute();
        
        bool is_result = insert.isResultSet();

        TArray<FSQLTable> NewSQLTable;

        if (is_result) {
            
            while (insert.FetchNext())
            {
                TMap<FString, FString> NewMap;

                for (int i = 1; i < insert.FieldCount()+1; i++)
                {
                    FString sName = ConverterSaString(insert[i].Name());

                    FString sValue = ConverterSaString(insert[i]);

                    NewMap.Add(sName, sValue);
                }

                FSQLTable Table = FSQLTable();
                Table.Raws = NewMap;
                NewSQLTable.Add(Table);
            }


            Success.Broadcast(NewSQLTable);
            insert.Destroy();

            return;
        }

        Success.Broadcast(NewSQLTable);
        insert.Destroy();
    }
    catch (SAException& x)
    {
        UE_LOG(LogSQLAPI, Error, TEXT("Error SQL: %s"),*ConverterSaString(x.ErrText()));
        OnFail.Broadcast(*ConverterSaString(x.ErrText()));
        SQL->OnFail.Broadcast(*ConverterSaString(x.ErrText()));
    }
}

void USQLConnect::Activate()
{

    USQL* NewSQL = NewObject<USQL>();
    NewSQL->SQLBDName = SQLBDName;

    USQLObject* SQLObject = FSQLAPIPluginModule::Get().ModuleSettings;

    try {

        SAClient_t Client = (SAClient_t)SQLObject->SQLClient.GetValue();
        char* L_SQLIAddress = TCHAR_TO_UTF8(*SQLBDName);
        char* L_SQLUser = TCHAR_TO_UTF8(*SQLUser);
        char* L_SQLIPassword = TCHAR_TO_UTF8(*SQLPassword);

        NewSQL->con.Connect(_TSA(L_SQLIAddress), _TSA(L_SQLUser), _TSA(L_SQLIPassword), Client);

        do {

        } while (NewSQL->con.isConnected() != true);

        Success.Broadcast(NewSQL);
    }
    catch (SAException& x)
    {
        UE_LOG(LogSQLAPI, Error, TEXT("Error SQL: %s"), *ConverterSaString(x.ErrText()));
        OnFail.Broadcast(*ConverterSaString(x.ErrText()));
    }

}
