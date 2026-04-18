/* ==================DevCAN_SWC.c File Start=========================== */

#include "DevCAN_SWC.h"



#define DEVCAN_MAILBOX_TX_NUM   (3u) /* USER_INTEGRATION_CONFIG_CONTENT */ 
const DevCan_MailboxType DevCanMailboxTable[DEVCAN_MAILBOX_TX_NUM] = {
    0u, /* USER_INTEGRATION_CONFIG_CONTENT */ 
    1u, /* USER_INTEGRATION_CONFIG_CONTENT */ 
    2u, /* USER_INTEGRATION_CONFIG_CONTENT */ 
};


static void DevCan_GetTxPduInfo(uint16 Index,Can_PduType *TxPdu)
{
	switch(Index)
	{
		case 0:
		{
			Message_MCU_DevPC_0x050.S.AdcValTMotor  = s_AdcValTMotor;
			Message_MCU_DevPC_0x050.S.VoltageTMotor  = s_VoltageTMotor;
			Message_MCU_DevPC_0x050.S.PhyValTMotor  = s_PhyValTMotor/(0.01);
			TxPdu->id = 0x050u;
			TxPdu->sdu = Message_MCU_DevPC_0x050.Buffer;
		}break;
		case 1:
		{
			Message_MCU_DevPC_0x051.S.AdcValTPcb  = s_AdcValTPcb;
			Message_MCU_DevPC_0x051.S.VoltageTPcb  = s_VoltageTPcb;
			Message_MCU_DevPC_0x051.S.PhyValTPcb  = s_PhyValTPcb/(0.01);
			TxPdu->id = 0x051u;
			TxPdu->sdu = Message_MCU_DevPC_0x051.Buffer;
		}break;
		case 2:
		{
			Message_MCU_DevPC_0x052.S.AdcValTEth  = s_AdcValTEth;
			Message_MCU_DevPC_0x052.S.VoltageTEth  = s_VoltageTEth;
			Message_MCU_DevPC_0x052.S.PhyValTEth  = s_PhyValTEth/(0.01);
			TxPdu->id = 0x052u;
			TxPdu->sdu = Message_MCU_DevPC_0x052.Buffer;
		}break;
		case 3:
		{
			Message_MCU_DevPC_0x053.S.AdcValCurrentU1  = s_AdcValCurrentU1;
			Message_MCU_DevPC_0x053.S.VoltageCurrentU1  = s_VoltageCurrentU1;
			Message_MCU_DevPC_0x053.S.PhyValCurrentU1  = (s_PhyValCurrentU1 - (-500))/(0.001);
			TxPdu->id = 0x053u;
			TxPdu->sdu = Message_MCU_DevPC_0x053.Buffer;
		}break;
		case 4:
		{
			Message_MCU_DevPC_0x054.S.AdcValCurrentV1  = s_AdcValCurrentV1;
			Message_MCU_DevPC_0x054.S.VoltageCurrentV1  = s_VoltageCurrentV1;
			Message_MCU_DevPC_0x054.S.PhyValCurrentV1  = (s_PhyValCurrentV1 - (-500))/(0.001);
			TxPdu->id = 0x054u;
			TxPdu->sdu = Message_MCU_DevPC_0x054.Buffer;
		}break;
		case 5:
		{
			Message_MCU_DevPC_0x055.S.AdcValCurrentW1  = s_AdcValCurrentW1;
			Message_MCU_DevPC_0x055.S.VoltageCurrentW1  = s_VoltageCurrentW1;
			Message_MCU_DevPC_0x055.S.PhyValCurrentW1  = (s_PhyValCurrentW1 - (-500))/(0.001);
			TxPdu->id = 0x055u;
			TxPdu->sdu = Message_MCU_DevPC_0x055.Buffer;
		}break;
		case 6:
		{
			Message_MCU_DevPC_0x056.S.AdcValCurrentU2  = s_AdcValCurrentU2;
			Message_MCU_DevPC_0x056.S.VoltageCurrentU2  = s_VoltageCurrentU2;
			Message_MCU_DevPC_0x056.S.PhyValCurrentU2  = (s_PhyValCurrentU2 - (-500))/(0.001);
			TxPdu->id = 0x056u;
			TxPdu->sdu = Message_MCU_DevPC_0x056.Buffer;
		}break;
		case 7:
		{
			Message_MCU_DevPC_0x057.S.AdcValCurrentV2  = s_AdcValCurrentV2;
			Message_MCU_DevPC_0x057.S.VoltageCurrentV2  = s_VoltageCurrentV2;
			Message_MCU_DevPC_0x057.S.PhyValCurrentV2  = (s_PhyValCurrentV2 - (-500))/(0.001);
			TxPdu->id = 0x057u;
			TxPdu->sdu = Message_MCU_DevPC_0x057.Buffer;
		}break;
		case 8:
		{
			Message_MCU_DevPC_0x058.S.AdcValCurrentW2  = s_AdcValCurrentW2;
			Message_MCU_DevPC_0x058.S.VoltageCurrentW2  = s_VoltageCurrentW2;
			Message_MCU_DevPC_0x058.S.PhyValCurrentW2  = (s_PhyValCurrentW2 - (-500))/(0.001);
			TxPdu->id = 0x058u;
			TxPdu->sdu = Message_MCU_DevPC_0x058.Buffer;
		}break;
		case 9:
		{
			Message_MCU_DevPC_0x059.S.AdcValBusLine  = s_AdcValBusLine;
			Message_MCU_DevPC_0x059.S.VoltageBusLine  = s_VoltageBusLine;
			Message_MCU_DevPC_0x059.S.PhyValBusLine  = s_PhyValBusLine/(0.001);
			TxPdu->id = 0x059u;
			TxPdu->sdu = Message_MCU_DevPC_0x059.Buffer;
		}break;
		case 10:
		{
			Message_MCU_DevPC_0x05A.S.AdcValIref2V5  = s_AdcValIref2V5;
			Message_MCU_DevPC_0x05A.S.VoltageIref2V5  = s_VoltageIref2V5;
			Message_MCU_DevPC_0x05A.S.PhyValIref2V5  = s_PhyValIref2V5/(0.001);
			TxPdu->id = 0x05au;
			TxPdu->sdu = Message_MCU_DevPC_0x05A.Buffer;
		}break;
		case 11:
		{
			Message_MCU_DevPC_0x05B.S.AdcValGate15V  = s_AdcValGate15V;
			Message_MCU_DevPC_0x05B.S.VoltageGate15V  = s_VoltageGate15V;
			Message_MCU_DevPC_0x05B.S.PhyValGate15V  = s_PhyValGate15V/(0.001);
			TxPdu->id = 0x05bu;
			TxPdu->sdu = Message_MCU_DevPC_0x05B.Buffer;
		}break;
		case 12:
		{
			Message_MCU_DevPC_0x05C.S.AdcVal15V  = s_AdcVal15V;
			Message_MCU_DevPC_0x05C.S.Voltage15V  = s_Voltage15V;
			Message_MCU_DevPC_0x05C.S.PhyVal15V  = s_PhyVal15V/(0.001);
			TxPdu->id = 0x05cu;
			TxPdu->sdu = Message_MCU_DevPC_0x05C.Buffer;
		}break;
	}
}


#define DEVCAN_MESSAGE_TX_NUM	(13u)
void DevCan_MainFunction_Tx(void)
{
	static uint16 MessageIndex = 0u;
	uint8 MailboxIndex = 0u;
	Can_PduType DevTxPdu = {.length=8u};
	for(MailboxIndex = 0u; MailboxIndex < DEVCAN_MAILBOX_TX_NUM; MailboxIndex++)
	{
		DevCan_GetTxPduInfo(MessageIndex,&DevTxPdu);
		Can_Write(MailboxIndex, &DevTxPdu);
		MessageIndex++;
		if(MessageIndex >= DEVCAN_MESSAGE_TX_NUM)
			MessageIndex = 0u;
	}
}







/* ==================DevCAN_SWC.c File End=========================== */
