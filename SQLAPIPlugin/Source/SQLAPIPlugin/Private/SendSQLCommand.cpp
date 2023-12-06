//Copyright(c) 2022, Viktor.F.P

#include "SendSQLCommand.h"
#include "SQLObject.h"
#include "SQLAPIPlugin.h"
#include <string>

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
        
        std::string L_SQLQuery = std::string(TCHAR_TO_UTF8(*Query));

        SACommand insert(&SQL->con, _TSA(L_SQLQuery.c_str()));

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
    USQLObject* SQLObject = FSQLAPIPluginModule::Get().ModuleSettings;

    try {

        if (SQL->IsConnected())
            SQL->Disconnect();

        SAClient_t Client = (SAClient_t)SQLObject->SQLClient.GetValue();
        std::string L_SQLIAddress = std::string(TCHAR_TO_UTF8(*SQLBDName));
        std::string L_SQLUser = std::string(TCHAR_TO_UTF8(*SQLUser));
        std::string L_SQLIPassword = std::string(TCHAR_TO_UTF8(*SQLPassword));

        SQL->con.Connect(_TSA(L_SQLIAddress.c_str()), _TSA(L_SQLUser.c_str()), _TSA(L_SQLIPassword.c_str()), Client);

        do {

        } while (SQL->con.isConnected() != true);

        Success.Broadcast();
    }
    catch (SAException& x)
    {
        UE_LOG(LogSQLAPI, Error, TEXT("Error SQL: %s"), *ConverterSaString(x.ErrText()));
        OnFail.Broadcast(*ConverterSaString(x.ErrText()));
        SQL->OnFail.Broadcast(*ConverterSaString(x.ErrText()));
    }

}
