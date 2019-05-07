#include <bits/stdc++.h>


IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get(); 
 // Retrieve our Interface
 if (OnlineSub) // if an Online Interface is valid
 {
     IOnlineSessionPtr SessionInt = OnlineSub->GetSessionInterface();
     // Get the Session Interface Pointer
     FOnSessionInviteAcceptedDelegate OnSessionInviteAcceptedDelegate = FOnSessionInviteAcceptedDelegate::CreateUObject(this, &MyClass:MyCallbackFunction); 
     // Create a Delegate For Session Invite Acceptance. 
     //This will trigger our function Whenever we accept an Invite 
     SessionInt->AddOnSessionInviteAcceptedDelegate_Handle(0, OnSessionInviteAcceptedDelegate); 
     // Bind the Delegate
 }
 
 MyCallbackFunction(int32 LocalUserNum, bool bWasSuccessful, const FOnlineSessionSearchResult & SessionToJoin)
 
