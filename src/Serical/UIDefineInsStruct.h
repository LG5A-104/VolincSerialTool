#ifndef UIINSTRUCTION_H
#define UIINSTRUCTION_H

#define FRAME_HEADER 0x7E7E
#define FRAME_HEADER_1 0x7E
#define FRAME_HEADER_2 0x7E
#define FRAME_HEADER_DEVICE 0x55

#define INS_DEVICEID_UpperComputer 0x00;
#define INS_DEVICEID_ARM 0x01;
#define INS_DEVICEID_DSP 0x02;
#define INS_DEVICEID_MCU 0x03;
#define INS_DEVICEID_NBDP 0x63;

//设备控制字(回应)
#define INS_DEVICE_CMD_KEY  0x01
#define INS_DEVICE_CMD_PULSE  0x02
#define INS_DEVICE_CMD_UPDATE_Response  0x03
//设备控制字(请求)
#define INS_DEVICE_CMD_PWM  0x81
#define INS_DEVICE_CMD_UPDATE_Request  0x82
#define INS_DEVICE_CMD_UPDATE_Page  0x83
#define INS_DEVICE_CMD_UPDATE_Over  0x84
//设备键值表
#define INS_DEVICE_KEY_0_K16_DOWN  0x1C
#define INS_DEVICE_KEY_0_K16_UP  0x5C
#define INS_DEVICE_KEY_1_K3_DOWN  0x11
#define INS_DEVICE_KEY_1_K3_UP  0x51
#define INS_DEVICE_KEY_2_K4_DOWN  0x19
#define INS_DEVICE_KEY_2_K4_UP  0x59
#define INS_DEVICE_KEY_3_K1_DOWN  0x01
#define INS_DEVICE_KEY_3_K1_UP  0x41
#define INS_DEVICE_KEY_4_K7_DOWN  0x12
#define INS_DEVICE_KEY_4_K7_UP  0x52
#define INS_DEVICE_KEY_5_K8_DOWN  0x1A
#define INS_DEVICE_KEY_5_K8_UP  0x5A
#define INS_DEVICE_KEY_6_K5_DOWN  0x02
#define INS_DEVICE_KEY_6_K5_UP  0x42
#define INS_DEVICE_KEY_7_K11_DOWN  0x13
#define INS_DEVICE_KEY_7_K11_UP  0x53
#define INS_DEVICE_KEY_8_K12_DOWN  0x1B
#define INS_DEVICE_KEY_8_K12_UP  0x5B
#define INS_DEVICE_KEY_9_K9_DOWN  0x03
#define INS_DEVICE_KEY_9_K9_UP  0x43
#define INS_DEVICE_KEY_Right_Push 0x01
#define INS_DEVICE_KEY_Left_Push 0x02
#define INS_DEVICE_KEY_Enter_Push_DOWN 0x03
#define INS_DEVICE_KEY_Enter_Push_UP 0x04
#define INS_DEVICE_KEY_SoftKey1_K2_DOWN  0x09
#define INS_DEVICE_KEY_SoftKey1_K2_UP  0x49
#define INS_DEVICE_KEY_SoftKey2_K6_DOWN  0x0A
#define INS_DEVICE_KEY_SoftKey2_K6_UP  0x4A
#define INS_DEVICE_KEY_SoftKey3_K10_DOWN  0x0B
#define INS_DEVICE_KEY_SoftKey3_K10_UP  0x4B
#define INS_DEVICE_KEY_SoftKey4_K14_DOWN  0x0C
#define INS_DEVICE_KEY_SoftKey4_K14_UP  0x4C

#define INS_DEVICE_KEY_CHRT_K13_DOWN  0x04
#define INS_DEVICE_KEY_CHRT_K13_UP  0x44

#define INS_DEVICE_KEY_ESC_K15_DOWN  0x14
#define INS_DEVICE_KEY_ESC_K15_UP  0x54

#define INS_DEVICE_KEY_Silence_K17_DOWN  0x05
#define INS_DEVICE_KEY_Silence_K17_UP  0x45

#define INS_DEVICE_KEY_Brightness_K18_DOWN  0x0D
#define INS_DEVICE_KEY_Brightness_K18_UP  0x4D

#define INS_DEVICE_KEY_2182_K19_DOWN  0x15
#define INS_DEVICE_KEY_2182_K19_UP  0x55

#define INS_DEVICE_KEY_Distress_K20_DOWN  0x1D
#define INS_DEVICE_KEY_Distress_K20_UP  0x5D


