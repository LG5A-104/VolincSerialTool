#ifndef UIDEFINETYPE_H
#define UIDEFINETYPE_H
#include <QString>
#include <QDateTime>
#include <QTime>
#include <QHash>
#include <QColor>
#pragma pack(push,1)
namespace UIAppType
{
//数据库脚本
struct type_DBScript
{
    QString s_DBName;
    QString s_Script;

};
//注册信息
struct type_Register
{
    QString  s_Compary;
    QString  s_Tel;
    QString  s_Name;
};
/******************************************************************************
************************ 主界面软功能区【功能】编辑界面状态******************
备注：共4个状态
0、Status_0（状态0）：初始状态为状态0；按【1】进入状态1；按非【1】键保持在状态0；
1、Status_1（状态1）：状态1下，按【7】进入状态2；按【1】保持在状态1；按非【7】、非【1】键跳到状态0；
2、Status_2（状态2）：按【5】进入状态3；按【1】进入状态1；按非【5】、非【1】键跳到状态0；
3、Status_3（状态3）：状态3，即弹出功率微调对话框，且跳到状态0；


******************************************************************************/

enum EnumFuncDialogStatus{Status_0=0,Status_1=1,Status_2=2,Status_3=3};

/************************************************************
 ************************ 设备参数定义**********************
 ************************************************************/
struct type_SoftVer
{
    QString s_MachineModel;
    QString s_ControlUnitVer;
    QString s_DSPVer;
    QString s_FPGAVer;
    QString s_MCUVer;
};
enum EnumUpdateAPPTypes{DSP=1,FPGA=2,MCU=3,UIAPP=4};

enum EnumThemeTypes {Day=1,Night=2};
struct type_ThemeQSS
{
    QString s_UISkinQSS;
    QString s_LabelButtonQSS;
    QString s_LabelImageButtonQSS;
    QString s_ParamTitleLabelQSS;
    QString s_MenuEditorQSS;
    QString s_MenuEditorItemQSS;
    QString s_CharListEditorQSS;
    QString s_NumberEditorQSS;
    QString s_UIGridItemQSS;
    QString s_ContainerFrameQSS;
    QString s_SceneItemQSS;
    QString s_UITitleBarQSS;
    QString s_UIStatusBarQSS;
    QString s_UIMessageBoxQSS;

    QColor s_CharListNumberSideLineColor;
    QColor s_NumberEditorLineColor;
    QColor s_MDITitleBarLineColor;
    QColor s_MDIStatusBarLineColor;
    QColor s_MainDialogSplitLineColor;
    QColor s_MenuDialogSideLineColor;
    QColor s_GridItemLineColor;

};
enum EnumLanguages  {Chinese=1,English=2};

enum EnumGPSSource  {Manual=1,NoInformation =2,GPSDevice=3};
enum EnumGPSTypes   {Long=1,Lat=2};
enum EnumGPSStatus  {BuiltIn=0,Extraposition=1};
enum EnumUpdateLocationTimeTypes {UpdateTimeTypes_30=1,UpdateTimeTypes_60=2};
enum EnumGPSCoordOrientTypes
{
    CoordOrient_E=1,
    CoordOrient_W=2,
    CoordOrient_S=3,
    CoordOrient_N=4
};
struct type_GPSCoordValue
{
    int s_Degree;
    int s_Minute;
    int s_Second;
    EnumGPSCoordOrientTypes s_Orient;
} ;
struct type_GPS
{
    type_GPSCoordValue s_Long;
    type_GPSCoordValue s_Lat;
    QTime s_GPSTime;
    //是否有效
    bool s_IsValid;
};
struct type_SeaAreaRangeCircle
{
    int s_LatDegree;
    int s_LatMinute;
    EnumGPSCoordOrientTypes s_LatOrient;
    int s_LongDegree;
    int s_LongMinute;
    EnumGPSCoordOrientTypes s_LongOrient;
    //海区圆周半径
    int s_CR;
};
struct type_SeaAreaRangeQuadrant
{
    int s_LatDegree;
    EnumGPSCoordOrientTypes s_LatOrient;
    int s_LongDegree;
    EnumGPSCoordOrientTypes s_LongOrient;
    //纬度跨度
    int s_LatOffset;
    //经度跨度
    int s_LongOffset;
};
struct type_MMSI
{
    int s_MMSI1;
    int s_MMSI2;
    int s_MMSI3;
    int s_MMSI4;
    int s_MMSI5;
    int s_MMSI6;
    int s_MMSI7;
    int s_MMSI8;
    int s_MMSI9;
    int s_MMSI;
};
struct type_TimeZone
{
    int s_TimeZoneID;
    int s_JetLag;
    QString s_ChineseZone;
    QString s_EnglishZone;
};
struct type_SystemParamenters
{
    EnumGPSSource s_GPSSource;
    EnumLanguages s_Language;
    EnumThemeTypes s_Theme;
    type_TimeZone s_TimeZone;
    type_MMSI s_MMSI;
    type_MMSI s_GroupMMSI;
    type_GPS s_ManualGPS;
    type_GPS s_StatusReortGPS;
    EnumUpdateLocationTimeTypes s_UpdateLocationTime;
    //type_SoftVer s_SoftVer;
};



/************************************************************
 ************************ 设备工作参数定义**********************
 ************************************************************/
enum EnumWorkModelTypes {SSB=1,DSC=2,AM=3,NBDP=4};
enum EnumAGCMGCTypes {AGC_FAST=1,AGC_SLOW=2,MGC=3};
enum EnumSQLTypes {SQL_ON=1,SQL_OFF=2,SQL_SET=3};
enum EnumATTTypes {ATT_S=1,ATT_PRE=2,ATT_L=3};
enum EnumPOWTypes {POW_H=1,POW_M=2,POW_L=3};
struct type_FunctionParamenters
{
    //设备工作模式
    EnumWorkModelTypes s_WorkModel;
    //接收增益类型
    EnumAGCMGCTypes  s_AGCMGCType;
    //增益值
    int s_MGCValue;
    //发射增益
    EnumATTTypes  s_ATTType;
    //SQL类型
    EnumSQLTypes s_SQLType;
    //SQL
    int s_SQL;
    //功率值
    EnumPOWTypes s_POWType;
};
/************************************************************
 ************************ 状态报告定义**********************
 ************************************************************/
struct type_StatusReport
{
    //电压(实际值减去10，再乘以10，精确到0.1,0 对应10V,测试范围在10V~35.5V)
    unsigned int  s_Voltage;
    //电流 功放电流检测值，0~255，实际值乘以5 精确到0.1 显示范围为0~25.5A
    unsigned int  s_Electricity;
    //驻波比 功放驻波比检测值，0~255，实际值乘以10 精确到0.1 显示范围0~25.5
    double s_Standing_wave;
    //前向功率
    unsigned int s_BeforPower;
    //反向功率
    unsigned int s_ReversePower;
    //功放温度 功放温度检测值，高字节代表功放温度， -127~127，最高位为
    //符号位，比如-20 度用0x94 表示，20 度用0x14 表示
    int s_PowerTempera;
    //信号强度
    unsigned int s_SignalIntensity;
    //遇险职守序号
    unsigned int s_DistressGuardNo;
    //例行职守序号
    unsigned int s_RoutineGuardNo;
    //天调连接
    bool s_AntennaeConnection;
    //天调调谐状态
    bool s_AntennaeTuneStatus;
    //功放状态
    bool s_PowerStatus;
    //GPS坐标
    type_GPS s_GPS;
    //GPS状态
    EnumGPSStatus s_GPSStatus;
    //状态报告最后一次时间
    QTime s_LastTime;
    //是否失效
    bool s_IsValid;
};
/************************************************************
 ************************ 功率微调定义**********************
************************************************************/

struct type_POWTrim
{
    int s_ID;
    int s_Trim;

};//20151207

struct type_PowTrimUnit
{
    int ID;
    int Value;

};

struct type_PowTrim
{
    int PowTrim_1M;
    int PowTrim_2M;
    int PowTrim_3M;
    int PowTrim_4M;
    int PowTrim_5M;
    int PowTrim_6M;
    int PowTrim_7M;
    int PowTrim_8M;
    int PowTrim_9M;
    int PowTrim_10M;
    int PowTrim_11M;
    int PowTrim_12M;
    int PowTrim_13M;
    int PowTrim_14M;
    int PowTrim_15M;
    int PowTrim_16M;
    int PowTrim_17M;
    int PowTrim_18M;
    int PowTrim_19M;
    int PowTrim_20M;
    int PowTrim_21M;
    int PowTrim_22M;
    int PowTrim_23M;
    int PowTrim_24M;
    int PowTrim_25M;
    int PowTrim_26M;
    int PowTrim_27M;
    int PowTrim_28M;
    int PowTrim_29M;
    int PowTrim_30M;
};
/************************************************************
************************ 信道定义**********************
************************************************************/
enum EnumChannelClass{ChannelClass_SSB=1,ChannelClass_DSC=2,ChannelClass_NBDP=3};
enum EnumChannelTypes
{
    ChannelTypes_DSCDistress=1,
    ChannelTypes_DSCINTL=2,
    ChannelTypes_DSCLOCAL=3,
    ChannelTypes_DSCUser=4,
    ChannelTypes_DSCNormal=5,
    ChannelTypes_SSBDistress=6,
    ChannelTypes_SSBBaseStation=7,
    ChannelTypes_SSBUser=8,
    ChannelTypes_SSBITU=9,
    ChannelTypes_Temp=10,
    ChannelTypes_DSCSecurityUrgency=0xA|ChannelTypes_DSCDistress,

