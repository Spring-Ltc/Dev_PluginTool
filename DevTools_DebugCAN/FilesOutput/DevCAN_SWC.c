/* ==================DevCAN_SWC.c File Start=========================== */

#include "DevCAN_SWC.h"



#define DEVCAN_MAILBOX_TX_NUM   (3u) /* USER_INTEGRATION_CONFIG_CONTENT */ 
const DevCan_MailboxType DevCanMailboxTable[DEVCAN_MAILBOX_TX_NUM] = {
    0u, /* USER_INTEGRATION_CONFIG_CONTENT */ 
    1u, /* USER_INTEGRATION_CONFIG_CONTENT */ 
    2u, /* USER_INTEGRATION_CONFIG_CONTENT */ 
};


static void DevCan_Memcpy(const uint8 *Src,uint8 *Dest,uint8 Length)
{
	uint8 i;
	for(i = 0; i < Length; i++)
	{
		Dest[i] = Src[i];
	}
}


static void DevCan_GetTxPduInfo(uint16 Index,Can_PduType *TxPdu)
{
	switch(Index)
	{
		case 0:
		{
			Message_MCU_DevPC_0x081.S.AdcValTPcbU  = s_AdcValTPcbU;
			Message_MCU_DevPC_0x081.S.AdcValTPcbV  = s_AdcValTPcbV;
			Message_MCU_DevPC_0x081.S.AdcValTPcbW  = s_AdcValTPcbW;
			Message_MCU_DevPC_0x081.S.AdcValTPmic  = s_AdcValTPmic;
			Message_MCU_DevPC_0x081.S.AdcValTEtherCat  = s_AdcValTEtherCat;
			TxPdu->id = 0x081u;
			TxPdu->sdu = Message_MCU_DevPC_0x081.Buffer;
		}break;
		case 1:
		{
			Message_MCU_DevPC_0x082.S.AdcValVersionBrd  = s_AdcValVersionBrd;
			Message_MCU_DevPC_0x082.S.AdcValIref2V5  = s_AdcValIref2V5;
			Message_MCU_DevPC_0x082.S.AdcValGate15V  = s_AdcValGate15V;
			Message_MCU_DevPC_0x082.S.AdcValV24V  = s_AdcValV24V;
			Message_MCU_DevPC_0x082.S.AdcValV15V  = s_AdcValV15V;
			TxPdu->id = 0x082u;
			TxPdu->sdu = Message_MCU_DevPC_0x082.Buffer;
		}break;
		case 2:
		{
			Message_MCU_DevPC_0x083.S.AdcValCompOCU  = s_AdcValCompOCU;
			Message_MCU_DevPC_0x083.S.AdcValCompOCV  = s_AdcValCompOCV;
			Message_MCU_DevPC_0x083.S.AdcValCompOCW  = s_AdcValCompOCW;
			Message_MCU_DevPC_0x083.S.AdcValCompOVBUS  = s_AdcValCompOVBUS;
			Message_MCU_DevPC_0x083.S.AdcValCompUVBUS  = s_AdcValCompUVBUS;
			Message_MCU_DevPC_0x083.S.PhyValCompOCU  = s_PhyValCompOCU;
			Message_MCU_DevPC_0x083.S.PhyValCompOCV  = s_PhyValCompOCV;
			Message_MCU_DevPC_0x083.S.PhyValCompOCW  = s_PhyValCompOCW;
			TxPdu->id = 0x083u;
			TxPdu->sdu = Message_MCU_DevPC_0x083.Buffer;
		}break;
		case 3:
		{
			Message_MCU_DevPC_0x084.S.AdcValCurrentU  = s_AdcValCurrentU;
			Message_MCU_DevPC_0x084.S.AdcValCurrentV  = s_AdcValCurrentV;
			Message_MCU_DevPC_0x084.S.AdcValCurrentW  = s_AdcValCurrentW;
			Message_MCU_DevPC_0x084.S.AdcValVoltageBUS  = s_AdcValVoltageBUS;
			Message_MCU_DevPC_0x084.S.AdcValTMotor  = s_AdcValTMotor;
			TxPdu->id = 0x084u;
			TxPdu->sdu = Message_MCU_DevPC_0x084.Buffer;
		}break;
		case 4:
		{
			Message_MCU_DevPC_0x085.S.PhyValTPcbU  = s_PhyValTPcbU/(0.1);
			Message_MCU_DevPC_0x085.S.PhyValTPcbV  = s_PhyValTPcbV/(0.1);
			Message_MCU_DevPC_0x085.S.PhyValTPcbW  = s_PhyValTPcbW/(0.1);
			Message_MCU_DevPC_0x085.S.PhyValCompOVBUS  = s_PhyValCompOVBUS;
			TxPdu->id = 0x085u;
			TxPdu->sdu = Message_MCU_DevPC_0x085.Buffer;
		}break;
		case 5:
		{
			Message_MCU_DevPC_0x086.S.PhyValTMotor  = s_PhyValTMotor/(0.1);
			Message_MCU_DevPC_0x086.S.PhyValTPmic  = s_PhyValTPmic/(0.1);
			Message_MCU_DevPC_0x086.S.PhyValTEtherCat  = s_PhyValTEtherCat/(0.1);
			Message_MCU_DevPC_0x086.S.PhyValCompUVBUS  = s_PhyValCompUVBUS;
			TxPdu->id = 0x086u;
			TxPdu->sdu = Message_MCU_DevPC_0x086.Buffer;
		}break;
		case 6:
		{
			Message_MCU_DevPC_0x087.S.PhyValVoltageBUS  = s_PhyValVoltageBUS/(0.01);
			Message_MCU_DevPC_0x087.S.PhyValCurrentU  = (s_PhyValCurrentU - (-300))/(0.01);
			Message_MCU_DevPC_0x087.S.PhyValCurrentV  = (s_PhyValCurrentV - (-300))/(0.01);
			Message_MCU_DevPC_0x087.S.PhyValCurrentW  = (s_PhyValCurrentW - (-300))/(0.01);
			TxPdu->id = 0x087u;
			TxPdu->sdu = Message_MCU_DevPC_0x087.Buffer;
		}break;
		case 7:
		{
			Message_MCU_DevPC_0x088.S.PhyValIref2V5  = s_PhyValIref2V5/(0.01);
			Message_MCU_DevPC_0x088.S.PhyValVoltageVerBrd  = s_PhyValVoltageVerBrd/(0.01);
			Message_MCU_DevPC_0x088.S.PhyValGate15V  = s_PhyValGate15V/(0.01);
			Message_MCU_DevPC_0x088.S.PhyValV15V  = s_PhyValV15V/(0.01);
			Message_MCU_DevPC_0x088.S.PhyValV24V  = s_PhyValV24V/(0.01);
			TxPdu->id = 0x088u;
			TxPdu->sdu = Message_MCU_DevPC_0x088.Buffer;
		}break;
		case 0xFFFFu:
		{
			/*do nothing*/
		}break;
		default:
		{
			/*do nothing*/
		}break;
	}
}