#define INS_CODE_Turn 0x01
#define INS_CODE_SSB 0x02
#define INS_CODE_DSC 0x03
#define INS_CODE_Coerce 0x04
#define INS_CODE_TX 0xB
#define INS_CODE_RX 0xC
#define INS_CODE_RXTrim 0xD
#define INS_CODE_SendOutModel 0xE
#define INS_CODE_DSCDataType 0xF
#define INS_CODE_ATT 0x10
#define INS_CODE_AGCMGC 0x11
#define INS_CODE_SQL 0x12
#define INS_CODE_SingleDMMode 0x13
#define INS_CODE_MessageDMMode 0x14
#define INS_CODE_DMSpeed 0x15
#define INS_CODE_DistressGuard 0x16
#define INS_CODE_RoutineGuard 0x17
#define INS_CODE_PowTrim 0x19
#define INS_CODE_Clock 0x64
#define INS_CODE_Rest 0x65
#define INS_CODE_SelfChecking 0x66
#define INS_CODE_HostInforQuery 0x67
#define INS_CODE_UpdateAPP 0x68
#define INS_CODE_SerialBaudrateSet 0x69
#define INS_CODE_StatusReport 0x6A

//DSC呼叫指令代码
#define INS_CODE_DSCMessage 0xC8

/*************************************
***********NBDP指令代码(主机与控制单元之间)***************
**************************************/
#define INS_CODE_NBDP 0xC9
#define INS_CODE_NBDPScan 0xCB
#define INS_CODE_NBDPScanResult 0xCC
#define INS_CODE_NBDPDataType 0xCE



//NBDP数据帧统一指令代码-208（NBDP-控制单元-主机）
#define INS_CODE_NBDPMessage 0xD0


/*************************************
***********NBDP指令代码(NBDP与控制单元之间)***************
**************************************/
#define INS_CODE_NBDP_Connect 0xC9
#define INS_CODE_NBDP_Disconnect 0xCA
#define INS_CODE_NBDP_Scan 0xCB
#define INS_CODE_NBDP_ScanResult 0xCC
#define INS_CODE_NBDP_SelfCheck 0xCD
#define INS_CODE_NBDP_DataType 0xCE
#define INS_CODE_NBDP_FollowCommunicate 0xCF



#define INS_CHECKOUTVALUE_TURN 0xC
#define INS_CHECKOUTVALUE_SSBMODE 0x14
#define INS_CHECKOUTVALUE_DSCMODE 0x17
#define INS_CHECKOUTVALUE_Coerce 0xC

#define INS_CHECKOUTVALUE_TX 0xB
#define INS_CHECKOUTVALUE_RX 0xB
#define INS_CHECKOUTVALUE_RXTrim 0x08

#define INS_CHECKOUTVALUE_SendOutModel 0x08
#define INS_CHECKOUTVALUE_DSCTest 0x08
#define INS_CHECKOUTVALUE_ATT 0x08
#define INS_CHECKOUTVALUE_AGCMGC 0x08
#define INS_CHECKOUTVALUE_SQL 0x08
#define INS_CHECKOUTVALUE_SingleDMMode 0x08
#define INS_CHECKOUTVALUE_InforDMMode 0x08
#define INS_CHECKOUTVALUE_DMSpeed 0x08

#define INS_CHECKOUTVALUE_DistressGuard 0x20
#define INS_CHECKOUTVALUE_RoutineGuard 0x20
#define INS_CHECKOUTVALUE_Clock 0x09
#define INS_CHECKOUTVALUE_Rest 0x07
#define INS_CHECKOUTVALUE_SelfChecking 0x09
#define INS_CHECKOUTVALUE_HostInforQuery 0x07
#define INS_CHECKOUTVALUE_HostInforQueryResult 0xA

#define INS_CHECKOUTVALUE_APPUpdateReply 0x09
#define INS_CHECKOUTVALUE_SerialSpeedSet 0x09
#define INS_CHECKOUTVALUE_StatusReport 0x16

#define INS_TUNEPROCESS_Stop 0x00
#define INS_TUNEPROCESS_Start 0x01
#define INS_TUNERESULT_Failure 0x00
#define INS_TUNERESULT_Succeed 0x01

#define INS_COERCE_SENDSTATUS_Start 0x01
#define INS_COERCE_SENDSTATUS_Stop 0x00

//直通
#define INS_ATT_S 0x01
//放大
#define INS_ATT_PRE 0x02
//衰减
#define INS_ATT_L 0x00

