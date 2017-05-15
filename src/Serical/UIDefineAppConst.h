#ifndef UIDEFINEAPPCONST_H
#define UIDEFINEAPPCONST_H

#define UI_APPCONST_GPSTime_GPS "GPS"
#define UI_APPCONST_GPSTime_UTC "UTC"
#define UI_APPCONST_GPSCoordOrient_E "E"
#define UI_APPCONST_GPSCoordOrient_W "W"
#define UI_APPCONST_GPSCoordOrient_S "S"
#define UI_APPCONST_GPSCoordOrient_N "N"
#define UI_APPCONST_EarthR 6371300
#define UI_APPCONST_1NM 1853.3
#define UI_APPCONST_Pi 3.14159

#define  UI_APPCONST_SERIALCONFIG_FILE_PATH  "./serial.ini"
#define  UI_APPCONST_SERIALCONFIG_Serial1 "Serial1"
#define  UI_APPCONST_SERIALCONFIG_Serial2 "Serial2"
#define  UI_APPCONST_SERIALCONFIG_Serial3 "Serial3"
#define  UI_APPCONST_SERIALCONFIG_Serial_PortName  "PortName"
#define  UI_APPCONST_SERIALCONFIG_Serial_Baudrate "Baudrate"
#define  UI_APPCONST_SERIALCONFIG_Serial_StopBit "StopBite"
#define  UI_APPCONST_SERIALCONFIG_Serial_Parity "Parity"

#define  UI_APPCONST_DEVICECONFIG_FILE_Name "device.ini"
#define  UI_APPCONST_DEVICECONFIG_Sound "Sound"
#define  UI_APPCONST_DEVICECONFIG_Language "Language"

#define  UI_APPCONST_DEVICECONFIG_Silence "Silence"
#define  UI_APPCONST_DEVICECONFIG_Brightness "Brightness"
#define  UI_APPCONST_DEVICECONFIG_Brightness_Value "Value"
#define  UI_APPCONST_DEVICECONFIG_Brightness_MaxValue "MaxValue"
#define  UI_APPCONST_DEVICECONFIG_Brightness_MinValue "MinValue"
#define  UI_APPCONST_DEVICECONFIG_Brightness_SubValues "SubValues"
#define  UI_APPCONST_DEVICECONFIG_Vers "Vers"
#define  UI_APPCONST_DEVICECONFIG_Vers_DK006UIApp "DK006UIApp"
#define  UI_APPCONST_DEVICECONFIG_Vers_DK006UIUpdate "DK006UIUpdate"
#define  UI_APPCONST_DEVICECONFIG_Model "Model"
#define  UI_APPCONST_DEVICECONFIG_Model_HostModel "HostModel"


#define  UI_APPCONST_UPDATEAPP_EXECTYPE_UpdateApp 1
#define  UI_APPCONST_UPDATEAPP_EXECTYPE_Reset 2

#define  UI_APPCONST_UPDATEAPP_MountDirectory "/media/sda1"
#define  UI_APPCONST_UPDATEAPP_Directory "/Update/"
#define  UI_APPCONST_UPDATEAPP_UpdatePageName "DK006UIApp.zip"
#define  UI_APPCONST_UPDATEAPP_AppName "DK006UIUpdate"

#define  UI_APPCONST_UPDATEAPP_FILE_KeyName "key.dat"
#define  UI_APPCONST_UPDATEAPP_FILE_DSPName "DSP"
#define  UI_APPCONST_UPDATEAPP_FILE_FPGAName "FPGA"
#define  UI_APPCONST_UPDATEAPP_FILE_MCUName "MCU"
#define  UI_APPCONST_UPDATEAPP_FILE_SoftwareName "DK006UIApp.zip"

#define  UI_APPCONST_UPDATE_ErrorCode_FileInexistence 1
#define  UI_APPCONST_UPDATE_ErrorCode_ReadFile 2
#define  UI_APPCONST_UPDATE_ErrorCode_CoreBoardBreak 3
#define  UI_APPCONST_UPDATE_MaxBytes 1024