#define DEVCAN_MESSAGE_TX_NUM	(8u)
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


static void DevCan_SetRxPduInfo(Can_IdType RxCanId, uint8 RxLength, const uint8 *RxBuffer)
{
	switch(RxCanId)
	{
		case 0x061u:
		{
			DevCan_Memcpy(RxBuffer,Message_DevPC_MCU_0x061.Buffer,RxLength);
			s_CmdPwmDeadTime = (float32)(Message_DevPC_MCU_0x061.S.CmdPwmDeadTime)*(0.01);
			s_CmdPwmDutyU = (float32)(Message_DevPC_MCU_0x061.S.CmdPwmDutyU)*(0.1);
			s_CmdPwmDutyV = (float32)(Message_DevPC_MCU_0x061.S.CmdPwmDutyV)*(0.1);
			s_CmdPwmDutyW = (float32)(Message_DevPC_MCU_0x061.S.CmdPwmDutyW)*(0.1);
			s_CmdPwmFreq = (uint16)(Message_DevPC_MCU_0x061.S.CmdPwmFreq);
			s_CmdPwmOutEn = (Message_DevPC_MCU_0x061.S.CmdPwmOutEn);
		}break;
		case 0x7FFu:
		{
			/*do nothing*/
		}break;
		default:
		{
			/*do nothing*/
		}break;
	}
}


void CanIf_RxIndication_DevCan(const Can_HwType *Mailbox, const PduInfoType *PduInfoPtr)
{
	Can_IdType RxCanId = Mailbox->CanId;
	uint8 RxLength = PduInfoPtr->SduLength;
	uint8 *RxBuffer = PduInfoPtr->SduDataPtr;
	DevCan_SetRxPduInfo(RxCanId, RxLength, RxBuffer);
}







/* ==================DevCAN_SWC.c File End=========================== */