#define INS_AGCMGC_AGC 0x01
#define INS_AGCMGC_MGC 0x00
#define INS_AGC_L 0x01
#define INS_AGC_M 0x02
#define INS_AGC_H 0x03

#define INS_SQL_Close 0x00
#define INS_SQL_OPen 0x01

#define INS_SENDOUTMODE_Sine 0x00
#define INS_SENDOUTMODE_Square 0x01

#define INS_SENDOUTRANGE_None 0x00
#define INS_SENDOUTRANGE_POW_L 0x01
#define INS_SENDOUTRANGE_POW_M 0x02
#define INS_SENDOUTRANGE_POW_H 0x03

#define INS_RECEIVEDPROCESS_Stop 0x00
#define INS_RECEIVEDPROCESS_Start 0x01

#define INS_SINGLE_DM_CW 0x01
#define INS_SINGLE_DM_AM 0x02
#define INS_SINGLE_DM_USB 0x03
#define INS_SINGLE_DM_LSB 0x04
#define INS_SINGLE_DM_H3E 0x05

#define INS_Message_DM_Voice 0x00
#define INS_Message_DM_FSK 0x01
#define INS_Message_DM_MSK 0x02
#define INS_Message_DM_BPSK 0x03
#define INS_Message_DM_QPSK 0x04
#define INS_Message_DM_ARQ 0x05
#define INS_Message_DM_FEC 0x06


#define INS_DM_Speed_100BPS 0x01
#define INS_DM_Speed_200BPS 0x02
#define INS_DM_Speed_300BPS 0x03
#define INS_DM_Speed_600BPS 0x04
#define INS_DM_Speed_1200BPS 0x05
#define INS_DM_Speed_2400BPS 0x06
#define INS_DM_Speed_4800BPS 0x07

#define INS_SENDATETYPE_0 0x00
#define INS_SENDATETYPE_1 0x01
#define INS_SENDATETYPE_01 0x02
#define INS_SENDATETYPE_Serial 0x03

#define INS_GUARDSTATUS_Close 0x00
#define INS_GUARDSTATUS_Open 0x01

#define INS_SELFCHECKING_Yes 0x01
#define INS_SELFCHECKING_No 0x00

#define INS_SELFCHECKINGRESULT_Success 0x01
#define INS_SELFCHECKINGRESULT_Failure  0x00

#define INS_APPUPDATETARGET_DSP 0x01
#define INS_APPUPDATETARGET_FPGA 0x02
#define INS_APPUPDATETARGET_MCU 0x03

#define INS_APPUPDATESYMBOL_Unfinished 0x00
#define INS_APPUPDATESYMBOL_Finished 0x01

#define INS_APPUPDATECHECKOUT_OK 0x01
#define INS_APPUPDATECHECKOUT_Error 0x00

#define INS_SERIALBAUDRATE_300 0x01
#define INS_SERIALBAUDRATE_600 0x02
#define INS_SERIALBAUDRATE_1200 0x03
#define INS_SERIALBAUDRATE_2400 0x04
#define INS_SERIALBAUDRATE_4800 0x05
#define INS_SERIALBAUDRATE_9600 0x06
#define INS_SERIALBAUDRATE_19200 0x07
#define INS_SERIALBAUDRATE_38400 0x08
#define INS_SERIALBAUDRATE_43000 0x09
#define INS_SERIALBAUDRATE_56000 0xA
#define INS_SERIALBAUDRATE_57600 0xB
#define INS_SERIALBAUDRATE_115200 0xC

#define INS_POWERTEMPERA_Symbol_Plus 0x00
#define INS_POWERTEMPERA_Symbol_Minus 0x01

#define INS_GPS_NE 0x00
#define INS_GPS_NW 0x01
#define INS_GPS_SE 0x02
#define INS_GPS_SW 0x03

#define INS_GPSSTATUS_BuiltIn 0x00
#define INS_GPSSTATUS_Extraposition 0x01


/****************************************************
*****************NBDP指令帧内部参数定义**************
*****************************************************/
#define INS_NBDP_MODE_ARQ 0x01
#define INS_NBDP_MODE_BFEC 0x02
#define INS_NBDP_MODE_SFEC 0x03

#define INS_NBDP_TUNEPROCESS_Stop 0x00
#define INS_NBDP_TUNEPROCESS_Start 0x01

#define INS_NBDP_TUNERESULT_Failure 0x00
#define INS_NBDP_TUNERESULT_Succeed 0x01

#define INS_NBDP_TUNESTYLE_AUTO 0x00
#define INS_NBDP_TUNESTYLE_MANUAL 0x01