    ChannelTypes_DSCRoutine=0xA|ChannelTypes_DSCINTL|ChannelTypes_DSCLOCAL|ChannelTypes_DSCUser,

    ChannelTypes_DSCMask = ChannelTypes_DSCDistress|
    ChannelTypes_DSCRoutine|
    ChannelTypes_DSCUser|
    ChannelTypes_DSCNormal,

    ChannelTypes_SSBMask= ChannelTypes_SSBDistress|
    ChannelTypes_SSBBaseStation|
    ChannelTypes_SSBUser|
    ChannelTypes_SSBITU,
    ChannelTypes_NBDP=0

};

Q_DECLARE_FLAGS(ChannelTypes, EnumChannelTypes)
struct type_Channel
{
    int s_ID;
    int s_ChannelID;
    QString s_ChannelName;
    double s_TX;
    double s_RX;
    double s_RXTrimValue;
    bool s_IsAllowEdit;
    EnumChannelClass s_ChannelClass;
    EnumChannelTypes s_ChannelType;
    int s_CorrespondChannelID;
};
/************************************************************
************************ SSB参数定义**********************
************************************************************/
enum EnumSSBScanTypes{Scan_Channel=1,Scan_Frequency=2};
struct type_SSBScanByChannel
{
    int s_Start;
    int s_End;
    int s_ScanLeve;
    int s_Speed;
    int s_Cycle;
};
struct type_SSBScanFrequency
{
    double s_Start;
    double s_End;
    int s_Interval;
    int s_ScanLeve;
    int s_Speed;
};
struct type_SSB
{
    int s_ChannelID;
    EnumSSBScanTypes s_ScanType;
    type_SSBScanByChannel s_ScanByChannel;
    type_SSBScanFrequency s_ScanByFrequency;
    int s_Cycle;
};
/************************************************************
************************ DSC参数定义**********************
************************************************************/
enum EnumAutoACKPolicyTypes
{
    AutoACKPolicy_PersonalCall=1,
    AutoACKPolicy_PSTNType=2,
    AutoACKPolicy_Cause=3,
    AutoACKPolicy_LocationCall=4,
    AutoACKPolicy_CheckingCall=5,
    AutoACKPolicy_TestingCall=6
};
enum EnumAutoACKPersonalCallTypes
{
    AutoACKPersonalCallType_Nonobservance=1,
    AutoACKPersonalCallType_Manaul=2
};
enum EnumAutoACKPSTNTypes
{
    AutoACKPSTNType_Observe=1,
    AutoACKPSTNType_Nonobservance=2
};
enum EnumAutoACKLocationCallTypes
{
    AutoACKLocationCallType_Observe=1,
    AutoACKLocationCallType_Nonobservance=2,
    AutoACKLocationCallType_Manaul=3
};
enum EnumAutoACKQueryCallTypes
{
    AutoACKQueryCallType_Auto=1,
    AutoACKQueryCallType_Manual=2
};
enum EnumAutoACKTestCallTypes
{
    AutoACKTestCallType_Auto=1,
    AutoACKTestCallType_Manual=2
};
enum EnumAutoACKCauseTypes
{
    AutoACKCauseType_Unknown=1,
    AutoACKCauseType_UnableUseChannel=2
};
enum EnumAlamDISTypes
{
    AlamDIS_CLose=1,
    AlamDIS_500=2
};

enum EnumDSCTestTypes
{
    DSCTest_Data=1,
    DSCTest_0=2,
    DSCTest_1=3,
    DSCTest_01=4
};

//NBDP
enum EnumNBDPConnectProcess
{
    NBDPConnectProcess_Connecting=0,
    NBDPConnectProcess_ConnectSuccess=1,
    NBDPConnectProcess_ConnectFailure=2
};
enum EnumNBDPConnectStatus
{
    NBDPConnectStatus_Connected=0,
    NBDPConnectStatus_UnConnected=1

};

enum EnumNBDPModeTypes
{
    NBDPMode_ARQ=1,
    NBDPMode_BFEC=2,
    NBDPMode_SFEC=3
};

enum EnumNBDPTuneProcess
{
    NBDPTuneProcess_Stop=0,
    NBDPTuneProcess_Start=1
};
enum EnumNBDPTuneResult
{
    NBDPTuneResult_Failure=0,
    NBDPTuneResult_Success=1
};

enum EnumNBDPTuneMode
{
    NBDPTuneMode_AUTO=0,
    NBDPTuneMode_MANUAL=1
};

enum EnumNBDPScanModeTypes
{
    NBDPScanMode_ARQ=1,
    NBDPScanMode_FEC=2,
    NBDPScanMode_AUTO=3
};

enum EnumNBDPScanRequestTypes
{
    NBDPScanRequest_Start=1,
    NBDPScanRequest_Stop=2
};


enum EnumNBDPScanResultTypes
{
    NBDPScanResult_NoSignal=0,
    NBDPScanResult_YesSignal=1
};

enum EnumNBDPSelfCheckTXModuleStatus
{
    NBDPSelfCheckTXModule_false=0,
    NBDPSelfCheckTXModule_right=1
};
enum EnumNBDPSelfCheckRXModuleStatus
{
    NBDPSelfCheckRXModule_false=0,
    NBDPSelfCheckRXModule_right=1
};

enum EnumNBDPTestTypes
{
    NBDPTest_0=0,
    NBDPTest_1=1,
    NBDPTest_01=2,
    NBDPTest_Data=3
};

enum EnumNBDPRXTXTypes
{
    NBDPRXTXType_Receive=0,
    NBDPRXTXType_Transmit=1
};



struct type_GuardDistressFrequency
{
    int s_ID;
    int s_DSCChannelID;
    QString s_DSCChannelName;
    double s_FrequencyTX;
    double s_FrequencyRX;
    bool s_Opened;
    bool s_IsMust;
};
struct type_GuardRoutineFrequency
{
    int s_ID;
    int s_DSCChannelID;
    QString s_DSCChannelName;
    double s_FrequencyTX;
    double s_FrequencyRX;
    bool s_Closed;
};
enum EnumCallNonobservanceCause
{
    NonobservanceCause_None=0,
    NonobservanceCause_Unknown=100,
    NonobservanceCause_Blocking=101,
    NonobservanceCause_Busy=102,
    NonobservanceCause_Queue=103,
    NonobservanceCause_Banned=104,
    NonobservanceCause_NoOperator=105,
    NonobservanceCause_TemporaryNoOperator=106,
    NonobservanceCause_DeviceStop=107,
    NonobservanceCause_UnableUseChannel=108,
    NonobservanceCause_UnableUseModel=109
};
struct type_AutoACKPolicy
{
    EnumAutoACKPersonalCallTypes s_PersonalCall;
    EnumAutoACKPSTNTypes s_PSTN;
    EnumAutoACKLocationCallTypes s_LocationCall;
    EnumAutoACKQueryCallTypes s_QueryCall;
    EnumAutoACKTestCallTypes s_TestingCall;
    //EnumAutoACKCauseTypes s_Cause;
    EnumCallNonobservanceCause s_Cause;
};
struct type_DSC
{
    int s_ChannelID;
    EnumAlamDISTypes  s_AlamDIS;
    type_AutoACKPolicy s_AutoACKPolicy;
    EnumDSCTestTypes S_DSCTestType;
};



struct type_NBDP_ConnectBeforePara
{
    //模式
    EnumWorkModelTypes s_WorkModel;

