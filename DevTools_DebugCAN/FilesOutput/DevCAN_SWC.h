/* ==================DevCAN_SWC.h File Start=========================== */

#ifndef __DevCAN_SWC_H
#define __DevCAN_SWC_H

#include "DevCAN_Message.h"

#include "Can.h"



typedef uint16 DevCan_MailboxType; /* USER_INTEGRATION_CONFIG_CONTENT */ 

extern void DevCan_MainFunction_Tx(void);
extern void CanIf_RxIndication_DevCan(const Can_HwType *Mailbox, const PduInfoType *PduInfoPtr);




#endif
/* ==================DevCAN_SWC.h File End=========================== */