#define INS_NBDP_SCANMODE_ARQ 0x01
#define INS_NBDP_SCANMODE_FEC 0x02
#define INS_NBDP_SCANMODE_AUTO 0x03

#define INS_NBDP_SCANPROCESS_Stop 0x02
#define INS_NBDP_SCANPROCESS_Start 0x01

#define INS_NBDP_SCANRESULT_Failure 0x00
#define INS_NBDP_SCANRESULT_Succeed 0x01

#define INS_NBDP_SELFCHECKRESULT_Success 0x01
#define INS_NBDP_SELFCHECKRESULT_Failure  0x00

#define INS_NBDP_SENDDATATYPE_0 0x00
#define INS_NBDP_SENDDATATYPE_1 0x01
#define INS_NBDP_SENDDATATYPE_01 0x02
#define INS_NBDP_SENDDATATYPE_Serial 0x03

//收发模式
#define INS_NBDP_STYLE_Receive 0x00
#define INS_NBDP_STYLE_Transmit 0x01

#define INS_NBDP_DATA_7bit 0x00
#define INS_NBDP_DATA_21bit 0x01

#pragma pack(push,1)


//struct type_MessageMMSI
//{
//    unsigned char s_MMSI5;
//    unsigned char s_MMSI4;
//    unsigned char s_MMSI3;
//    unsigned char s_MMSI2;
//    unsigned char s_MMSI1;
//};


enum EnumPWMGradeTypes
{
    PWMGrade_0 =0,
    PWMGrade_1=1,
    PWMGrade_2=2,
    PWMGrade_3=3,
    PWMGrade_4=4,
    PWMGrade_5=5,
    PWMGrade_6=6,
    PWMGrade_7=7,
    PWMGrade_8=8,
    PWMGrade_9=9,
    PWMGrade_10=10
};
struct type_InsDeviceInterface
{
    unsigned char s_FrameHeader;
    unsigned char s_Cmd;
    unsigned char s_Len;
    unsigned char s_Verify1;
};
struct type_InsDeviceKey: public type_InsDeviceInterface
{
    unsigned char s_Data;
    unsigned char s_Verify2;
};
struct type_InsDevicePWM:public type_InsDeviceInterface
{
    unsigned char s_Data;
    unsigned char s_Verify2;
};


struct type_InsCoord
{
    unsigned char s_Coord_Group1;
    unsigned char s_Coord_Group2;
    unsigned char s_Coord_Group3;
    unsigned char s_Coord_Group4;
    unsigned char s_Coord_Group5;
};
struct type_InsGPSCoord
{
    unsigned char s_Coord_Group1;
    unsigned char s_Coord_Group2;
    unsigned char s_Coord_Group3;
    unsigned char s_Coord_Group4;
    unsigned char s_Coord_Group5;
    unsigned char s_Coord_Group6;
    unsigned char s_Coord_Group7;
    unsigned char s_Coord_Group8;
    unsigned char s_Coord_Group9;
};
struct type_InsTime
{
    unsigned char s_HH;
    unsigned char s_MM;
};
struct type_BaseInstruction
{
    unsigned short int  s_FrameHeader;
    unsigned short int s_FrameLength;
    unsigned char  s_SourceDeviceID;
    unsigned char  s_TargetDeviceID;
    unsigned char  s_InsCode;
};
struct type_TuneInstruction:public type_BaseInstruction
{
    unsigned int  s_TX;
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve2:3;//20151122
            unsigned char  s_TuneMode:1;//20151122
            unsigned char  s_TuneResult:1;
            unsigned char  s_TuneProcess:1;
            //保留
            unsigned char  s_Reserve1:2;
        } s_Paras;  //参数
    };
    unsigned short int s_VerifyValue;
};
struct type_SSBInstruction:public type_BaseInstruction
{
    unsigned int  s_RX;
    unsigned int  s_TX;
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:6;
            //增益值
            unsigned char  s_ATTValue:2;
        } s_ATT; //射频增益
    };
    union
    {
        struct
        {
            //增益值
            unsigned char  s_Value:7;
            //增益类型
            unsigned char  s_Type:1;
        } s_AGCMGC; //接收增益
    };
    union
    {
        struct
        {
            //静噪值
            unsigned char  s_Value:7;
            //静噪开关
            unsigned char  s_SW:1;
        } s_SQL; //静噪
    };
    union
    {
        struct
        {
            //调制方式
            unsigned char  s_D:4;
            //解调方式
            unsigned char  s_M:4;
        } s_SingleDM; //信号解调
    };
    union
    {
        struct
        {
            //调制方式
            unsigned char  s_D:4;
            //解调方式
            unsigned char  s_M:4;
        } s_MessageDM; //信息解调
    };
    union
    {
        struct
        {
            //调制数据率
            unsigned char  s_D:4;
            //解调数据率
            unsigned char  s_M:4;
        } s_DMSpeed; //解调调制速率
    };
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:1;
            //接受进程
            unsigned char  s_Process:1;
            //发射输出幅度
            unsigned char  s_Range:3;
            //发射输出模式
            unsigned char  s_Mode:3;
        } s_SendOutModeRange; //发射输出模式/幅度
    };
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:5;
            //数据类型
            unsigned char  s_DataType:3;
        } s_SendDataType; //发射数据类型
    };
    unsigned short int s_VerifyValue;
};