#define  UI_APPCONST_Frequency_EditType_TX 1
#define  UI_APPCONST_Frequency_EditType_RX 2
#define  UI_APPCONST_Frequency_EditType_RXTrim 3

#define  UI_APPCONST_Frequency_TX_MaxValue 27500.00
#define  UI_APPCONST_Frequency_TX_MinValue 1605.00
#define  UI_APPCONST_Frequency_RX_MaxValue 30000.00
#define  UI_APPCONST_Frequency_RX_MinValue 500.00

#define  UI_APPCONST_FUNCTIONMENUKEY_Scan 1
#define  UI_APPCONST_FUNCTIONMENUKEY_Message 2

#define  UI_APPCONST_SYSTEMMENUKEY_PhoneBook 1
#define  UI_APPCONST_SYSTEMMENUKEY_SSBSet 2
#define  UI_APPCONST_SYSTEMMENUKEY_DSCSet 3
#define  UI_APPCONST_SYSTEMMENUKEY_SystemSet 4
#define  UI_APPCONST_SYSTEMMENUKEY_DSCTest 5

#define  UI_APPCONST_ChannelScan_EditType_Start 1
#define  UI_APPCONST_ChannelScan_EditType_End 2

#define  UI_APPCONST_FrequencyScan_EditType_Start 1
#define  UI_APPCONST_FrequencyScan_EditType_End 2
#define  UI_APPCONST_FrequencyScan_EditType_Speed 3
#define  UI_APPCONST_FrequencyScan_MinValue 500
#define  UI_APPCONST_FrequencyScan_MaxValue 30000
#define  UI_APPCONST_ScanCycle_MinValue 100
#define  UI_APPCONST_ScanCycle_MaxValue 60000

#define  UI_APPCONST_SYSTEMMENUKEY_TIMEZONE_Date 1
#define  UI_APPCONST_SYSTEMMENUKEY_TIMEZONE_Time 2
#define  UI_APPCONST_SYSTEMMENUKEY_TIMEZONE_Zone 3

#define UI_APPCONST_SYSTEMMENUKEY_LOCALINFO_Recover 1
#define UI_APPCONST_SYSTEMMENUKEY_LOCALINFO_MMSI 2
#define UI_APPCONST_SYSTEMMENUKEY_LOCALINFO_DSP 3
#define UI_APPCONST_SYSTEMMENUKEY_LOCALINFO_FPGA 4
#define UI_APPCONST_SYSTEMMENUKEY_LOCALINFO_MCU 5
#define UI_APPCONST_SYSTEMMENUKEY_LOCALINFO_HostSoftware 6
#define UI_APPCONST_SYSTEMMENUKEY_LOCALINFO_HostVer 7
#define UI_APPCONST_SYSTEMMENUKEY_LOCALINFO_StatusReport 8



#define  UI_APPCONST_CHILDDIALOG_PhoneBook 1
#define  UI_APPCONST_CHILDDIALOG_SSBSet 2
#define  UI_APPCONST_CHILDDIALOG_DSCSet 3
#define  UI_APPCONST_CHILODIALOG_SystemSet 4
#define  UI_APPCONST_CHILODIALOG_DSCTest 5

#define  UI_APPCONST_MMSI_Places 9
#define  UI_APPCONST_PSTN_Places 16
#define  UI_APPCONST_CALL_Routine_DefaultDSCChannelID 7
#define  UI_APPCONST_CALL_SecurityUrgency_DefaultDSCChannelID 1
#define  UI_APPCONST_CALL_EditSendListTypes_PersonalCall 1
#define  UI_APPCONST_CALL_EditSendListTypes_FleetCall 2
#define  UI_APPCONST_CALL_EditSendListTypes_DistressBaseStationForward 3
#define  UI_APPCONST_CALL_EditSendListTypes_LocationCall 4
#define  UI_APPCONST_CALL_EditSendListTypes_PSTNCall 5

#define  UI_APPCONST_CALL_SeaAreaRangeEditTypes_Circle 1
#define  UI_APPCONST_CALL_SeaAreaRangeEditTypes_Quadrant 2

#define  UI_APPCONST_DistressCalledResponseTypes_DistressACK 1
#define  UI_APPCONST_DistressCalledResponseTypes_BaseStationForward 2
#define  UI_APPCONST_DistressCalledResponseTypes_SeaAreaForward 3