    int s_ID;
    int s_ChannelID;
    QString s_ChannelName;
    double s_TX;
    double s_RX;
    double s_RXTrimValue;
    bool s_IsAllowEdit;

    EnumChannelTypes s_ChannelType;
    int s_CorrespondChannelID;


};

struct type_NBDP_Connect
{
    EnumNBDPConnectStatus s_NBDPConnectStatus;
    EnumNBDPConnectProcess s_NBDPConnectProcess;
    EnumNBDPModeTypes s_NBDPModeType;
    unsigned int s_TX;
    unsigned int s_RX;
    unsigned long long s_CallCode;
    EnumNBDPTuneProcess s_NBDPTuneProcess;
    EnumNBDPTuneResult s_NBDPTuneResult;
    EnumNBDPTuneMode s_NBDPTuneMode;
};

struct type_NBDP_Scan
{
    EnumNBDPScanModeTypes s_NBDPScanModeType;
    unsigned int s_TX;
    unsigned int s_RX;
    EnumNBDPScanRequestTypes s_NBDPScanRequestType;
    EnumNBDPScanResultTypes s_NBDPScanResultType;
};

struct type_NBDP_SelfCheck
{
    EnumNBDPSelfCheckTXModuleStatus s_TXModuleStatus;
    EnumNBDPSelfCheckRXModuleStatus s_RXModuleStatus;
};

struct type_NBDP_DataType
{
    unsigned int s_TX;
    EnumNBDPTestTypes s_NBDPTestType;
};


struct type_NBDP_FollowCommunicate
{
    EnumNBDPModeTypes s_NBDPModeType;
    unsigned int s_TX;
    unsigned int s_RX;
    type_MMSI s_MMSI;
    EnumNBDPRXTXTypes s_RXTXType;
};


struct type_NBDP
{
    struct type_NBDP_ConnectBeforePara  s_NBDPConnectBeforePara;
    //UIAppType::type_Channel s_NBDP_ConnectBeforePara;

    int s_ChannelID;
    unsigned int s_TX;
    unsigned int s_RX;

    struct type_NBDP_Connect s_NBDPConnect;
    struct type_NBDP_Scan s_NBDPScan;
    struct type_NBDP_SelfCheck s_NBDPSelfCheck;
    struct type_NBDP_DataType s_NBDPDataType;