struct type_DSCInstruction:public type_BaseInstruction
{
    unsigned int  s_RX;
    unsigned int  s_TX;
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:6;
            //增益值
            unsigned char  s_ATTValue:2;
        } s_ATT; //射频增益
    };
    union
    {
        struct
        {
            //增益值
            unsigned char  s_Value:7;
            //增益类型
            unsigned char  s_Type:1;
        } s_AGCMGC; //接收增益
    };
    union
    {
        struct
        {
            //静噪值
            unsigned char  s_Value:7;
            //静噪开关
            unsigned char  s_SW:1;
        } s_SQL; //静噪
    };
    union
    {
        struct
        {
            //调制方式
            unsigned char  s_D:4;
            //解调方式
            unsigned char  s_M:4;
        } s_SingleDM; //信号解调
    };
    union
    {
        struct
        {
            //调制方式
            unsigned char  s_D:4;
            //解调方式
            unsigned char  s_M:4;
        } s_MessageDM; //信息解调
    };
    union
    {
        struct
        {
            //调制数据率
            unsigned char  s_D:4;
            //解调数据率
            unsigned char  s_M:4;
        } s_DMSpeed; //解调调制速率
    };
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:1;
            //接受进程
            unsigned char  s_Process:1;
            //发射输出幅度
            unsigned char  s_Range:3;
            //发射输出模式
            unsigned char  s_Mode:3;
        } s_SendOutModeRange; //发射输出模式/幅度
    };
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:5;
            //数据类型
            unsigned char  s_DataType:3;
        } s_SendDataType; //发射数据类型
    };
    unsigned short int s_VerifyValue;
};
struct type_CoerceInstruction:public type_BaseInstruction
{
    unsigned int  s_TX;
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:7;
            //状态
            unsigned char  s_Status:1;
        }s_SendStatus; //发射状态;
    };
    unsigned short int s_VerifyValue;
};
struct type_TXInstruction:public type_BaseInstruction
{
    unsigned int  s_TX;
    unsigned short int s_VerifyValue;
};
struct type_RXInstruction:public type_BaseInstruction
{
    unsigned int  s_RX;
    unsigned short int s_VerifyValue;
};
struct type_RXTrimInstruction:public type_BaseInstruction
{ 
    union
    {
        struct
        {