#define  UI_APPCONST_SSB_2182_ChannelID 1
#define  UI_APPCONST_DistressKey_LongPressSec 4
#define  UI_APPCONST_ManualTuneKey_LongPressSec 2

#define  UI_APPCONST_Volume_MinValue 50
#define  UI_APPCONST_Volume_MaxValue 90
#define  UI_APPCONST_AUD_OUT4_MinValue 0
#define  UI_APPCONST_AUD_OUT4_MaxValue 127
#define  UI_APPCONST_LINE_OUT_MinValue 0
#define  UI_APPCONST_LINE_OUT_MaxValue 127


#define  UI_APPCONST_Volume_Increase_Step 10
#define  UI_APPCONST_Brightness_Increase_Step 10

#define  UI_APPCONST_AlarmSound_Warning 3
#define  UI_APPCONST_AlarmSound_StartSendDistress 2
#define  UI_APPCONST_AlarmSound_SendDistress 3
#define  UI_APPCONST_AlarmSound_SendCancelDistress 3
#define  UI_APPCONST_AlarmSound_SendDistressACK 3
#define  UI_APPCONST_AlarmSound_SendDistressForward 3
#define  UI_APPCONST_AlarmSound_SendDistressForwardACK 3

#define  UI_APPCONST_AlarmSound_ReceivedDistress 5
#define  UI_APPCONST_AlarmSound_ReceivedDistressForward 5
#define  UI_APPCONST_AlarmSound_ReceivedDistressACK 6
#define  UI_APPCONST_AlarmSound_ReceivedDistressForwardACK 6

//#define  UI_APPCONST_AlarmSound_S_Routine 2
//#define  UI_APPCONST_AlarmSound_S_Security 1
//#define  UI_APPCONST_AlarmSound_S_Urgency 7
//#define  UI_APPCONST_AlarmSound_S_Distress 4

#define  UI_APPCONST_AlarmSound_S_Routine 3
#define  UI_APPCONST_AlarmSound_S_Security 3
#define  UI_APPCONST_AlarmSound_S_Urgency 3
#define  UI_APPCONST_AlarmSound_S_Distress 4

#define  UI_APPCONST_AlarmSound_R_Routine 2
#define  UI_APPCONST_AlarmSound_R_Security 1
#define  UI_APPCONST_AlarmSound_R_Urgency 7
#define  UI_APPCONST_AlarmSound_R_Distress 4

#define  UI_APPCONST_AlarmSound_S_ACK_Routine 3
#define  UI_APPCONST_AlarmSound_S_ACK_Security 3
#define  UI_APPCONST_AlarmSound_S_ACK_Urgency 3
#define  UI_APPCONST_AlarmSound_S_ACK_Distress 4

//#define  UI_APPCONST_AlarmSound_S_ACK_Routine 2
//#define  UI_APPCONST_AlarmSound_S_ACK_Security 1
//#define  UI_APPCONST_AlarmSound_S_ACK_Urgency 8
//#define  UI_APPCONST_AlarmSound_S_ACK_Distress 4

#define  UI_APPCONST_AlarmSound_R_ACK_Routine 2
#define  UI_APPCONST_AlarmSound_R_ACK_Security 1
#define  UI_APPCONST_AlarmSound_R_ACK_Urgency 8
#define  UI_APPCONST_AlarmSound_R_ACK_Distress 4


#define  UI_APPCONST_AlarmSound_SendPSTNCall 2
#define  UI_APPCONST_AlarmSound_ReceivedPSTNCall 1

#define UI_APPCONST_AutoCloseScene 1800