    struct type_NBDP_FollowCommunicate s_NBDPFollowCommunicate;

//    unsigned long  s_CallCode;
//    EnumNBDPTestTypes s_NBDPTestType;
//    EnumNBDPModeTypes s_NBDPModeType;
//    EnumNBDPScanModeTypes s_NBDPScanModeType;
//    EnumNBDPScanRequestTypes s_NBDPScanRequestType;
//    EnumNBDPScanProcessTypes s_NBDPScanProcess;
//    EnumNBDPScanResultTypes s_NBDPScanResult;
//    EnumNBDPConnectStatus s_NBDPConnectStatus;
//    EnumNBDPTuneMode s_NBDPTuneMode;


};

struct type_SerialConfig
{
    //串口编号
    QString s_SerialPortName;
    //波特率
    int s_SerialBaudrate;
    //停止位
    int s_SerialStopBit;
    //校验位
    int s_SerialParity;
};
struct  type_SelfCheckingResult
{
    //电源模块
    //bool s_PowOut;//功率输出
    bool s_ElectricSourceModule;
    //核心模块
    //bool s_StimulateOut;//激励输出
    bool s_CoreModule;
    //功放模块
    //bool s_RFOut;//射频输入
    bool s_PowerAmpModule;
    //后选器模块
    //bool s_CommunicationLine;//通信链路
    bool s_RearSelectModule;
    //电压输入
    //bool s_VoltageIn;
    //SDRAM
    bool s_SDRAM;
    //FLASH
    bool s_FLASH;
    //DSP
    bool s_DSP;
    //FPGA
    bool s_FPGA;
    //MCU
    bool s_MCU;
};
struct type_HostInfoQueryResult
{
    //DSPVer版本
    int DSPVer;
    //FPGAVer版本
    int FPGAVer;
    //MCU版本
    int MCUVer;
};



/************************************************************
************************全局参数定义*************************
************************************************************/
struct type_GlobalParamenters
{
    type_SystemParamenters s_SystemParas;
    type_FunctionParamenters s_FunctionParas;
    type_Channel s_ActiveChannel;
    type_Channel s_LastChannel;
    type_SSB s_SSB;
    type_DSC s_DSC;
    type_NBDP s_NBDP;
};
/************************************************************
************************  电话本类型定义**********************
************************************************************/
enum EnumPhoneBookTypes
{
    PhoneBookTypes_Slipway=1,
    PhoneBookTypes_BaseStation=2,
    PhoneBookTypes_Group=3,
    PhoneBookTypes_PSTN=4
};
struct type_PhoneBookRecord
{
    int64_t s_ID;
    QString s_Name;
    QString s_PhoneNumber;
    EnumPhoneBookTypes s_PhoneBookType;
};
/************************************************************
************************  呼叫类型定义**********************
************************************************************/
enum EnumCallClass
{
    CallClass_PersonalCall=1,
    CallClass_FleetCall =2,
    CallClass_SeaAreaCall=3,
    CallClass_LocationCall=4,
    CallClass_TestingCall=5,
    CallClass_PSTNCall=6,
    CallClass_PSTNCallOver=7,
    CallClass_Distress=8,
    CallClass_SeaAreaForward=9,
    CallClass_BaseStationForward=10,
    CallClass_NeutralityCall=11,
    CallClass_MedicalCall=12,
    CallClass_Query=13
};
enum EnumReceivedMessageTypes
{
    ReceivedPersonalCall=120,
    ReceivedPersonalCallACK=2,
    ReceivedFleetCall=114,
    ReceivedSeaCall=102,
    ReceivedLocationCall=5,
    ReceivedLocationCallACK=6,
    ReceivedTestCall=7,
    ReceivedTestCallACK=8,
    ReceivedQueyCall=9,
    ReceivedNeutralityCall=10,
    ReceivedMedicalCall=11,
    ReceivedDistress=112,
    ReceivedDistressACK=116,
    ReceivedBaseStationForward=14,
    ReceivedBaseStationForwardACK=15,
    ReceivedSeaAreaForward=102,
    ReceivedSeaAreaACK=17
};
enum EnumCallPrioritys
{
    CallPrioritys_Routine=1,
    CallPrioritys_Security=2,
    CallPrioritys_Urgency=3,
    CallPrioritys_Distress=4
};
enum EnumCommunicationModes
{
    Communication_None=0,
    Communication_J3ETP=109,
    Communication_FIBFEC=113,
    Communication_FIBARQ=115
};
enum EnumCallACKTypes
{
    CallACKType_Observe=1,
    CallACKType_Nonobservance=2,
    CallACKType_ModifyFrequency=3
};

enum EnumCallTypes
{
    // 主叫
    CallType_Caller =1,
    //  被叫
    CallType_Called=2
};
enum EnumCallInforTypes
{
    CallInforTypes_Frequency=1,
    CallInforTypes_POS=2,
    CallInforTypes_None=3
};
enum EnumCallInforInputTypes
{
    CallInforInputTypes_CH=1,
    CallInforInputTypes_Frequency=2,
    CallInforInputTypes_Pos=3,
    CallInforInputTypes_None=4
};
enum EnumCallSponsorTypes
{
    CallSponsorTypes_Slipway=1,
    CallSponsorTypes_BaseStation=2,
    CallSponsorTypes_Fleet =3,
    CallSponsorTypes_None=4
};
/************************************************************
************************ 呼叫日志定义**********************
************************************************************/
enum EnumMessageStatus
{
    MessageStatus_Read=1,
    MessageStatus_Unread=2
};
enum EnumLogClass
{
    LogClass_DistressReceived=1,
    LogClass_GeneralReceived=2,
    LogClass_Send=3
};
enum EnumMessageTypes
{
    MessageTypes_DistressCaller=1,
    MessageTypes_DistressCalled=2,
    MessageTypes_CancelDistressCall=3,
    MessageTypes_DistressCallACK=4,
    MessageTypes_CancelDistress=5,
    MessageTypes_BaseStationForwardCaller=6,
    MessageTypes_BaseStationForwardCalled=7,
    MessageTypes_BaseStationForwardACK=8,
    MessageTypes_SeaAreaForwardCaller=9,
    MessageTypes_SeaAreaForwardCalled=10,
    MessageTypes_PersonalCaller=11,
    MessageTypes_PersonalCalled=12,
    MessageTypes_PersonalCallACK=13,
    MessageTypes_FleetCaller =14,
    MessageTypes_FleetCalled =15,
    MessageTypes_SeaAreaCaller=16,
    MessageTypes_SeaAreaCalled=17,
    MessageTypes_LocationCaller=18,
    MessageTypes_LocationCalled=19,
    MessageTypes_LocationCallACK=20,
    MessageTypes_TestCaller=21,
    MessageTypes_TestCalled=22,
    MessageTypes_TestingCallACK=23,
    MessageTypes_NeutralityCaller=24,
    MessageTypes_NeutralityCalled=25,
    MessageTypes_MedicalCaller=26,
    MessageTypes_MedicalCalled=27,
    MessageTypes_QueryCalled=28,
    MessageTypes_QueryCallACK=29,
    MessageTypes_PSTNCaller=30,
    MessageTypes_PSTNCalled=31,
    MessageTypes_PSTNCallACK=32,
    MessageTypes_PSTNCallCost=33
};
struct type_CallLog
{
    int64_t s_LogID;
    EnumLogClass s_LogClass;
    QDateTime s_LogDateTime;
    int64_t s_MessageID;
    EnumMessageTypes s_MessageType;
    EnumMessageStatus s_MessageStatus;
    QString s_MessageSource;
    QString s_Back;
};

/************************************************************
************************呼叫基类定义*************************
************************************************************/
struct type_BaseCall
{
    int64_t s_CallID;
    //呼叫主键值
    type_MMSI s_CallPrimary;
    EnumCallClass s_CallClass;
    EnumCallTypes s_CallType;
    EnumCallPrioritys s_CallPriority;
    QDateTime s_CallDateTime;
    //呼叫信道
    type_Channel s_DSCChannel;
    //通信信道
    type_Channel s_SSBChannel;
    //阅读标记
    EnumMessageStatus s_MessageStatus;
};
//呼叫回应ACK
struct type_BaseCallACK
{
    int64_t s_ACKID;
    UIAppType::EnumCallTypes s_CallType;
    int64_t s_CallID;
    int s_DSCFrequency;
};
/************************************************************
************************遇险定义*************************
************************************************************/
enum EnumDistressNatures
{
    //火灾爆炸
    Natures_Fir_explosion=100,
    //进水
    Natures_Flooding=101,
    //撞船
    Natures_Collision=102,
    //搁浅
    Natures_Grounding=103,
    //船倾斜/有翻船风险
    Natures_Capsizing=104,
    //下沉
    Natures_Sinking=105,
    //失控漂流
    Natures_Adrift=106,
    //未知
    Natures_Undesignated=107,
    //弃船
    Natures_AbandoningShip=108,
    //海盗/武装抢劫
    Natures_Piracy_Armed=109,
    //人员落水
    Natures_Man_Overboard=110
};
//遇险主叫状态
enum EnumDistressCallerStatus
{
    DistressCallerStatus_Editing=1,
    DistressCallerStatus_Sending=2,
    DistressCallerStatus_ACKWaiting=3,
    DistressCallerStatus_ACKReceived=4,
    DistressCallerStatus_CancelEditing=5,
    DistressCallerStatus_CancelSending=6,
    DistressCallerStatus_CancelWaitNextFrq=7,
    DistressCallerStatus_Over=8
};
//遇险被叫状态
enum EnumDistressCalledStatus
{
    DistressCalledStatus_Received=1,
    DistressCalledStatus_Response=2,
    DistressCalledStatus_ACKSending=3,
    DistressCalledStatus_ACKDealCompleted=4,
    DistressCalledStatus_ACKReceived=5,
    DistressCalledStatus_Over=6
};
//遇险岸台转发主叫状态
enum EnumBaseStationForwardCallerStatus
{
    BaseStationForwardCallerStatus_Editing=1,
    BaseStationForwardCallerStatus_Sending=2,
    BaseStationForwardCallerStatus_ACKWaiting=3,
    BaseStationForwardCallerStatus_ACKWaitTimeOut=4,
    BaseStationForwardCallerStatus_ACKReceived=5,
    BaseStationForwardCallerStatus_ACKDealCompleted=6,
    BaseStationForwardCallerStatus_Over=7
};
//遇险海区转发主叫状态
enum EnumSeaAreaForwardCallerStatus
{
    SeaAreaForwardCallerStatus_Editing=1,
    SeaAreaForwardCallerStatus_Sending=2,
    SeaAreaForwardCallerStatus_SendCompleted=3,
    SeaAreaForwardCallerStatus_Over=4
};
//遇险海区转发被叫状态
enum EnumSeaAreaForwardCalledStatus
{
    SeaAreaForwardCalledStatus_Received=1,
    SeaAreaForwardCalledStatus_Over=4
};

//遇险被叫应答消息类型
enum EnumDistressCalledResponseTypes
{
    DistressCalledResponseTypes_DistressACK=1,
    DistressCalledResponseTypes_BaseStationForward=2,
    DistressCalledResponseTypes_SeaAreaForward=3
};
struct type_DistressCallACK:type_BaseCallACK
{