            //偏移值
            unsigned char  s_RXTrimValue:7;
            //符号
            unsigned char  s_Symbol:1;
        } s_RXTrim; //频偏
    };
    unsigned short int s_VerifyValue;
};
struct type_SendOutModeRangeInstruction:public type_BaseInstruction
{
    struct
    {
        //保留
        unsigned char  s_Reserve:2;
        //发射输出幅度
        unsigned char  s_Range:3;
        //发射输出模式
        unsigned char  s_Mode:3;
    } s_SendOutModeRange; //发射输出模式/幅度
    unsigned short int s_VerifyValue;
};
struct type_DSCDataTypeInstruction:public type_BaseInstruction
{
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:5;
            //数据类型
            unsigned char  s_DataType:3;
        } s_SendDataType; //发射数据类型
    };
    unsigned short int s_VerifyValue;
};
struct type_ATTInstruction:public type_BaseInstruction
{
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:6;
            //增益值
            unsigned char  s_ATTValue:2;
        } s_ATT; //射频增益
    };
    unsigned short int s_VerifyValue;
};
struct type_AGCMGCInstruction:public type_BaseInstruction
{
    union
    {
        struct
        {
            //增益
            unsigned char  s_Value:7;
            //增益类型
            unsigned char  s_Type:1;
        } s_AGCMGC; //射频增益
    };
    unsigned short int s_VerifyValue;
};
struct type_SQLInstruction:public type_BaseInstruction
{
    union
    {
        struct
        {
            //静噪门限值
            unsigned char  s_Value:7;
            //静噪开关
            unsigned char  s_SW:1;
        } s_SQL; //静噪
    };
    unsigned short int s_VerifyValue;
};
struct type_SingleDMInstruction:public type_BaseInstruction
{
    union
    {
        struct
        {
            //信号调制方式
            unsigned char  s_D:4;
            //信号解调方式
            unsigned char  s_M:4;
        } s_SingleDM; //信号解调
    };
    unsigned short int s_VerifyValue;

};
struct type_MessageDMInstruction:public type_BaseInstruction
{
    union
    {
        struct
        {
            //信号调制方式
            unsigned char  s_D:4;
            //信号解调方式
            unsigned char  s_M:4;
        } s_MessageDM; //信息解调
    };
    unsigned short int s_VerifyValue;
};
struct type_DMSpeedInstruction:public type_BaseInstruction
{
    union
    {
        struct
        {
            //调制速率
            unsigned char  s_D:4;
            //解调速率
            unsigned char  s_M:4;
        } s_DMSpeed; //解调调制速率
    };
    unsigned short int s_VerifyValue;
};
struct type_DistressGuardInstruction:public type_BaseInstruction
{
    unsigned int  s_DistressFrequency1;
    unsigned int  s_DistressFrequency2;
    unsigned int  s_DistressFrequency3;
    unsigned int  s_DistressFrequency4;
    unsigned int  s_DistressFrequency5;
    unsigned int  s_DistressFrequency6;
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve2:1;
            unsigned char  s_Reserve1:1;
            unsigned char  s_Status6:1;
            unsigned char  s_Status5:1;
            unsigned char  s_Status4:1;
            unsigned char  s_Status3:1;
            unsigned char  s_Status2:1;
            unsigned char  s_Status1:1;

        } s_GuardStatus; //职守状态
    };
    unsigned short int s_VerifyValue;
};
struct type_RoutineGuardInstruction:public type_BaseInstruction
{
    unsigned int  s_RoutineFrequency1;
    unsigned int  s_RoutineFrequency2;
    unsigned int  s_RoutineFrequency3;
    unsigned int  s_RoutineFrequency4;
    unsigned int  s_RoutineFrequency5;
    unsigned int  s_RoutineFrequency6;
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve1:1;
            unsigned char  s_Reserve2:1;
            unsigned char  s_Status6:1;
            unsigned char  s_Status5:1;
            unsigned char  s_Status4:1;
            unsigned char  s_Status3:1;
            unsigned char  s_Status2:1;
            unsigned char  s_Status1:1;

        } s_GuardStatus; //职守状态
    };
    unsigned short int s_VerifyValue;
};
struct type_ClockInstruction:public type_BaseInstruction
{
    unsigned short int  s_ClockOffsetValue;
    unsigned short int s_VerifyValue;
};
struct type_RestInstruction:public type_BaseInstruction
{
    unsigned short int s_VerifyValue;
};
struct type_SelfCheckingInstruction:public type_BaseInstruction
{
    union
    {
        struct
        {
            //保留
            unsigned char   s_Reserve1:1;
            unsigned char   s_Reserve2:1;
            unsigned char   s_Reserve3:1;
            unsigned char   s_Reserve4:1;
            unsigned char   s_RearSelectModule:1;
            unsigned char   s_PowerAmpModule:1;
            unsigned char   s_CoreModule:1;
            unsigned char   s_ElectricSourceModule:1;
        } SelfChecking1;
    };
    union
    {
        struct
        {
            unsigned char   s_Reserve1:1;
            unsigned char   s_Reserve2:1;
            unsigned char   s_Reserve3:1;
            unsigned char   s_MCU:1;
            unsigned char   s_FPGA:1;
            unsigned char   s_DSP:1;
            unsigned char   s_FLASH:1;
            unsigned char   s_SDRAM:1;

        } SelfChecking2;
    };
    unsigned short int s_VerifyValue;
};
struct type_SelfCheckingResultInstruction:public type_BaseInstruction
{
    union
    {
        struct
        {
            //保留
            unsigned char   s_Reserve1:1;
            unsigned char   s_Reserve2:1;
            unsigned char   s_Reserve3:1;
            unsigned char   s_Reserve4:1;
            unsigned char   s_RearSelectModule:1;
            unsigned char   s_PowerAmpModule:1;
            unsigned char   s_CoreModule:1;
            unsigned char   s_ElectricSourceModule:1;
        } SelfChecking1;
    };
    union
    {
        struct
        {
            unsigned char   s_Reserve1:1;
            unsigned char   s_Reserve2:1;
            unsigned char   s_Reserve3:1;
            unsigned char   s_MCU:1;
            unsigned char   s_FPGA:1;
            unsigned char   s_DSP:1;
            unsigned char   s_FLASH:1;
            unsigned char   s_SDRAM:1;

        } SelfChecking2;
    };
    unsigned short int s_VerifyValue;
};