#define UI_TaskType_Title_PowerOn "开机"
#define UI_TaskType_Title_SwitchChannel "切换信道"
#define UI_TaskType_Title_ManualTune "手动调谐"
#define UI_TaskType_Title_UpdateWorkModel "更新设备模式"
#define UI_TaskType_Title_UpdateTX "改变TX"
#define UI_TaskType_Title_UpdateRX "改变RX"
#define UI_TaskType_Title_UpdateRXTrim "改变RX微调"
#define UI_TaskType_Title_UpdatePow "改变功率"
#define UI_TaskType_Title_UpdateATT "改变ATT射频增益"
#define UI_TaskType_Title_UpdateAGCMGC "改变接收增益"
#define UI_TaskType_Title_UpdateSQL "改变静噪值"
#define UI_TaskType_Title_DistressGuardSet "遇险职守设置"
#define UI_TaskType_Title_RoutineGuardSet "例行职守设置"
#define UI_TaskType_Title_DSCTest "DSC 测试任务"
#define UI_TaskType_Title_SelfChecking "自检"
#define UI_TaskType_Title_HostInfoQuery "查询主机信息"
#define UI_TaskType_Title_UpdateApp "更新程序"
#define UI_TaskType_Title_CallBeforePrepareTask "进行呼叫前准备"
#define UI_TaskType_Title_ListenBeforePrepareTask "进行收听前准备"
#define UI_TaskType_Title_ResponseBeforePrepareTask "进行回应前准备"

#define UI_TaskType_Title_Scan "SSB扫描"
#define UI_TaskType_Title_UpdatePowTrim  "功率微调"
#define UI_TaskType_Title_NBDPConnect "NBDP连接"
#define UI_TaskType_Title_NBDPDisconnect "NBDP断开"
#define UI_TaskType_Title_NBDPScan "NBDP扫描"
#define UI_TaskType_Title_NBDPSelfCheck "NBDP自检"
#define UI_TaskType_Title_NBDPTest "NBDP测试"


#define UI_APPCONST_TaskType_PowerOn 1
#define UI_APPCONST_TaskType_ManualTune 2
#define UI_APPCONST_TaskType_SwitchChannel 3
#define UI_APPCONST_TaskType_SwitchWorkModel 4
#define UI_APPCONST_TaskType_UpdateTX 5
#define UI_APPCONST_TaskType_UpdateRX 6
#define UI_APPCONST_TaskType_UpdateRXTrim 7
#define UI_APPCONST_TaskType_UpdatePow 8
#define UI_APPCONST_TaskType_UpdateATT 9
#define UI_APPCONST_TaskType_UpdateAGCMGC 10
#define UI_APPCONST_TaskType_UpdateSQL 11
#define UI_APPCONST_TaskType_DistressGuardSet 12
#define UI_APPCONST_TaskType_RoutineGuardSet 13
#define UI_APPCONST_TaskType_DSCTest 14
#define UI_APPCONST_TaskType_SelfChecking 15
#define UI_APPCONST_TaskType_HostInfoQuery 16
#define UI_APPCONST_TaskType_UpdateAPP 17
#define UI_APPCONST_TaskType_Scan 18
#define UI_APPCONST_TaskType_UpdatePowTrim 19
//NBDP
#define UI_APPCONST_TaskType_NBDPConnect 20
#define UI_APPCONST_TaskType_NBDPDisconnect 21
#define UI_APPCONST_TaskType_NBDPScan 22
#define UI_APPCONST_TaskType_NBDPSelfCheck 23
#define UI_APPCONST_TaskType_NBDPTest 24

#define UI_APPCONST_TaskType_CallBeforePrepareTask 100
#define UI_APPCONST_TaskType_ListenBeforePrepareTask 200
#define UI_APPCONST_TaskType_ResponseBeforePrepareTask 300