    type_MMSI s_ACKMMSI;
    type_MMSI s_DistressMMSI;
    EnumDistressNatures s_DistressNatures;
    type_GPS s_DistressLocation;
    UIAppType::EnumCommunicationModes s_CommunicationMode;
};
struct type_BaseStationForwardACK:type_BaseCallACK
{
    type_MMSI s_ACKMMSI;
    type_MMSI s_DistressMMSI;
    EnumDistressNatures s_DistressNatures;
    type_GPS s_DistressLocation;
    UIAppType::EnumCommunicationModes s_CommunicationMode;
};
//遇险主叫
struct type_DistressCaller:type_BaseCall
{
    type_MMSI s_DistressMMSI;
    //遇险性质
    EnumDistressNatures s_DistressNatures;
    //遇险位置
    type_GPS s_Location;
    //后续通信方式
    EnumCommunicationModes s_CommunicationMode;
    //回话状态
    EnumDistressCallerStatus s_Status;
    //遇险使用频点
    bool s_Freq1Checked;
    bool s_Freq2Checked;
    bool s_Freq3Checked;
    bool s_Freq4Checked;
    bool s_Freq5Checked;
    bool s_Freq6Checked;
    //收到确认
    type_MMSI s_ACKMMSI;
};
//遇险被叫
struct type_DistressCalled:type_BaseCall
{
    type_MMSI s_DistressMMSI;
    EnumDistressNatures s_DistressNatures;
    type_GPS s_Location;
    EnumCommunicationModes s_CommunicationMode;
    EnumDistressCalledStatus s_Status;
    QList<int> s_DistressDSCChannels;
    //接收遇险频点
    bool s_Freq1Checked;
    bool s_Freq2Checked;
    bool s_Freq3Checked;
    bool s_Freq4Checked;
    bool s_Freq5Checked;
    bool s_Freq6Checked;
    //收到确认
    type_MMSI s_ACKMMSI;
};
//遇险岸台转发主叫
struct type_BaseStationForwardCaller:type_BaseCall
{
    type_MMSI s_Sender;
    type_MMSI s_DistressMMSI;
    EnumDistressNatures s_DistressNatures;
    type_GPS s_Location;
    EnumCommunicationModes s_CommunicationMode;
    EnumBaseStationForwardCallerStatus s_Status;
    //收到确认
    type_MMSI s_ACKMMSI;
};
//遇险岸台转发被叫
struct type_BaseStationForwardCalled:type_BaseCall
{
    type_MMSI s_ComeFrom;
    type_MMSI s_DistressMMSI;
    EnumDistressNatures s_DistressNatures;
    type_GPS s_Location;
    EnumCommunicationModes s_CommunicationMode;
    EnumBaseStationForwardCallerStatus s_Status;
};
//遇险海区转发主叫
struct type_SeaAreaForwardCaller:type_BaseCall
{
    type_SeaAreaRangeQuadrant s_SeaAreaRange;
    type_MMSI s_DistressMMSI;
    EnumDistressNatures s_DistressNatures;
    type_GPS s_Location;
    EnumCommunicationModes s_CommunicationMode;
    EnumSeaAreaForwardCallerStatus s_Status;
};
//遇险海区转发被叫
struct type_SeaAreaForwardCalled:type_BaseCall
{
    type_MMSI s_ComeFrom;
    type_SeaAreaRangeQuadrant s_SeaAreaRange;
    type_MMSI s_DistressMMSI;
    EnumDistressNatures s_DistressNatures;
    type_GPS s_Location;
    EnumCommunicationModes s_CommunicationMode;
    EnumSeaAreaForwardCalledStatus s_Status;
};
/************************************************************
************************ 个人呼叫****************************
************************************************************/
enum EnumPersonCallerStatus
{
    PersonCallerStatus_Editing=1,
    PersonCallerStatus_Sending=2,
    PersonCallerStatus_ACKWaiting=3,
    PersonCallerStatus_ACKWaitTimeOut=4,
    PersonCallerStatus_ACKReceived=5,
    PersonCallerStatus_ACKDealCompleted=6,
    PersonCallerStatus_Over=7
};
enum EnumPersonCalledStatus
{
    PersonCalledStatus_Received=1,
    PersonCalledStatus_EditingACK=2,
    PersonCalledStatus_SendingACK=3,
    PersonCalledStatus_ComplatedACK=4,
    PersonCalledStatus_Over=5
};
struct type_PersonCallACK:type_BaseCallACK
{
    type_MMSI s_ACKMMSI;
    EnumCallACKTypes  s_ACKType;
    double s_CommunicationTX;
    double s_CommunicationRX;
    type_GPS s_Location;
    EnumCallNonobservanceCause s_NonobservanceCause;
};
//个人主叫
struct type_PersonCaller:type_BaseCall
{
    type_MMSI s_Sender;
    EnumCallSponsorTypes s_SenderType;
    EnumCallInforTypes s_RequestInforType;
    double s_RequestCommunicationTX;
    double s_RequestCommunicationRX;
    type_GPS s_RequestLocation;
    EnumCommunicationModes s_CommunicationMode;