struct type_HostInfoQueryInstruction:public type_BaseInstruction
{
    unsigned short int s_VerifyValue;
};

struct type_HostInfoQueryResultInstruction:public type_BaseInstruction
{
    unsigned char   s_DSPVer;
    unsigned char   s_FPGAVer;
    unsigned char   s_MCUVer;
    unsigned short int s_VerifyValue;
};

struct type_AppUpdateInstruction:public type_BaseInstruction
{
    unsigned char   s_UpdateTarget;
    unsigned char   s_DataLength;
    unsigned char   s_EndSymbol;
    unsigned char   s_DataSum;
    unsigned short int s_VerifyValue;
};

struct type_UpdateAppReplyInstruction:public type_BaseInstruction
{
    unsigned char   s_UpdateTarget;
    unsigned char   s_CheckoutResult;
    unsigned short int s_VerifyValue;
};
struct type_SerialBaudrateInstruction:public type_BaseInstruction
{
    unsigned char   s_Serial1Baudrate;
    unsigned char   s_Serial2Baudrate;
    unsigned short int s_VerifyValue;
};
struct type_StatusReportInstruction:public type_BaseInstruction
{
    unsigned char   s_Voltage;
    unsigned char   s_Electricity;
    unsigned char   s_Standing_wave;
    unsigned char   s_BeforePower;
    unsigned char   s_ReversePower;
    union
    {
        struct
        {
            unsigned char   s_Tempera:7;
            unsigned char   s_Symbol:1;
            //unsigned char   s_Tempera:7;
        } s_PowerTempera;
    };
    unsigned char  s_SingleIntensity;
    union
    {
        struct
        {
            unsigned char   s_Routine:4;
            unsigned char   s_Distress:4;
        } s_GuardNo;
    };
    union
    {
        struct
        {
            unsigned char   s_Reserve1:1;
            unsigned char   s_Reserve2:1;
            unsigned char   s_Reserve3:1;
            unsigned char   s_Reserve4:1;
            unsigned char   s_Reserve5:1;
            unsigned char   s_TuneStatus:1;
            unsigned char   s_Connection:1;
        }s_Antennae;
    };
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve1:1;
            unsigned char  s_Reserve2:1;
            unsigned char  s_Reserve3:1;
            unsigned char  s_Reserve4:1;
            unsigned char  s_Reserve5:1;
            unsigned char  s_Reserve6:1;
            unsigned char  s_Reserve7:1;
            //功放状态
            unsigned char  s_Status:1;
        } s_PowerStatus; //功放状态
    };
    type_InsGPSCoord s_GPSCoord;
    type_InsTime  s_GPSUTC;
    unsigned char   s_GPSStatus;
    unsigned short int s_VerifyValue;
};

//wangbing 功率微调
struct type_PowTrimInstruction:public type_BaseInstruction
{
    unsigned char s_Model;//SSB=2,DSC=3

    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_1;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_2;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_3;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_4;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_5;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_6;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_7;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_8;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_9;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_10;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_11;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_12;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_13;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_14;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_15;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_16;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_17;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_18;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_19;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_20;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_21;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_22;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_23;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_24;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_25;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_26;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_27;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_28;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_29;
    };
    union
    {
        struct
        {
            unsigned char   s_Value:7;
            unsigned char   s_Symbol:1;
        } s_PowTrim_30;
    };

    unsigned short int s_VerifyValue;
};




/************************************************************************
************************主机\控制单元交互 指令与数据帧（NBDP内容）*******************
*************************************************************************/

