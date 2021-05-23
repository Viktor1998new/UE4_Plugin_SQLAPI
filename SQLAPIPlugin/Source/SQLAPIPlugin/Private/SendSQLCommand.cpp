// Fill out your copyright notice in the Description page of Project Settings.

#include "SQLObject.h"
#include "SQLAPIPlugin.h"
#include <string>
#include "SendSQLCommand.h"

USendSQLCommand::USendSQLCommand(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer), SQLQuery(TEXT("")) {
}

void USendSQLCommand::Activate() {
    
    USQLObject * SQLObject = FSQLAPIPluginModule::Get().ModuleSettings;
   
    try{
        SAConnection con;


        SAClient_t Client = (SAClient_t)SQLObject->SQLClient.GetValue();
        std::string L_SQLIAddress = std::string(TCHAR_TO_UTF8(*FString::Printf(TEXT("%s@%s"), *SQLIPAddress, *SQLBDName)));
        std::string L_SQLUser = std::string(TCHAR_TO_UTF8(*SQLUser));
        std::string L_SQLIPassword = std::string(TCHAR_TO_UTF8(*SQLPassword));
        
        con.Connect(_TSA(L_SQLIAddress.c_str()), _TSA(L_SQLUser.c_str()), _TSA(L_SQLIPassword.c_str()), Client);
       
        do {
            
        } while (con.isConnected() != true);
     
        std::string L_SQLQuery = std::string(TCHAR_TO_UTF8(*SQLQuery));

        SACommand insert(
            &con,
            _TSA(L_SQLQuery.c_str()));

        insert.Execute();

        bool is_result = insert.isResultSet();

        if (is_result) {
            
            TArray<FSQLTable> NewSQLTable;

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


            Completed.Broadcast(true, NewSQLTable, FString());
            insert.Destroy();
            con.Disconnect();

            return;
        }

        Completed.Broadcast(true, TArray<FSQLTable>(), FString());

        con.Disconnect();
    }
    catch (SAException& x)
    {
        UE_LOG(LogSQLAPI, Error, TEXT("Error SQL: %s"),*ConverterSaString(x.ErrText()));
        Completed.Broadcast(false, TArray<FSQLTable>(), FString());
    }
}

USendSQLCommand* USendSQLCommand::SendSQLCommand(const FString IPAddress, const FString BDName, const FString User, const FString Password, const FString Query)
{
    USendSQLCommand* BlueprintNode = NewObject<USendSQLCommand>();
    BlueprintNode->SQLIPAddress = IPAddress;
    BlueprintNode->SQLQuery = Query;
    BlueprintNode->SQLBDName = BDName;
    BlueprintNode->SQLUser = User;
    BlueprintNode->SQLPassword = Password;
    return BlueprintNode;
}

FString USendSQLCommand::ConverterSaString(SAString Value) {

    const char* bytes = Value.GetMultiByteChars();
    size_t n = strlen(bytes);
    return FString(n, bytes);
}