    int64_t s_ACKID;
    EnumCallACKTypes  s_ReceivedACKType;
    double s_ReceivedCommunicationTX;
    double s_ReceivedCommunicationRX;
    type_GPS s_ReceivedLocation;
    EnumCallNonobservanceCause s_ReceivedNonobservanceCause;

    EnumPersonCallerStatus s_Status;
};

//个人被叫
struct type_PersonCalled:type_BaseCall
{
    type_MMSI s_ComeFrom;
    EnumCallSponsorTypes s_ComeFromType;
    EnumCallInforTypes s_ReceivedInforType;
    double s_ReceivedCommunicationTX;
    double s_ReceivedCommunicationRX;
    type_GPS s_ReceivedLocation;
    EnumCommunicationModes s_CommunicationMode;

    EnumCallACKTypes  s_ReplyACKType;
    double s_ReplyCommunicationTX;
    double s_ReplyCommunicationRX;
    type_GPS s_ReplyLocation;
    EnumCallNonobservanceCause s_ReplyNonobservanceCause;

    EnumPersonCalledStatus s_Status;
};
/************************************************************
************************ PSTN呼叫****************************
************************************************************/
enum EnumPSTNCallerStatus
{
    PSTNCallerStatus_Editing=1,
    PSTNCallerStatus_Connecting=2,
    PSTNCallerStatus_ConnectACKWaiting=3,
    PSTNCallerStatus_ConnectACKWaiting_TimeOut=4,
    PSTNCallerStatus_ConnectACKReceived=5,
    PSTNCallerStatus_Testing=6,
    PSTNCallerStatus_TestACKWaiting=7,
    PSTNCallerStatus_TestACKWaiting_TimeOut=8,
    PSTNCallerStatus_TestACKACKReceived=9,
    PSTNCallerStatus_OverSending=10,
    PSTNCallerStatus_OverACKWaiting=11,
    PSTNCallerStatus_OverACKReceived=12,
    PSTNCallerStatus_Over=13
};
enum EnumPSTNCalledStatus
{
    PSTNCalledStatus_Received=1,
    PSTNCalledStatus_ConnectACKSending=2,
    PSTNCalledStatus_SendingCompletedConnectACK=3,
    PSTNCalledStatus_Testing=4,
    PSTNCalledStatus_TestACKWaiting=5,
    PSTNCalledStatus_TestACKWaiting_TimeOut=6,
    PSTNCalledStatus_TestACKACKReceived=7,
    PSTNCalledStatus_OverSending=8,
    PSTNCalledStatus_OverACKWaiting=9,
    PSTNCalledStatus_OverACKReceived=10,
    PSTNCalledStatus_Over=11
};
struct type_PSTNCallACK:type_BaseCallACK
{
    type_MMSI s_ACKMMSI;
    EnumCallACKTypes  s_ACKType;
    double s_CommunicationTX;
    double s_CommunicationRX;
    QString s_PhoneNumber;
    EnumCallNonobservanceCause s_NonobservanceCause;
};
struct type_PSTNCallOverACK:type_BaseCallACK
{
    type_MMSI s_ACKMMSI;
    QString s_PhoneNumber;
    QTime s_Cost;
};
//PSTN呼叫
struct type_PSTNCaller:type_BaseCall
{
    type_MMSI s_Sender;
    QString s_PhoneNumber;
    EnumCommunicationModes s_CommunicationMode;

    //工作信道
    type_Channel s_WorkDSCChannel;
    //工作信道
    type_Channel s_WorkSSBChannel;

    int64_t s_ConnectACKID;
    EnumCallACKTypes  s_ReceivedConnectACKType;
    double s_ReceivedConnectACKCommunicationTX;
    double s_ReceivedConnectACKCommunicationRX;
    EnumCallNonobservanceCause s_ReceivedConnectACKNonobservanceCause;

    int64_t s_TestACKID;
    EnumCallACKTypes  s_ReceivedTestACKType;
    double s_ReceivedTestACKCommunicationTX;
    double s_ReceivedTestACKCommunicationRX;
    EnumCallNonobservanceCause s_ReceivedTestACKNonobservanceCause;

    int64_t s_OverACKID;
    QTime s_Cost;
    EnumPSTNCallerStatus s_Status;
};
//PSTN被叫
struct type_PSTNCalled:type_BaseCall
{
    type_MMSI s_ComeFrom;

    QString s_PhoneNumber;
    EnumCommunicationModes s_CommunicationMode;

    //工作信道
    type_Channel s_WorkDSCChannel;
    //工作信道
    type_Channel s_WorkSSBChannel;

    int64_t s_ConnectACKID;
    EnumCallACKTypes  s_ReplyConnectACKType;
    double s_ReplyConnectACKCommunicationTX;
    double s_ReplyConnectACKCommunicationRX;
    EnumCallNonobservanceCause s_ReplyConnectACKNonobservanceCause;

    int64_t s_TestACKID;
    EnumCallACKTypes  s_ReceivedTestACKType;
    double s_ReceivedTestACKCommunicationTX;
    double s_ReceivedTestACKCommunicationRX;
    EnumCallNonobservanceCause s_ReceivedTestACKNonobservanceCause;

    int64_t s_OverACKID;
    QTime s_Cost;