struct type_NBDPInstruction:public type_BaseInstruction
{
    unsigned int  s_RX;
    unsigned int  s_TX;
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:6;
            //增益值
            unsigned char  s_ATTValue:2;
        } s_ATT; //射频增益
    };
    union
    {
        struct
        {
            //增益值
            unsigned char  s_Value:7;
            //增益类型
            unsigned char  s_Type:1;
        } s_AGCMGC; //接收增益
    };
    union
    {
        struct
        {
            //静噪值
            unsigned char  s_Value:7;
            //静噪开关
            unsigned char  s_SW:1;
        } s_SQL; //静噪
    };
    union
    {
        struct
        {
            //调制方式
            unsigned char  s_D:4;
            //解调方式
            unsigned char  s_M:4;
        } s_SingleDM; //信号解调
    };
    union
    {
        struct
        {
            //调制方式
            unsigned char  s_D:4;
            //解调方式
            unsigned char  s_M:4;
        } s_MessageDM; //信息解调
    };
    union
    {
        struct
        {
            //调制数据率
            unsigned char  s_D:4;
            //解调数据率
            unsigned char  s_M:4;
        } s_DMSpeed; //解调调制速率
    };
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:1;
            //接受进程
            unsigned char  s_Process:1;
            //发射输出幅度
            unsigned char  s_Range:3;
            //发射输出模式
            unsigned char  s_Mode:3;
        } s_SendOutModeRange; //发射输出模式/幅度
    };
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:5;
            //数据类型
            unsigned char  s_DataType:3;
        } s_SendDataType; //发射数据类型
    };

    unsigned char  s_NBDPMode;

    unsigned long  s_CallCode;

    unsigned short int s_VerifyValue;
};


struct type_NBDPScanInstruction:public type_BaseInstruction
{
    unsigned char s_ScanMode;
    unsigned int  s_TX;
    unsigned int  s_RX;

    unsigned int  s_ScanRequestType;//开始或停止请求

    unsigned short int s_VerifyValue;
};

struct type_NBDPScanResultInstruction:public type_BaseInstruction
{
    unsigned char s_ScanMode;
    unsigned int  s_TX;
    unsigned int  s_RX;

    unsigned int  s_ScanResult;//扫描结果：有无信号

    unsigned short int s_VerifyValue;
};



struct type_NBDPDataTypeInstruction:public type_BaseInstruction
{
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:5;
            //数据类型
            unsigned char  s_DataType:3;
        } s_SendDataType; //发射数据类型
    };
    unsigned short int s_VerifyValue;
};

/************************************************************************
************************NBDP\控制单元交互 指令与数据帧*******************
*************************************************************************/


struct type_NBDP_ConnectInstruction:public type_BaseInstruction
{
    unsigned char s_NBDPMode;
    unsigned int  s_TX;
    unsigned int  s_RX;
    unsigned long long s_CallCode;
    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:3;
            //调谐方式
            unsigned char  s_TuneStyle:1;
            //调谐结果
            unsigned char s_TuneResult:1;
            //调谐进度
            unsigned char s_TuneProcess:1;
            //保留
            unsigned char  s_Reserve1:2;
        } s_TunePara; //调谐参数
    };

    unsigned short int s_VerifyValue;

};

struct type_NBDP_DisconnectInstruction:public type_BaseInstruction
{
    unsigned short int s_VerifyValue;
};


struct type_NBDP_ScanInstruction:public type_BaseInstruction
{
    unsigned char s_ScanMode;
    unsigned int  s_TX;
    unsigned int  s_RX;

    unsigned int  s_ScanRequestType;//开始或停止请求

    unsigned short int s_VerifyValue;
};

struct type_NBDP_ScanResultInstruction:public type_BaseInstruction
{
    unsigned char s_ScanMode;
    unsigned int  s_TX;
    unsigned int  s_RX;

    unsigned int  s_ScanResult;//扫描结果：有无信号

    unsigned short int s_VerifyValue;
};

struct type_NBDP_SelfCheckInstruction:public type_BaseInstruction
{

    unsigned char   s_Transmit;

    unsigned char   s_Receive;

    unsigned short int s_VerifyValue;
};

struct type_NBDP_DataTypeInstruction:public type_BaseInstruction
{
    unsigned int  s_TX;

    union
    {
        struct
        {
            //保留
            unsigned char  s_Reserve:5;
            //数据类型
            unsigned char  s_DataType:3;
        } s_SendDataType; //发射数据类型
    };

    unsigned short int s_VerifyValue;
};

//struct type_NBDP_FollowCommunicateInstruction:public type_BaseInstruction
//{
//    unsigned int  s_MODE;
//    unsigned int  s_TX;
//    unsigned int  s_RX;


//    type_MessageMMSI s_CalledMMSI;

//    unsigned short int s_RTStyle;

//    unsigned short int s_VerifyValue;
//};



#pragma pack(pop)
#endif // UIINSTRUCTION_H
