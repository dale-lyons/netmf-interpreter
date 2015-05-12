////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef _SPOT_ALLJOYN_NATIVE_SERVICES_H_
#define _SPOT_ALLJOYN_NATIVE_SERVICES_H_

#include <TinyCLR_Interop.h>

struct Library_spot_alljoyn_native_services_Microsoft_SPOT_AllJoyn_Services_AJ_Services
{
    static const int FIELD__AjInst = 1;
    static const int FIELD__propertyStore = 2;
    static const int FIELD__AJNS_NotificationVersion = 3;
    static const int FIELD__NotificationId = 4;
    static const int FIELD__LastSentNotifications = 5;

    TINYCLR_NATIVE_DECLARE(Initialize_NotificationService___MicrosoftSPOTAlljoynMicrosoftSPOTAllJoynAJStatus__STRING);
    TINYCLR_NATIVE_DECLARE(SendNotifySignal___MicrosoftSPOTAlljoynMicrosoftSPOTAllJoynAJStatus__U4__MicrosoftSPOTAllJoynServicesAJServicesAJNSNotification__U4__STRING__BYREF_U4);

    //--//

};

struct Library_spot_alljoyn_native_services_Microsoft_SPOT_AllJoyn_Services_AJ_Services__AJNS_MessageTracking
{
    static const int FIELD__notificationId = 1;
    static const int FIELD__serialNum = 2;


    //--//

};

struct Library_spot_alljoyn_native_services_Microsoft_SPOT_AllJoyn_Services_AJ_Services__AJNS_Notification
{
    static const int FIELD__version = 1;
    static const int FIELD__messageType = 2;
    static const int FIELD__notificationId = 3;
    static const int FIELD__originalSenderName = 4;
    static const int FIELD__deviceId = 5;
    static const int FIELD__deviceName = 6;
    static const int FIELD__appId = 7;
    static const int FIELD__appName = 8;


    //--//

};

struct Library_spot_alljoyn_native_services_Microsoft_SPOT_AllJoyn_Services_AJSVC_PropertyStoreCategoryFilter
{
    static const int FIELD__bit0About = 1;
    static const int FIELD__bit2Announce = 2;


    //--//

};

struct Library_spot_alljoyn_native_services_Microsoft_SPOT_AllJoyn_Services_PropertyStore
{
    static const int FIELD_STATIC__DefaultLanguage = 0;

    static const int FIELD__props = 1;
    static const int FIELD__Properties = 2;
    static const int FIELD__RuntimeValues = 3;
    static const int FIELD__DefaultValues = 4;
    static const int FIELD__DefaultLanguagesKeyName = 5;
    static const int FIELD__SupportedLanguages = 6;
    static const int FIELD__NumberOfLanguages = 7;
    static const int FIELD__AppId = 8;


    //--//

};

struct Library_spot_alljoyn_native_services_Microsoft_SPOT_AllJoyn_Services_PropertyStoreConfigEntry
{
    static const int FIELD__value = 1;


    //--//

};

struct Library_spot_alljoyn_native_services_Microsoft_SPOT_AllJoyn_Services_PropertyStoreEntry
{
    static const int FIELD__keyName = 1;
    static const int FIELD__mode0Write = 2;
    static const int FIELD__mode1Announce = 3;
    static const int FIELD__mode2MultiLng = 4;
    static const int FIELD__mode3Init = 5;
    static const int FIELD__mode4 = 6;
    static const int FIELD__mode5 = 7;
    static const int FIELD__mode6 = 8;
    static const int FIELD__mode7Public = 9;


    //--//

};



extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Microsoft_SPOT_Alljoyn_Services;

#endif  //_SPOT_ALLJOYN_NATIVE_SERVICES_H_