    EnumPSTNCalledStatus s_Status;
};
struct type_PSTNCallOver:type_BaseCall
{
    type_MMSI s_ComeFrom;
    QString s_PhoneNumber;
    EnumCommunicationModes s_CommunicationMode;
    //工作信道
    type_Channel s_WorkDSCChannel;
};
/**********************************************************
************************船队呼叫****************************
***********************************************************/
//船队主叫状态
enum EnumFleetCallerStatus
{
    FleetCallerStatus_Editing=1,
    FleetCallerStatus_Sending=2,
    FleetCallerStatus_SendComplated=3,
    FleetCallerStatus_Over=4
};
//船队被叫状态
enum EnumFleetCalledStatus
{
    FleetCalledStatus_Received=1,
    FleetCalledStatus_Over=2
};
//船队主叫
struct type_FleetCaller:type_BaseCall
{
    type_MMSI s_Sender;
    double s_RequestCommunicationTX;
    double s_RequestCommunicationRX;
    EnumCommunicationModes s_CommunicationMode;
    EnumFleetCallerStatus s_Status;
};
//船队被叫
struct type_FleetCalled:type_BaseCall
{
    type_MMSI s_ComeFrom;
    type_MMSI s_FleetGroup;
    double s_ReceivedCommunicationTX;
    double s_ReceivedCommunicationRX;
    EnumCommunicationModes s_CommunicationMode;
    EnumFleetCalledStatus s_Status;
};
/**********************************************************
************************海区呼叫****************************
***********************************************************/
//海区主叫状态
enum EnumSeaAreaCallerStatus
{
    SeaAreaCallerStatus_Editing=1,
    SeaAreaCallerStatus_Sending=2,
    SeaAreaCallerStatus_SendComplated=3,
    SeaAreaCallerStatus_Over=4
};
//海区被叫状态
enum EnumSeaAreaCalledStatus
{
    SeaAreaCalledStatus_Received=1,
    SeaAreaCalledStatus_Over=2
};
//海区主叫
struct type_SeaAreaCaller:type_BaseCall
{
    type_SeaAreaRangeQuadrant s_SeaAreaRange;
    double s_RequestCommunicationTX;
    double s_RequestCommunicationRX;
    EnumCommunicationModes s_CommunicationMode;
    EnumSeaAreaCallerStatus s_Status;
};
//海区被叫
struct type_SeaAreaCalled:type_BaseCall
{
    type_MMSI s_ComeFrom;
    type_SeaAreaRangeQuadrant s_SeaAreaRange;
    double s_ReceivedCommunicationTX;
    double s_ReceivedCommunicationRX;
    EnumCommunicationModes s_CommunicationMode;
    EnumSeaAreaCalledStatus s_Status;
};
/**********************************************************
************************位置呼叫****************************
***********************************************************/
enum EnumLocationCallerStatus
{
    LocationCallerStatus_Editing=1,
    LocationCallerStatus_Sending=2,
    LocationCallerStatus_ACKWaiting=3,
    LocationCallerStatus_ACKWaitTimeOut=4,
    LocationCallerStatus_ACKReceived=5,
    LocationCallerStatus_ACKDealCompleted=6,
    LocationCallerStatus_Over=7
};
enum EnumLocationCalledStatus
{
    LocationCalledStatus_Received=1,
    LocationCalledStatus_EditingACK=2,
    LocationCalledStatus_SendingACK=3,
    LocationCalledStatus_ComplatedACK=4,
    LocationCalledStatus_Over=5
};
struct type_LocationCallACK:type_BaseCallACK
{
    type_MMSI s_ACKMMSI;
    EnumCallACKTypes  s_ACKType;
    type_GPS s_Location;
    EnumCallNonobservanceCause s_NonobservanceCause;
};
//位置主叫
struct type_LocationCaller:type_BaseCall
{
    type_MMSI s_Sender;
    EnumCallSponsorTypes s_SenderType;
    int64_t s_ACKID;
    EnumCallACKTypes  s_ReceivedACKType;
    type_GPS s_ReceivedLocation;
    EnumCallNonobservanceCause s_ReceivedNonobservanceCause;
    EnumLocationCallerStatus s_Status;
};
//位置被叫
struct type_LocationCalled:type_BaseCall
{
    type_MMSI s_ComeFrom;
    EnumCallSponsorTypes s_ComeFromType;
    EnumCallACKTypes  s_ReplyACKType;
    type_GPS s_ReplyLocation;
    EnumCallNonobservanceCause s_ReplyNonobservanceCause;
    EnumLocationCalledStatus s_Status;
};
/**********************************************************
************************测试呼叫****************************
***********************************************************/
enum EnumTestCallerStatus
{
    TestCallerStatus_Editing=1,
    TestCallerStatus_Sending=2,
    TestCallerStatus_ACKWaiting=3,
    TestCallerStatus_ACKWaitTimeOut=4,
    TestCallerStatus_ACKReceived=5,
    TestCallerStatus_ACKDealCompleted=6,
    TestCallerStatus_Over=7
};
enum EnumTestCalledStatus
{
    TestCalledStatus_Received=1,
    TestCalledStatus_EditingACK=2,
    TestCalledStatus_SendingACK=3,
    TestCalledStatus_ComplatedACK=4,
    TestCalledStatus_Over=5
};
struct type_TestCallACK:type_BaseCallACK
{
    type_MMSI s_CallerMMSI;
    type_MMSI s_ACKMMSI;
    EnumCallACKTypes  s_ACKType;
    EnumCallNonobservanceCause s_NonobservanceCause;
};
//测试主叫
struct type_TestCaller:type_BaseCall
{
    type_MMSI s_Sender;
    EnumCallSponsorTypes s_SenderType;
    int64_t s_ACKID;
    EnumCallACKTypes  s_ReceivedACKType;
    EnumCallNonobservanceCause s_ReceivedNonobservanceCause;
    EnumTestCallerStatus s_Status;
};
//测试被叫
struct type_TestCalled:type_BaseCall
{
    type_MMSI s_ComeFrom;
    EnumCallSponsorTypes s_ComeFromType;
    EnumCallACKTypes  s_ReplyACKType;
    EnumCallNonobservanceCause s_ReplyNonobservanceCause;
    EnumTestCalledStatus s_Status;
};
/**********************************************************
************************查询呼叫****************************
***********************************************************/
enum EnumQueryCalledStatus
{
    QueryCalledStatus_Received=1,
    QueryCalledStatus_EditingACK=2,
    QueryCalledStatus_SendingACK=3,
    QueryCalledStatus_ComplatedACK=4,
    QueryCalledStatus_Over=5
};
struct type_QueryCallACK:type_BaseCallACK
{
    type_MMSI s_CallerMMSI;
    type_MMSI s_ACKMMSI;
    EnumCallACKTypes  s_ACKType;
    EnumCallNonobservanceCause s_NonobservanceCause;
};
//查询被叫
struct type_QueryCalled:type_BaseCall
{
    type_MMSI s_ComeFrom;
    EnumCallACKTypes  s_ReplyACKType;
    EnumCallNonobservanceCause s_ReplyNonobservanceCause;
    EnumQueryCalledStatus s_Status;
};
/**********************************************************
************************中立呼叫****************************
***********************************************************/
//中立主叫状态
enum EnumNeutralityCallerStatus
{
    NeutralityCallerStatus_Editing=1,
    NeutralityCallerStatus_Sending=2,
    NeutralityCallerStatus_SendComplated=3,
    NeutralityCallerStatus_Over=4
};
//中立被叫状态
enum EnumNeutralityCalledStatus
{
    NeutralityCalledStatus_Received=1,
    NeutralityCalledStatus_Over=2
};
//中立主叫
struct type_NeutralityCaller:type_BaseCall
{
    type_SeaAreaRangeQuadrant s_SeaAreaRange;
    double s_RequestCommunicationTX;
    double s_RequestCommunicationRX;
    EnumCommunicationModes s_CommunicationMode;
    EnumNeutralityCallerStatus s_Status;
};
//中立被叫
struct type_NeutralityCalled:type_BaseCall
{
    type_MMSI s_ComeFrom;
    type_SeaAreaRangeQuadrant s_SeaAreaRange;
    double s_ReceivedCommunicationTX;
    double s_ReceivedCommunicationRX;
    EnumCommunicationModes s_CommunicationMode;
    EnumNeutralityCalledStatus s_Status;
};
/**********************************************************
************************医疗呼叫****************************
***********************************************************/
//医疗主叫状态
enum EnumMedicalCallerStatus
{
    MedicalCallerStatus_Editing=1,
    MedicalCallerStatus_Sending=2,
    MedicalCallerStatus_SendComplated=3,
    MedicalCallerStatus_Over=4
};
//医疗被叫状态
enum EnumMedicalCalledStatus
{
    MedicalCalledStatus_Received=1,
    MedicalCalledStatus_Over=2
};
//医疗主叫
struct type_MedicalCaller:type_BaseCall
{
    type_SeaAreaRangeQuadrant s_SeaAreaRange;
    double s_RequestCommunicationTX;
    double s_RequestCommunicationRX;
    EnumCommunicationModes s_CommunicationMode;
    EnumMedicalCallerStatus s_Status;
};
//医疗被叫
struct type_MedicalCalled:type_BaseCall
{
    type_MMSI s_ComeFrom;
    type_SeaAreaRangeQuadrant s_SeaAreaRange;
    double s_ReceivedCommunicationTX;
    double s_ReceivedCommunicationRX;
    EnumCommunicationModes s_CommunicationMode;
    EnumMedicalCalledStatus s_Status;
};
/************************************************************
************************ 流程定义****************************
************************************************************/
enum EnumWorkflowTypes
{
    WorkflowTypes_Base=0,
    WorkflowTypes_Rest=1,
    WorkflowTypes_Tune=2,
    WorkflowTypes_TX=3,
    WorkflowTypes_RX=4,
    WorkflowTypes_RXTrim=5,
    WorkflowTypes_SSB=6,
    WorkflowTypes_DSC=7,
    workflowTypes_SingleDM=8,
    workflowTypes_MessageDM=9,
    workflowTypes_DMSpeed=10,
    WorkflowTypes_SendOut=11,
    WorkflowTypes_ATT=12,
    WorkflowTypes_AGCMGC=13,
    WorkflowTypes_SQL=14,
    WorkflowTypes_Coerce=15,
    WorkflowTypes_DSCDataType=16,
    WorkflowTypes_DistressGuard=17,
    WorkflowTypes_RoutineGuard=18,
    WorkflowTypes_SelfChecking=19,
    WorkflowTypes_HostInforQuery=20,
    WorkflowTypes_UpdateApp=21,
    WorkflowTypes_PowTrim=22,
    WorkflowTypes_NBDP=23,
    WorkflowTypes_NBDPScan=24,
    WorkflowTypes_NBDPDataType=25
};
enum EnumWorkflowStatus
{
    WorkflowStatus_Succeed=0,
    WorkflowStatus_LinkBreakOff=1,
    WorkflowStatus_Failure=2
};
enum EnumRestActions
{
    RestActions_Init=1,
    RestActions_Start=2,
    RestActions_Over=3
};
enum EnumTuneActions
{
    TuneActions_Init=1,
    TuneActions_StartTune=2,
    TuneActions_CheckingStationary=3,
    TuneActions_StopTune=4,
    TuneActions_Over=5
};
enum EnumSSBActions
{
    SSBActions_Init=1,
    SSBActions_StartSSB=2,
    SSBActions_Over=3
};
enum EnumDSCActions
{
    DSCActions_Init=1,
    DSCActions_StartDSC=2,
    DSCActions_Over=3
};

enum EnumCoerceActions
{
    CoerceActions_Init=1,
    CoerceActions_StartCoerce=2,
    CoerceActions_Over=3
};
enum EnumTXActions
{
    TXActions_Init=1,
    TXActions_StartSetTX=2,
    TXActions_Over=3
};
enum EnumRXActions
{
    RXActions_Init=1,
    RXActions_StartSetRX=2,
    RXActions_Over=3
};
enum EnumRXTrimActions
{
    RXTrimActions_Init=1,
    RXTrimActions_StartRXTrim=2,
    RXTrimActions_Over=3
};
enum EnumPowTrimActions
{
    PowTrimActions_Init=1,
    PowTrimActions_StartPowTrim=2,
    PowTrimActions_Over=3
};
enum EnumSendOutModeRangeActions
{
    SendOutModeRangeActions_Init=1,
    SendOutModeRangeActions_Start=2,
    SendOutModeRangeActions_Over=3
};
enum EnumDSCDataTypeActions
{
    DSCDataTypeActions_Init=1,
    DSCDataTypeActions_StartDSCDataType=2,
    DSCDataTypeActions_Over=3
};
enum EnumATTActions
{
    ATTActions_Init=1,
    ATTActions_Start=2,
    ATTActions_Over=3
};
enum EnumAGCMGCActions
{
    AGCMGCActions_Init=1,
    AGCMGCActions_Start=2,
    AGCMGCActions_Over=3
};
enum EnumSQLActions
{
    SQLActions_Init=1,
    SQLActions_Start=2,
    SQLActions_Over=3
};
enum EnumSingleDMActions
{
    SingleDM_Init=1,
    SingleDM_Start=2,
    SingleDM_Over=3
};
enum EnumDistressGuardActions
{
    DistressGuardActions_Init=1,
    DistressGuardActions_Start=2,
    DistressGuardActions_Over=3
};
enum EnumRoutineGuardActions
{
    RoutineGuardActions_Init=1,
    RoutineGuardActions_Start=2,
    RoutineGuardActions_Over=3
};
enum EnumSelfCheckingActions
{
    SelfCheckingActions_Init=1,
    SelfCheckingActions_Start=2,
    SelfCheckingActions_Over=3
};
enum EnumHostInfoQueryActions
{
    HostInfoQueryActions_Init=1,
    HostInfoQueryActions_Start=2,
    HostInfoQueryActions_Over=3
};
enum EnumUpdateAppActions
{
    UpdateAppActions_CheckingFile=1,
    UpdateAppActions_CopyFile=2,
    UpdateAppActions_ReadFile=3,
    UpdateAppActions_ChangeBaudRate=4,
    UpdateAppActions_UpdateApp=5,
    UpdateAppActions_DeleteFile=6,
    UpdateAppActions_Over=7
};
struct type_WorkflowOutResult
{
    EnumWorkflowTypes s_WorkflowType;
};
struct type_UpdateAppWorkflowOutResult:type_WorkflowOutResult
{
    int s_UpdateTick;
    int s_UpdatedBytes;
    int s_SurplusBytes;
    int s_SumBytes;
    QByteArray s_bytes;
};


enum EnumNBDPActions
{
    NBDPActions_Init=1,
    NBDPActions_StartNBDP=2,
    NBDPActions_Over=3
};

enum EnumNBDPScanActions
{
    NBDPScanActions_Init=1,
    NBDPScanActions_StartNBDPScan=2,
    NBDPScanActions_Over=3
};

enum EnumNBDPDataTypeActions
{
    NBDPDataTypeActions_Init=1,
    NBDPDataTypeActions_StartNBDPDataType=2,
    NBDPDataTypeActions_Over=3
};

}
#pragma pack(pop)
#endif // UIDEFINETYPE_H