#define PopuMessageTag_Prompt_Normal 0
#define PopuMessageTag_Prompt_GPSUpdate 1
#define PopuMessageTag_Prompt_PasswordError 2
#define PopuMessageTag_Prompt_SceneMax 3
#define PopuMessageTag_Prompt_ScanExit 4
#define PopuMessageTag_Prompt_NewMessage 5
#define PopuMessageTag_Prompt_NewDistressCancelMessage 6
#define PopuMessageTag_ASK_NewMessage 7
#define PopuMessageTag_ASK_NewDistressCancelMessage 8
#define PopuMessageTag_ASK_ModifyFrequency 9
#define PopuMessageTag_ASK_ExitScene 10
#define PopuMessageTag_ASK_PackupScene 11
#define PopuMessageTag_ASK_Recover 12
#define PopuMessageTag_ASK_UpdateDSP 13
#define PopuMessageTag_ASK_UpdateFPGA 14
#define PopuMessageTag_ASK_UpdateMCU 15
#define PopuMessageTag_ASK_UpdateSoftware 16
#define PopuMessageTag_ASK_CancelDistress 17
#define PopuMessageTag_ASK_SingleCallNoResponse 18
#define PopuMessageTag_ASK_PSTNConnectNoResponse 19
#define PopuMessageTag_ASK_PSTNConnectNonobservance 20
#define PopuMessageTag_ASK_PSTNTestNonobservance 21
#define PopuMessageTag_ASK_PSTNReceivedOverACK 22
#define PopuMessageTag_Prompt_PSTNTestCallTimeout 23
#define PopuMessageTag_Prompt_PSTNConnectConversation 24
#define PopuMessageTag_Prompt_PSTNReceivedOverACK 25
#define PopuMessageTag_Prompt_PSTNModifyFrequency 26
#define PopuMessageTag_Prompt_PSTNCallOver 27

//NBDP
#define PopuMessageTag_Prompt_NBDPConnecting 28
#define PopuMessageTag_Prompt_NBDPConnectSuccess 29
#define PopuMessageTag_Prompt_NBDPConnectFailure 30

#define PopuMessageTag_ColorFlag_Normal "Normal"
#define PopuMessageTag_ColorFlag_Routine "Routine"
#define PopuMessageTag_ColorFlag_Security "Security"
#define PopuMessageTag_ColorFlag_Urgency "Urgency"
#define PopuMessageTag_ColorFlag_Distress "Distress"
#define PopuMessageTag_ColorFlag_Warning "Warning"

#define  UI_APPCONST_DistressCall_SendingTime 10
#define  UI_APPCONST_DistressCall_ACKWaitingTime 240
#define  UI_APPCONST_DistressCall_CancelSendingTime 10
#define  UI_APPCONST_DistressCalled_Received_WaitingTime 300
#define  UI_APPCONST_DistressCalled_ACK_SendingTime 10
#define  UI_APPCONST_DistressCalled_ACKComplated_WaitingTime 300

#define  UI_APPCONST_PersonalCall_SendingTime 10
#define  UI_APPCONST_PersonalCall_ACKSendingTime 10
#define  UI_APPCONST_SingleCall_ACKWaitingTime 270

#define  UI_APPCONST_PSTNCall_ConnectingTime 10
#define  UI_APPCONST_PSTNCall_ConnectACKWaitingTime 25
#define  UI_APPCONST_PSTNCall_TestingTime 10
#define  UI_APPCONST_PSTNCall_TestACKWaitingTime 25
#define  UI_APPCONST_PSTNCall_OverSendingTime 10



#define TX_LED_Current_Value  1.3
#define TUNE_Standing_wave_Value  2.0
#define TUNE_StartTune_Time 10000
#define TUNE_Wait_Standingwave_Time 1000
#define TUNE_Checking_Standingwave_Time 15
#define TUNE_StopTune_Time 10000
#define TUNE_Prompt_DisplayTime 5
#define SSB_StartSSB_Time 10000
#define DSC_StartDSC_Time 10000
#define Coerce_StartCoerce_Time 10000
#define Rest_Start_Time 10000
#define RX_StartRX_Time 10000
#define TX_StartTX_Time 10000
#define RXTrim_StartRXTrim_Time 10000
#define PowTrim_StartPowTrim_Time 10000
#define SendOutModeRange_StartSendOut_Time 10000
#define DSCDataType_StartDSCData_Time 10000
#define ATT_Start_Time 10000
#define AGCMGC_Start_Time 10000
#define SQL_Start_Time 10000
#define Guard_Start_Time 10000
#define SelfChecking_Start_Time 5
#define HostInfoQuery_Start_Time 5
#define UpdateApp_Start_Time 10000


#define NBDP_StartNBDP_Time 10000
#define NBDPScan_StartNBDPScan_Time 10000
#define NBDPDataType_StartNBDPData_Time 10000



#endif // UIDEFINEAPPCONST_H
