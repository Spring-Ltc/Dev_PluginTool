/* *****************************************************************************
 * BEGIN: Banner
 *-----------------------------------------------------------------------------
 *                                 ETAS GmbH
 *                      D-70469 Stuttgart, Borsigstr. 14
 *-----------------------------------------------------------------------------
 *    Administrative Information (automatically filled in by ISOLAR)         
 *-----------------------------------------------------------------------------
 * Name: 
 * Description:
 * Version: 1.0
 *-----------------------------------------------------------------------------
 * END: Banner
 ******************************************************************************

 * Project : TC387Task_MCU
 * Component: /ETAS_BIP/OUTP_SWC
 * Runnable : All Runnables in SwComponent
 *****************************************************************************
 * Tool Version: ISOLAR-A/B 9.2.2
 * Author: i0280
 * Date : ÖÜÁù 11ÔÂ 16 08:37:07 2024
 ****************************************************************************/

#include "Rte_OUTP_SWC.h"
#include "Rte_UserCfg.h"
/*PROTECTED REGION ID(FileHeaderUserDefinedIncludes :RE_ComTx) ENABLED START */
/* Start of user defined includes  - Do not remove this comment */
/* End of user defined includes - Do not remove this comment */
/*PROTECTED REGION END */

/*PROTECTED REGION ID(FileHeaderUserDefinedConstants :RE_ComTx) ENABLED START */
/* Start of user defined constant definitions - Do not remove this comment */
/* End of user defined constant definitions - Do not remove this comment */
/*PROTECTED REGION END */

/*PROTECTED REGION ID(FileHeaderUserDefinedVariables :RE_ComTx) ENABLED START */
/* Start of user variable defintions - Do not remove this comment  */
/* End of user variable defintions - Do not remove this comment  */
/*PROTECTED REGION END */

#if CODE_WITH_APP == 0u
volatile boolean CAN2ApuId310CanStsVcu;
volatile uint8 SwVersDVN;
volatile uint8 VCU1gearposition;
volatile uint8 ComBatt1SocFb;
volatile boolean VCUChrgAllw;
volatile boolean VCU2MaiRlyClsInfo;
volatile uint8 VCU2ElecMotOperMod;
volatile uint16 VcuErrNrCycFb;
volatile uint8 ComGearFb;
volatile uint8 ComVehVFb;
volatile uint8 VCU1SysFltRank;
volatile uint8 IsgMotTFb2;
volatile boolean VCU2PrecClsInfo;
volatile boolean CAN1DCHId603CanStsVcu;
volatile uint8 Cntr141_swc;
volatile uint16 PressureTargetWBS2;
volatile uint8 FuQntyFb1;
volatile uint8 PwrLocnFb;
volatile uint8 VcuResiFuQntyStorg;
volatile uint8 Test1AccrPedV1;
volatile uint16 VCU2ReqSpd;
volatile uint16 DCHOutCurLimSet;
volatile uint16 DCHOutVolSet;
volatile boolean VcuIsgRlyEna;
volatile boolean CAN1BMSNegRlyClsd;
volatile uint16 Pressure1TargetWBS1;
volatile boolean TboxId501CanStsVcu;
volatile boolean Apu1StrtReq;
volatile uint8 VcuPwrSysStsNr;
volatile boolean LeOrRiPosRcndVcu;
volatile uint16 RfPFb;
volatile boolean VCU2StrtAllwd;
volatile uint8 Test2AccrPedV1;
volatile uint8 VcuApu1PtMod;
volatile uint16 Pressure1TargetWBS2;
volatile boolean CAN1ApuId310CanStsVcu;
volatile boolean Apu2DisChrgReq;
volatile uint8 DCHEnableCmd;
volatile boolean VCU1StrtAllwd;
volatile uint8 MotFlIgbtTFb;
volatile uint16 Pressure2TargetWBS1;
volatile boolean CAN2DCHId603CanStsVcu;
volatile uint8 VCUVehicleSpeed1;
volatile uint8 RunningParking2Status;
volatile boolean VCU1MCUSpdDischrg;
volatile boolean CAN1BcuId181CanStsVcu;
volatile uint8 EquipModFb;
volatile boolean VcuCANStStopReq;
volatile uint8 Test2AccrPedV2;
volatile uint8 VcuApu2PtMod;
volatile uint8 CAN2Cntr212_swc;
volatile boolean VcuFrntLampRlyEna;
volatile uint8 NM_Tx_Sig_NM_Tx_0x400;
volatile uint8 IsgMcuTFb2;
volatile uint8 VcuFanSpdPwmCtrl;
volatile uint16 EngSpdFb2;
volatile uint16 DCLOutVolSet;
volatile uint8 Prak2PressureLevel;
volatile boolean ComHvOnFb;
volatile boolean MdcVehRdyFb;
volatile uint16 VCUApuPwrReqS;
volatile uint8 ComIsgMotTFb1;
volatile boolean ComRiBattStsFb;
volatile uint8 FuQntyFb2;
volatile uint8 ComMotFrIgbtTFb;
volatile uint8 PtWhlTypS;
volatile uint8 SwVersVRN;
volatile uint16 LoBattUVcu;
volatile boolean VcuFanRlyEna;
volatile uint16 ActvSteerR;
volatile boolean RiBattStsFb;
volatile uint8 ComEngCooltTFb1;
volatile boolean CAN2McuId153CanStsVcu;
volatile boolean BarrModFb;
volatile boolean MdcId148CanStsVcu;
volatile uint8 SwVersVFN;
volatile uint16 ComLfPFb;
volatile uint16 ComAgHeadingFb;
volatile boolean VcuDataStoreReq;
volatile boolean ComLeBattStsFb;
volatile boolean SteerModStsFb;
volatile uint16 ComVcuErrNrFb;
volatile uint8 ComFuQntyFb1;
volatile boolean CAN1WbsId201CanStsVcu;
volatile uint16 VcuErrTotFb;
volatile boolean ACMSD;
volatile uint8 ComFuQntyFb2;
volatile uint8 MotFrIgbtTFb;
volatile uint16 ComBatt1VltgFb;
volatile uint8 ComIsgMcuTFb2;
volatile boolean Test1FlgBrk;
volatile boolean EmgyStopVcu;
volatile uint8 SwVersCVN;
volatile uint8 ComPwrExchStsFb;
volatile uint16 EngSpdFb1;
volatile boolean CAN1BMSMaiRlyClsd;
volatile boolean ComPullWireModFb;
volatile boolean BcuCanStS;
volatile boolean VCU1MaiRlyClsInfo;
volatile uint8 VcuWbs1PtWhlLocn;
volatile boolean MaiCtrlrLocnFb;
volatile uint16 VcuErrNrFb;
volatile boolean LvOnFb;
volatile uint16 VCU1MinPermTq;
volatile uint8 ESTOP2;
volatile uint16 AutVehVFb;
volatile uint8 VCU2VehicleSpeed;
volatile boolean ErrLvUpInhbS;
volatile uint16 Apu1PwrReq;
volatile uint16 BatttSnsrTOutVcu;
volatile boolean CAN2DCLId601CanStsVcu;
volatile uint8 Batt1MaxTFb;
volatile boolean ImuId500CanStsVcu;
volatile boolean ComId421CanStsVcu;
volatile uint8 ComMotFlIgbtTFb;
volatile uint16 ComEngSpdFb1;
volatile uint8 Cntr321_swc;
volatile boolean CAN2Acp354CanStsVcu;
volatile uint16 VCU2MaxPermTq;
volatile uint8 VCU1PtWhlLocn;
volatile uint8 Batt2SocFb;
volatile uint8 VcuBcupauseChargeFaultS;
volatile uint8 VehVFb;
volatile boolean EmgyStopOnFb;
volatile uint8 vcuwbs02BR2;
volatile uint8 RunningParking1Status;
volatile uint16 AgHeadingFb;
volatile uint8 CAN2Cntr217_swc;
volatile boolean MechanismKeyFlgVcu;
volatile boolean VcuEngStsFb;
volatile uint8 ONIGNReady;
volatile uint16 BattSnsrTVcu;
volatile uint16 ComBatt2VltgFb;
volatile uint8 EngCooltTFb1;
volatile uint16 VcuBcuSocS;
volatile uint8 MotFrTFb;
volatile uint8 vcuwbs02BR1;
volatile uint8 PtfmTypFb;
volatile boolean HvilErrVcu;
volatile boolean VCU1PrecClsInfo;
volatile uint8 VCU2InAccpedalposition1;
volatile boolean VcuBcuPwrUpAllwS;
volatile uint16 VCU1MaxPermTq;
volatile uint8 CAN1Cntr217_swc;
volatile uint8 VCU2SysFltRank;
volatile boolean CAN2BMSNegRlyClsd;
volatile uint16 Batt2VltgFb;
volatile boolean VehRdyFb;
volatile boolean RiLampCtrl;
volatile boolean VcuHornRlyEna;
volatile boolean CAN2WbsId201CanStsVcu;
volatile boolean ComMaiCtrlrLocnFb;
volatile uint8 PtWhlLocnS;
volatile boolean Test2FlgGripBrk;
volatile boolean VcuResElyEna1;
volatile boolean Test2FlgBrk;
volatile uint8 Batt2MaxTFb;
volatile boolean PullWireModFb;
volatile uint8 ComMotFlTFb;
volatile boolean VcuHvActvS;
volatile boolean VCU1MCUPwrDwn;
volatile boolean VcuRvsLiLampSts;
volatile uint8 PwrExchStsFb;
volatile uint8 ComIsgMcuTFb1;
volatile uint8 ComIsgPwrOutFb2;
volatile uint8 ActvGearPosnFb;
volatile uint16 Batt1VltgFb;
volatile uint8 ComMotFrTFb;
volatile boolean VcuApuCAN2StStopReq;
volatile boolean VcuBrkPedlLiLampSts;
volatile uint8 IsgPwrOutFb2;
volatile boolean VcuWbsRlyEna;
volatile uint8 ComIsgMotTFb2;
volatile boolean CAN1DCLId601CanStsVcu;
volatile boolean VcuPosnLampSts;
volatile uint16 VcuTotVygStorg;
volatile boolean CAN2VIUId101CanStsVcu;
volatile boolean PtWhlCompanionBattAvlS;
volatile uint8 OperModFb;
volatile boolean VcuLeRiPosRlyEna;
volatile uint16 MotSnsrTOutVcu;
volatile boolean VcuTensnrRlyEna;
volatile uint16 TotVygFb;
volatile uint16 ComRfPFb;
volatile uint8 VCU2gearposition;
volatile uint8 MotFlTFb;
volatile boolean ComVehRdyFb;
volatile boolean ComParkModFb;
volatile uint8 ComBatt1MaxTFb;
volatile uint8 VCU1InAccpedalposition2;
volatile uint8 ComPtfmTypFb;
volatile uint8 CAN1ID131CycCntr_swc;
volatile boolean VcuBcuCoolPumpRlyEna;
volatile uint8 ComIsgPwrOutFb1;
volatile boolean ACCoolEnable;
volatile uint16 FuQntyVcu;
volatile boolean Apu1DisChrgReq;
volatile boolean CAN1Acp352CanStsVcu;
volatile uint8 VCUFuQntyS;
volatile uint8 IsgPwrOutFb1;
volatile uint16 AgRollFb;
volatile uint16 MotSnsrTVcu;
volatile uint16 ComAgRollFb;
volatile boolean VcuApuCAN1StStopReq;
volatile uint8 VcuDrvModFb;
volatile uint16 ComTotVygFb;
volatile boolean VcuLvActvS;
volatile boolean CAN2BMSMaiRlyClsd;
volatile uint16 DCLOutCurLimSet;
volatile uint8 VcuWbs2PtWhlLocn;
volatile uint8 VcuBcuFltRankS;
volatile boolean ParkModFb;
volatile uint8 VcuFltRankFb;
volatile boolean Apu2StrtReq;
volatile uint8 SwVersVSN;
volatile uint8 ComBatt2MaxTFb;
volatile uint8 ESTOP1;
volatile uint8 Test1AccrPedV2;
volatile boolean CAN2BcuId181CanStsVcu;
volatile uint8 PwrModFb;
volatile uint16 ComEngSpdFb2;
volatile boolean EmgBrkStsFb;
volatile boolean LeLampCtrl;
volatile uint8 ComPwrModFb;
volatile boolean ErrChrgInhbReqS;
volatile uint8 VCU2InAccpedalposition2;
volatile uint8 GearFb;
volatile boolean CAN1McuId153CanStsVcu;
volatile uint8 VcuPwrSysStsNrS;
volatile uint8 ComOperModFb;
volatile boolean VcuMcuCoolPumpRlyEna;
volatile uint8 VCUBcuOperModReq;
volatile uint16 VCU2MinPermTq;
volatile uint8 Cntr322_swc;
volatile uint8 BatTarCoolTemp;
volatile uint8 VcuBcuChrgStsS;
volatile boolean Test1FlgGripBrk;
volatile boolean VCU2MCUSpdDischrg;
volatile uint16 LfPFb;
volatile uint8 ComEquipModFb;
volatile uint16 ComAgPitchFb;
volatile uint8 EngCooltTFb2;
volatile boolean VcuBcuChrgModS;
volatile uint8 VCU1InAccpedalposition1;
volatile uint8 Batt1SocFb;
volatile boolean VcuDcdcRlyEna;
volatile uint8 ComBatt2SocFb;
volatile boolean ErrLvPwrDwnReqS;
volatile uint8 EpbCtrlStsInfo;
volatile uint8 VCU2PtWhlLocn;
volatile uint8 IsgMcuTFb1;
volatile uint16 VCU2ReqTq;
volatile boolean CAN2Acp353CanStsVcu;
volatile uint8 EpbCtrlStsFbS;
volatile uint8 ComPwrLocnFb;
volatile uint8 VcuBattSwtSt;
volatile boolean VcuPosRlyEna;
volatile uint8 VCUFltLevel;
volatile boolean VcuPrechrgRlyEna;
volatile boolean ComLvOnFb;
volatile uint8 CAN2VCUID131CycCntr_swc;
volatile uint16 Apu2PwrReq;
volatile uint8 CAN1Cntr212_swc;
volatile boolean VcuTurnLampSts;
volatile uint8 Prak1PressureLevel;
volatile uint8 ComEngCooltTFb2;
volatile boolean VcuMdcRadarRlyEna;
volatile boolean HvOnFb;
volatile uint8 VCU1ElecMotOperMod;
volatile boolean VCU2MCUPwrDwn;
volatile uint8 ONIGNReady1;
volatile boolean ComBarrModFb;
volatile uint8 VcuEPBCtrl;
volatile boolean VcuAcpRlyEna;
volatile uint16 AgPitchFb;
volatile uint16 VCU1ReqTq;
volatile uint16 VCU1ReqSpd;
volatile uint8 VCUCycCntr_swc;
volatile boolean ComEmgyStopOnFb;
volatile uint8 ComImuSysCalModSts;
volatile uint8 IsgMotTFb1;
volatile uint8 DCLEnableCmd;
volatile boolean LeBattStsFb;
volatile uint8 VcuWhlCmbnMod;
volatile uint8 ImuSysCalModSts;

volatile boolean CANStStopReq;
volatile boolean CANStStopReq_b;
volatile boolean ApuCAN1StStopReq;
volatile boolean ApuCAN1StStopReq_b;
volatile boolean ApuCAN2StStopReq;
volatile boolean ApuCAN2StStopReq_b;


#else /*?????????extern????counter??*/
extern volatile boolean CAN2ApuId310CanStsVcu;
extern volatile uint8 SwVersDVN;
extern volatile uint8 VCU1gearposition;
extern volatile uint8 ComBatt1SocFb;
extern volatile boolean VCUChrgAllw;
extern volatile boolean VCU2MaiRlyClsInfo;
extern volatile uint8 VCU2ElecMotOperMod;
extern volatile uint16 VcuErrNrCycFb;
extern volatile uint8 ComGearFb;
extern volatile uint8 ComVehVFb;
extern volatile uint8 VCU1SysFltRank;
extern volatile uint8 IsgMotTFb2;
extern volatile boolean VCU2PrecClsInfo;
extern volatile boolean CAN1DCHId603CanStsVcu;
 volatile uint8 Cntr141_swc;
extern volatile uint16 PressureTargetWBS2;
extern volatile uint8 FuQntyFb1;
extern volatile uint8 PwrLocnFb;
extern volatile uint8 VcuResiFuQntyStorg;
extern volatile uint8 Test1AccrPedV1;
extern volatile uint16 VCU2ReqSpd;
extern volatile uint16 DCHOutCurLimSet;
extern volatile uint16 DCHOutVolSet;
extern volatile boolean VcuIsgRlyEna;
extern volatile boolean CAN1BMSNegRlyClsd;
extern volatile uint16 Pressure1TargetWBS1;
extern volatile boolean TboxId501CanStsVcu;
extern volatile boolean Apu1StrtReq;
extern volatile uint8 VcuPwrSysStsNr;
extern volatile boolean LeOrRiPosRcndVcu;
extern volatile uint16 RfPFb;
extern volatile boolean VCU2StrtAllwd;
extern volatile uint8 Test2AccrPedV1;
extern volatile uint8 VcuApu1PtMod;
extern volatile uint16 Pressure1TargetWBS2;
extern volatile boolean CAN1ApuId310CanStsVcu;
extern volatile boolean Apu2DisChrgReq;
extern volatile uint8 DCHEnableCmd;
extern volatile boolean VCU1StrtAllwd;
extern volatile uint8 MotFlIgbtTFb;
extern volatile uint16 Pressure2TargetWBS1;
extern volatile boolean CAN2DCHId603CanStsVcu;
extern volatile uint8 VCUVehicleSpeed1;
extern volatile uint8 RunningParking2Status;
extern volatile boolean VCU1MCUSpdDischrg;
extern volatile boolean CAN1BcuId181CanStsVcu;
extern volatile uint8 EquipModFb;
extern volatile boolean VcuCANStStopReq;
extern volatile uint8 Test2AccrPedV2;
extern volatile uint8 VcuApu2PtMod;
 volatile uint8 CAN2Cntr212_swc;
extern volatile boolean VcuFrntLampRlyEna;
 volatile uint8 NM_Tx_Sig_NM_Tx_0x400;
extern volatile uint8 IsgMcuTFb2;
extern volatile uint8 VcuFanSpdPwmCtrl;
extern volatile uint16 EngSpdFb2;
extern volatile uint16 DCLOutVolSet;
extern volatile uint8 Prak2PressureLevel;
extern volatile boolean ComHvOnFb;
extern volatile boolean MdcVehRdyFb;
extern volatile uint16 VCUApuPwrReqS;
extern volatile uint8 ComIsgMotTFb1;
extern volatile boolean ComRiBattStsFb;
extern volatile uint8 FuQntyFb2;
extern volatile uint8 ComMotFrIgbtTFb;
extern volatile uint8 PtWhlTypS;
extern volatile uint8 SwVersVRN;
extern volatile uint16 LoBattUVcu;
extern volatile boolean VcuFanRlyEna;
extern volatile uint16 ActvSteerR;
extern volatile boolean RiBattStsFb;
extern volatile uint8 ComEngCooltTFb1;
extern volatile boolean CAN2McuId153CanStsVcu;
extern volatile boolean BarrModFb;
extern volatile boolean MdcId148CanStsVcu;
extern volatile uint8 SwVersVFN;
extern volatile uint16 ComLfPFb;
extern volatile uint16 ComAgHeadingFb;
extern volatile boolean VcuDataStoreReq;
extern volatile boolean ComLeBattStsFb;
extern volatile boolean SteerModStsFb;
extern volatile uint16 ComVcuErrNrFb;
extern volatile uint8 ComFuQntyFb1;
extern volatile boolean CAN1WbsId201CanStsVcu;
extern volatile uint16 VcuErrTotFb;
extern volatile boolean ACMSD;
extern volatile uint8 ComFuQntyFb2;
extern volatile uint8 MotFrIgbtTFb;
extern volatile uint16 ComBatt1VltgFb;
extern volatile uint8 ComIsgMcuTFb2;
extern volatile boolean Test1FlgBrk;
extern volatile boolean EmgyStopVcu;
extern volatile uint8 SwVersCVN;
extern volatile uint8 ComPwrExchStsFb;
extern volatile uint16 EngSpdFb1;
extern volatile boolean CAN1BMSMaiRlyClsd;
extern volatile boolean ComPullWireModFb;
extern volatile boolean BcuCanStS;
extern volatile boolean VCU1MaiRlyClsInfo;
extern volatile uint8 VcuWbs1PtWhlLocn;
extern volatile boolean MaiCtrlrLocnFb;
extern volatile uint16 VcuErrNrFb;
extern volatile boolean LvOnFb;
extern volatile uint16 VCU1MinPermTq;
extern volatile uint8 ESTOP2;
extern volatile uint16 AutVehVFb;
extern volatile uint8 VCU2VehicleSpeed;
extern volatile boolean ErrLvUpInhbS;
extern volatile uint16 Apu1PwrReq;
extern volatile uint16 BatttSnsrTOutVcu;
extern volatile boolean CAN2DCLId601CanStsVcu;
extern volatile uint8 Batt1MaxTFb;
extern volatile boolean ImuId500CanStsVcu;
extern volatile boolean ComId421CanStsVcu;
extern volatile uint8 ComMotFlIgbtTFb;
extern volatile uint16 ComEngSpdFb1;
 volatile uint8 Cntr321_swc;
extern volatile boolean CAN2Acp354CanStsVcu;
extern volatile uint16 VCU2MaxPermTq;
extern volatile uint8 VCU1PtWhlLocn;
extern volatile uint8 Batt2SocFb;
extern volatile uint8 VcuBcupauseChargeFaultS;
extern volatile uint8 VehVFb;
extern volatile boolean EmgyStopOnFb;
extern volatile uint8 vcuwbs02BR2;
extern volatile uint8 RunningParking1Status;
extern volatile uint16 AgHeadingFb;
 volatile uint8 CAN2Cntr217_swc;
extern volatile boolean MechanismKeyFlgVcu;
extern volatile boolean VcuEngStsFb;
extern volatile uint8 ONIGNReady;
extern volatile uint16 BattSnsrTVcu;
extern volatile uint16 ComBatt2VltgFb;
extern volatile uint8 EngCooltTFb1;
extern volatile uint16 VcuBcuSocS;
extern volatile uint8 MotFrTFb;
extern volatile uint8 vcuwbs02BR1;
extern volatile uint8 PtfmTypFb;
extern volatile boolean HvilErrVcu;
extern volatile boolean VCU1PrecClsInfo;
extern volatile uint8 VCU2InAccpedalposition1;
extern volatile boolean VcuBcuPwrUpAllwS;
extern volatile uint16 VCU1MaxPermTq;
 volatile uint8 CAN1Cntr217_swc;
extern volatile uint8 VCU2SysFltRank;
extern volatile boolean CAN2BMSNegRlyClsd;
extern volatile uint16 Batt2VltgFb;
extern volatile boolean VehRdyFb;
extern volatile boolean RiLampCtrl;
extern volatile boolean VcuHornRlyEna;
extern volatile boolean CAN2WbsId201CanStsVcu;
extern volatile boolean ComMaiCtrlrLocnFb;
extern volatile uint8 PtWhlLocnS;
extern volatile boolean Test2FlgGripBrk;
extern volatile boolean VcuResElyEna1;
extern volatile boolean Test2FlgBrk;
extern volatile uint8 Batt2MaxTFb;
extern volatile boolean PullWireModFb;
extern volatile uint8 ComMotFlTFb;
extern volatile boolean VcuHvActvS;
extern volatile boolean VCU1MCUPwrDwn;
extern volatile boolean VcuRvsLiLampSts;
extern volatile uint8 PwrExchStsFb;
extern volatile uint8 ComIsgMcuTFb1;
extern volatile uint8 ComIsgPwrOutFb2;
extern volatile uint8 ActvGearPosnFb;
extern volatile uint16 Batt1VltgFb;
extern volatile uint8 ComMotFrTFb;
extern volatile boolean VcuApuCAN2StStopReq;
extern volatile boolean VcuBrkPedlLiLampSts;
extern volatile uint8 IsgPwrOutFb2;
extern volatile boolean VcuWbsRlyEna;
extern volatile uint8 ComIsgMotTFb2;
extern volatile boolean CAN1DCLId601CanStsVcu;
extern volatile boolean VcuPosnLampSts;
extern volatile uint16 VcuTotVygStorg;
extern volatile boolean CAN2VIUId101CanStsVcu;
extern volatile boolean PtWhlCompanionBattAvlS;
extern volatile uint8 OperModFb;
extern volatile boolean VcuLeRiPosRlyEna;
extern volatile uint16 MotSnsrTOutVcu;
extern volatile boolean VcuTensnrRlyEna;
extern volatile uint16 TotVygFb;
extern volatile uint16 ComRfPFb;
extern volatile uint8 VCU2gearposition;
extern volatile uint8 MotFlTFb;
extern volatile boolean ComVehRdyFb;
extern volatile boolean ComParkModFb;
extern volatile uint8 ComBatt1MaxTFb;
extern volatile uint8 VCU1InAccpedalposition2;
extern volatile uint8 ComPtfmTypFb;
 volatile uint8 CAN1ID131CycCntr_swc;
extern volatile boolean VcuBcuCoolPumpRlyEna;
extern volatile uint8 ComIsgPwrOutFb1;
extern volatile boolean ACCoolEnable;
extern volatile uint16 FuQntyVcu;
extern volatile boolean Apu1DisChrgReq;
extern volatile boolean CAN1Acp352CanStsVcu;
extern volatile uint8 VCUFuQntyS;
extern volatile uint8 IsgPwrOutFb1;
extern volatile uint16 AgRollFb;
extern volatile uint16 MotSnsrTVcu;
extern volatile uint16 ComAgRollFb;
extern volatile boolean VcuApuCAN1StStopReq;
extern volatile uint8 VcuDrvModFb;
extern volatile uint16 ComTotVygFb;
extern volatile boolean VcuLvActvS;
extern volatile boolean CAN2BMSMaiRlyClsd;
extern volatile uint16 DCLOutCurLimSet;
extern volatile uint8 VcuWbs2PtWhlLocn;
extern volatile uint8 VcuBcuFltRankS;
extern volatile boolean ParkModFb;
extern volatile uint8 VcuFltRankFb;
extern volatile boolean Apu2StrtReq;
extern volatile uint8 SwVersVSN;
extern volatile uint8 ComBatt2MaxTFb;
extern volatile uint8 ESTOP1;
extern volatile uint8 Test1AccrPedV2;
extern volatile boolean CAN2BcuId181CanStsVcu;
extern volatile uint8 PwrModFb;
extern volatile uint16 ComEngSpdFb2;
extern volatile boolean EmgBrkStsFb;
extern volatile boolean LeLampCtrl;
extern volatile uint8 ComPwrModFb;
extern volatile boolean ErrChrgInhbReqS;
extern volatile uint8 VCU2InAccpedalposition2;
extern volatile uint8 GearFb;
extern volatile boolean CAN1McuId153CanStsVcu;
extern volatile uint8 VcuPwrSysStsNrS;
extern volatile uint8 ComOperModFb;
extern volatile boolean VcuMcuCoolPumpRlyEna;
extern volatile uint8 VCUBcuOperModReq;
extern volatile uint16 VCU2MinPermTq;
 volatile uint8 Cntr322_swc;
extern volatile uint8 BatTarCoolTemp;
extern volatile uint8 VcuBcuChrgStsS;
extern volatile boolean Test1FlgGripBrk;
extern volatile boolean VCU2MCUSpdDischrg;
extern volatile uint16 LfPFb;
extern volatile uint8 ComEquipModFb;
extern volatile uint16 ComAgPitchFb;
extern volatile uint8 EngCooltTFb2;
extern volatile boolean VcuBcuChrgModS;
extern volatile uint8 VCU1InAccpedalposition1;
extern volatile uint8 Batt1SocFb;
extern volatile boolean VcuDcdcRlyEna;
extern volatile uint8 ComBatt2SocFb;
extern volatile boolean ErrLvPwrDwnReqS;
extern volatile uint8 EpbCtrlStsInfo;
extern volatile uint8 VCU2PtWhlLocn;
extern volatile uint8 IsgMcuTFb1;
extern volatile uint16 VCU2ReqTq;
extern volatile boolean CAN2Acp353CanStsVcu;
extern volatile uint8 EpbCtrlStsFbS;
extern volatile uint8 ComPwrLocnFb;
extern volatile uint8 VcuBattSwtSt;
extern volatile boolean VcuPosRlyEna;
extern volatile uint8 VCUFltLevel;
extern volatile boolean VcuPrechrgRlyEna;
extern volatile boolean ComLvOnFb;
 volatile uint8 CAN2VCUID131CycCntr_swc;
extern volatile uint16 Apu2PwrReq;
 volatile uint8 CAN1Cntr212_swc;
extern volatile boolean VcuTurnLampSts;
extern volatile uint8 Prak1PressureLevel;
extern volatile uint8 ComEngCooltTFb2;
extern volatile boolean VcuMdcRadarRlyEna;
extern volatile boolean HvOnFb;
extern volatile uint8 VCU1ElecMotOperMod;
extern volatile boolean VCU2MCUPwrDwn;
extern volatile uint8 ONIGNReady1;
extern volatile boolean ComBarrModFb;
extern volatile uint8 VcuEPBCtrl;
extern volatile boolean VcuAcpRlyEna;
extern volatile uint16 AgPitchFb;
extern volatile uint16 VCU1ReqTq;
extern volatile uint16 VCU1ReqSpd;
 volatile uint8 VCUCycCntr_swc;
extern volatile boolean ComEmgyStopOnFb;
extern volatile uint8 ComImuSysCalModSts;
extern volatile uint8 IsgMotTFb1;
extern volatile uint8 DCLEnableCmd;
extern volatile boolean LeBattStsFb;
extern volatile uint8 VcuWhlCmbnMod;
extern volatile uint8 ImuSysCalModSts;

extern volatile boolean CANStStopReq;
volatile boolean CANStStopReq_b;
extern volatile boolean ApuCAN1StStopReq;
volatile boolean ApuCAN1StStopReq_b;
extern volatile boolean ApuCAN2StStopReq;
volatile boolean ApuCAN2StStopReq_b;

#endif





#define OUTP_SWC_START_SEC_CODE                   
#include "OUTP_SWC_MemMap.h"
FUNC (void, OUTP_SWC_CODE) RE_ComTx/* return value & FctID */
(
		void
)
{

	/* Local Data Declaration */
	static uint8 time20ms=0;
	/*PROTECTED REGION ID(UserVariables :RE_ComTx) ENABLED START */
	/* Start of user variable defintions - Do not remove this comment  */
	/* End of user variable defintions - Do not remove this comment  */
	/*PROTECTED REGION END */
	Std_ReturnType retValue = RTE_E_OK;
	/*  -------------------------------------- Data Read -----------------------------------------  */

	/*  -------------------------------------- Server Call Point  --------------------------------  */

	/*  -------------------------------------- CDATA ---------------------------------------------  */

	/*  -------------------------------------- Data Write ----------------------------------------  */

	Rte_IWrite_RE_ComTx_PP_CAN2ApuId310CanStsVcu_CAN2_VIU_VIU_0x702_CAN2ApuId310CanStsVcu_CAN2_VIU_VIU_0x702(CAN2ApuId310CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_SwVersDVN_CAN2_VIU_VIU_0x710_SwVersDVN_CAN2_VIU_VIU_0x710(SwVersDVN);
	Rte_IWrite_RE_ComTx_PP_VCU1gearposition_CAN1_VIU_MCU_0x307_VCU1gearposition_CAN1_VIU_MCU_0x307(VCU1gearposition);
	Rte_IWrite_RE_ComTx_PP_ComBatt1SocFb_CAN4_VIU_COM_0x431_ComBatt1SocFb_CAN4_VIU_COM_0x431(ComBatt1SocFb);
	Rte_IWrite_RE_ComTx_PP_VCUChrgAllw_CAN1_VIU_BCU_0x131_VCUChrgAllw_CAN1_VIU_BCU_0x131(VCUChrgAllw);
	Rte_IWrite_RE_ComTx_PP_VCU2MaiRlyClsInfo_CAN2_VIU_MCU_0x121_VCU2MaiRlyClsInfo_CAN2_VIU_MCU_0x121(VCU2MaiRlyClsInfo);
	Rte_IWrite_RE_ComTx_PP_VCU2ElecMotOperMod_CAN2_VIU_MCU_0x121_VCU2ElecMotOperMod_CAN2_VIU_MCU_0x121(VCU2ElecMotOperMod);
	Rte_IWrite_RE_ComTx_PP_VcuErrNrCycFb_CAN4_VIU_MDC_0x521_VcuErrNrCycFb_CAN4_VIU_MDC_0x521(VcuErrNrCycFb);
	Rte_IWrite_RE_ComTx_PP_ComGearFb_CAN4_VIU_COM_0x432_ComGearFb_CAN4_VIU_COM_0x432(ComGearFb);
	Rte_IWrite_RE_ComTx_PP_ComVehVFb_CAN4_VIU_COM_0x431_ComVehVFb_CAN4_VIU_COM_0x431(ComVehVFb);
	Rte_IWrite_RE_ComTx_PP_VCU1SysFltRank_CAN1_VIU_MCU_0x121_VCU1SysFltRank_CAN1_VIU_MCU_0x121(VCU1SysFltRank);
	Rte_IWrite_RE_ComTx_PP_IsgMotTFb2_CAN4_VIU_TBOX_0x408_IsgMotTFb2_CAN4_VIU_TBOX_0x408(IsgMotTFb2);
	Rte_IWrite_RE_ComTx_PP_VCU2PrecClsInfo_CAN2_VIU_MCU_0x121_VCU2PrecClsInfo_CAN2_VIU_MCU_0x121(VCU2PrecClsInfo);
	Rte_IWrite_RE_ComTx_PP_CAN1DCHId603CanStsVcu_CAN2_VIU_VIU_0x702_CAN1DCHId603CanStsVcu_CAN2_VIU_VIU_0x702(CAN1DCHId603CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_Cntr141_CAN4_VIU_MDC_0x141_Cntr141_CAN4_VIU_MDC_0x141(Cntr141_swc);
	Rte_IWrite_RE_ComTx_PP_PressureTargetWBS2_CAN2_VIU_WBS_0x212_PressureTargetWBS2_CAN2_VIU_WBS_0x212(PressureTargetWBS2);
	Rte_IWrite_RE_ComTx_PP_FuQntyFb1_CAN4_VIU_TBOX_0x404_FuQntyFb1_CAN4_VIU_TBOX_0x404(FuQntyFb1);
	Rte_IWrite_RE_ComTx_PP_PwrLocnFb_CAN4_VIU_TBOX_0x407_PwrLocnFb_CAN4_VIU_TBOX_0x407(PwrLocnFb);
	Rte_IWrite_RE_ComTx_PP_VcuResiFuQntyStorg_CAN2_VIU_VIU_0x700_VcuResiFuQntyStorg_CAN2_VIU_VIU_0x700(VcuResiFuQntyStorg);
	Rte_IWrite_RE_ComTx_PP_Test1AccrPedV1_CAN1_VIU_MCU_0x520_Test1AccrPedV1_CAN1_VIU_MCU_0x520(Test1AccrPedV1);
	Rte_IWrite_RE_ComTx_PP_VCU2ReqSpd_CAN2_VIU_MCU_0x121_VCU2ReqSpd_CAN2_VIU_MCU_0x121(VCU2ReqSpd);
	Rte_IWrite_RE_ComTx_PP_DCHOutCurLimSet_CAN1_VIU_DCH_0x322_DCHOutCurLimSet_CAN1_VIU_DCH_0x322(DCHOutCurLimSet);
	Rte_IWrite_RE_ComTx_PP_DCHOutVolSet_CAN1_VIU_DCH_0x322_DCHOutVolSet_CAN1_VIU_DCH_0x322(DCHOutVolSet);
	Rte_IWrite_RE_ComTx_PP_VcuIsgRlyEna_CAN2_VIU_VIU_0x700_VcuIsgRlyEna_CAN2_VIU_VIU_0x700(VcuIsgRlyEna);
	Rte_IWrite_RE_ComTx_PP_CAN1BMSNegRlyClsd_CAN1_VIU_MCU_0x521_CAN1BMSNegRlyClsd_CAN1_VIU_MCU_0x521(CAN1BMSNegRlyClsd);
	Rte_IWrite_RE_ComTx_PP_Pressure1TargetWBS1_CAN1_VIU_WBS_0x212_Pressure1TargetWBS1_CAN1_VIU_WBS_0x212(Pressure1TargetWBS1);
	Rte_IWrite_RE_ComTx_PP_TboxId501CanStsVcu_CAN2_VIU_VIU_0x702_TboxId501CanStsVcu_CAN2_VIU_VIU_0x702(TboxId501CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_Apu1StrtReq_CAN1_VIU_APU_0x217_Apu1StrtReq_CAN1_VIU_APU_0x217(Apu1StrtReq);
	Rte_IWrite_RE_ComTx_PP_VcuPwrSysStsNr_CAN2_VIU_VIU_0x702_VcuPwrSysStsNr_CAN2_VIU_VIU_0x702(VcuPwrSysStsNr);
	Rte_IWrite_RE_ComTx_PP_LeOrRiPosRcndVcu_CAN2_VIU_VIU_0x702_LeOrRiPosRcndVcu_CAN2_VIU_VIU_0x702(LeOrRiPosRcndVcu);
	Rte_IWrite_RE_ComTx_PP_RfPFb_CAN4_VIU_TBOX_0x403_RfPFb_CAN4_VIU_TBOX_0x403(RfPFb);
	Rte_IWrite_RE_ComTx_PP_VCU2StrtAllwd_CAN2_VIU_MCU_0x121_VCU2StrtAllwd_CAN2_VIU_MCU_0x121(VCU2StrtAllwd);
	Rte_IWrite_RE_ComTx_PP_Test2AccrPedV1_CAN2_VIU_MCU_0x520_Test2AccrPedV1_CAN2_VIU_MCU_0x520(Test2AccrPedV1);
	Rte_IWrite_RE_ComTx_PP_VcuApu1PtMod_CAN2_VIU_VIU_0x702_VcuApu1PtMod_CAN2_VIU_VIU_0x702(VcuApu1PtMod);
	Rte_IWrite_RE_ComTx_PP_Pressure1TargetWBS2_CAN1_VIU_WBS_0x212_Pressure1TargetWBS2_CAN1_VIU_WBS_0x212(Pressure1TargetWBS2);
	Rte_IWrite_RE_ComTx_PP_CAN1ApuId310CanStsVcu_CAN2_VIU_VIU_0x702_CAN1ApuId310CanStsVcu_CAN2_VIU_VIU_0x702(CAN1ApuId310CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_Apu2DisChrgReq_CAN2_VIU_APU_0x217_Apu2DisChrgReq_CAN2_VIU_APU_0x217(Apu2DisChrgReq);
	Rte_IWrite_RE_ComTx_PP_DCHEnableCmd_CAN1_VIU_DCH_0x322_DCHEnableCmd_CAN1_VIU_DCH_0x322(DCHEnableCmd);
	Rte_IWrite_RE_ComTx_PP_VCU1StrtAllwd_CAN1_VIU_MCU_0x121_VCU1StrtAllwd_CAN1_VIU_MCU_0x121(VCU1StrtAllwd);
	Rte_IWrite_RE_ComTx_PP_MotFlIgbtTFb_CAN4_VIU_TBOX_0x405_MotFlIgbtTFb_CAN4_VIU_TBOX_0x405(MotFlIgbtTFb);
	Rte_IWrite_RE_ComTx_PP_Pressure2TargetWBS1_CAN2_VIU_WBS_0x212_Pressure2TargetWBS1_CAN2_VIU_WBS_0x212(Pressure2TargetWBS1);
	Rte_IWrite_RE_ComTx_PP_CAN2DCHId603CanStsVcu_CAN2_VIU_VIU_0x702_CAN2DCHId603CanStsVcu_CAN2_VIU_VIU_0x702(CAN2DCHId603CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_VCUVehicleSpeed1_CAN1_VIU_WBS_0x212_VCUVehicleSpeed1_CAN1_VIU_WBS_0x212(VCUVehicleSpeed1);
	Rte_IWrite_RE_ComTx_PP_RunningParking2Status_CAN2_VIU_WBS_0x212_RunningParking2Status_CAN2_VIU_WBS_0x212(RunningParking2Status);
	Rte_IWrite_RE_ComTx_PP_VCU1MCUSpdDischrg_CAN1_VIU_MCU_0x121_VCU1MCUSpdDischrg_CAN1_VIU_MCU_0x121(VCU1MCUSpdDischrg);
	Rte_IWrite_RE_ComTx_PP_CAN1BcuId181CanStsVcu_CAN2_VIU_VIU_0x702_CAN1BcuId181CanStsVcu_CAN2_VIU_VIU_0x702(CAN1BcuId181CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_EquipModFb_CAN4_VIU_TBOX_0x401_EquipModFb_CAN4_VIU_TBOX_0x401(EquipModFb);
	Rte_IWrite_RE_ComTx_PP_VcuCANStStopReq_CAN2_VIU_VIU_0x700_VcuCANStStopReq_CAN2_VIU_VIU_0x700(VcuCANStStopReq);
	Rte_IWrite_RE_ComTx_PP_Test2AccrPedV2_CAN2_VIU_MCU_0x520_Test2AccrPedV2_CAN2_VIU_MCU_0x520(Test2AccrPedV2);
	Rte_IWrite_RE_ComTx_PP_VcuApu2PtMod_CAN2_VIU_VIU_0x702_VcuApu2PtMod_CAN2_VIU_VIU_0x702(VcuApu2PtMod);
	Rte_IWrite_RE_ComTx_PP_CAN2Cntr212_CAN2_VIU_WBS_0x212_CAN2Cntr212_CAN2_VIU_WBS_0x212(CAN2Cntr212_swc);
	Rte_IWrite_RE_ComTx_PP_VcuFrntLampRlyEna_CAN2_VIU_VIU_0x700_VcuFrntLampRlyEna_CAN2_VIU_VIU_0x700(VcuFrntLampRlyEna);
	Rte_IWrite_RE_ComTx_PP_NM_Tx_Sig_NM_Tx_0x400_NM_Tx_Sig_NM_Tx_0x400(NM_Tx_Sig_NM_Tx_0x400);
	Rte_IWrite_RE_ComTx_PP_IsgMcuTFb2_CAN4_VIU_TBOX_0x408_IsgMcuTFb2_CAN4_VIU_TBOX_0x408(IsgMcuTFb2);
	Rte_IWrite_RE_ComTx_PP_VcuFanSpdPwmCtrl_CAN2_VIU_VIU_0x700_VcuFanSpdPwmCtrl_CAN2_VIU_VIU_0x700(VcuFanSpdPwmCtrl);
	Rte_IWrite_RE_ComTx_PP_EngSpdFb2_CAN4_VIU_TBOX_0x408_EngSpdFb2_CAN4_VIU_TBOX_0x408(EngSpdFb2);
	Rte_IWrite_RE_ComTx_PP_DCLOutVolSet_CAN1_VIU_DCL_0x321_DCLOutVolSet_CAN1_VIU_DCL_0x321(DCLOutVolSet);
	Rte_IWrite_RE_ComTx_PP_Prak2PressureLevel_CAN2_VIU_WBS_0x212_Prak2PressureLevel_CAN2_VIU_WBS_0x212(Prak2PressureLevel);
	Rte_IWrite_RE_ComTx_PP_ComHvOnFb_CAN4_VIU_COM_0x431_ComHvOnFb_CAN4_VIU_COM_0x431(ComHvOnFb);
	Rte_IWrite_RE_ComTx_PP_MdcVehRdyFb_CAN4_VIU_MDC_0x141_MdcVehRdyFb_CAN4_VIU_MDC_0x141(MdcVehRdyFb);
	Rte_IWrite_RE_ComTx_PP_VCUApuPwrReqS_CAN1_VIU_VIU1_0x101_VCUApuPwrReqS_CAN1_VIU_VIU1_0x101(VCUApuPwrReqS);
	Rte_IWrite_RE_ComTx_PP_ComIsgMotTFb1_CAN4_VIU_COM_0x434_ComIsgMotTFb1_CAN4_VIU_COM_0x434(ComIsgMotTFb1);
	Rte_IWrite_RE_ComTx_PP_ComRiBattStsFb_CAN4_VIU_COM_0x431_ComRiBattStsFb_CAN4_VIU_COM_0x431(ComRiBattStsFb);
	Rte_IWrite_RE_ComTx_PP_FuQntyFb2_CAN4_VIU_TBOX_0x408_FuQntyFb2_CAN4_VIU_TBOX_0x408(FuQntyFb2);
	Rte_IWrite_RE_ComTx_PP_ComMotFrIgbtTFb_CAN4_VIU_COM_0x435_ComMotFrIgbtTFb_CAN4_VIU_COM_0x435(ComMotFrIgbtTFb);
	Rte_IWrite_RE_ComTx_PP_PtWhlTypS_CAN1_VIU_VIU1_0x101_PtWhlTypS_CAN1_VIU_VIU1_0x101(PtWhlTypS);
	Rte_IWrite_RE_ComTx_PP_SwVersVRN_CAN2_VIU_VIU_0x710_SwVersVRN_CAN2_VIU_VIU_0x710(SwVersVRN);
	Rte_IWrite_RE_ComTx_PP_LoBattUVcu_CAN2_VIU_VIU_0x701_LoBattUVcu_CAN2_VIU_VIU_0x701(LoBattUVcu);
	Rte_IWrite_RE_ComTx_PP_VcuFanRlyEna_CAN2_VIU_VIU_0x700_VcuFanRlyEna_CAN2_VIU_VIU_0x700(VcuFanRlyEna);
	Rte_IWrite_RE_ComTx_PP_ActvSteerR_CAN4_VIU_MDC_0x141_ActvSteerR_CAN4_VIU_MDC_0x141(ActvSteerR);
	Rte_IWrite_RE_ComTx_PP_RiBattStsFb_CAN4_VIU_TBOX_0x407_RiBattStsFb_CAN4_VIU_TBOX_0x407(RiBattStsFb);
	Rte_IWrite_RE_ComTx_PP_ComEngCooltTFb1_CAN4_VIU_COM_0x434_ComEngCooltTFb1_CAN4_VIU_COM_0x434(ComEngCooltTFb1);
	Rte_IWrite_RE_ComTx_PP_CAN2McuId153CanStsVcu_CAN2_VIU_VIU_0x702_CAN2McuId153CanStsVcu_CAN2_VIU_VIU_0x702(CAN2McuId153CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_BarrModFb_CAN4_VIU_TBOX_0x401_BarrModFb_CAN4_VIU_TBOX_0x401(BarrModFb);
	Rte_IWrite_RE_ComTx_PP_MdcId148CanStsVcu_CAN2_VIU_VIU_0x702_MdcId148CanStsVcu_CAN2_VIU_VIU_0x702(MdcId148CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_SwVersVFN_CAN2_VIU_VIU_0x710_SwVersVFN_CAN2_VIU_VIU_0x710(SwVersVFN);
	Rte_IWrite_RE_ComTx_PP_ComLfPFb_CAN4_VIU_COM_0x433_ComLfPFb_CAN4_VIU_COM_0x433(ComLfPFb);
	Rte_IWrite_RE_ComTx_PP_ComAgHeadingFb_CAN4_VIU_COM_0x436_ComAgHeadingFb_CAN4_VIU_COM_0x436(ComAgHeadingFb);
	Rte_IWrite_RE_ComTx_PP_VcuDataStoreReq_CAN2_VIU_VIU_0x700_VcuDataStoreReq_CAN2_VIU_VIU_0x700(VcuDataStoreReq);
	Rte_IWrite_RE_ComTx_PP_ComLeBattStsFb_CAN4_VIU_COM_0x431_ComLeBattStsFb_CAN4_VIU_COM_0x431(ComLeBattStsFb);
	Rte_IWrite_RE_ComTx_PP_SteerModStsFb_CAN4_VIU_MDC_0x141_SteerModStsFb_CAN4_VIU_MDC_0x141(SteerModStsFb);
	Rte_IWrite_RE_ComTx_PP_ComVcuErrNrFb_CAN4_VIU_COM_0x432_ComVcuErrNrFb_CAN4_VIU_COM_0x432(ComVcuErrNrFb);
	Rte_IWrite_RE_ComTx_PP_ComFuQntyFb1_CAN4_VIU_COM_0x434_ComFuQntyFb1_CAN4_VIU_COM_0x434(ComFuQntyFb1);
	Rte_IWrite_RE_ComTx_PP_CAN1WbsId201CanStsVcu_CAN2_VIU_VIU_0x702_CAN1WbsId201CanStsVcu_CAN2_VIU_VIU_0x702(CAN1WbsId201CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_VcuErrTotFb_CAN4_VIU_MDC_0x521_VcuErrTotFb_CAN4_VIU_MDC_0x521(VcuErrTotFb);
	Rte_IWrite_RE_ComTx_PP_ACMSD_CAN1_VIU_TMS_0X513_ACMSD_CAN1_VIU_TMS_0X513(ACMSD);
	Rte_IWrite_RE_ComTx_PP_ComFuQntyFb2_CAN4_VIU_COM_0x437_ComFuQntyFb2_CAN4_VIU_COM_0x437(ComFuQntyFb2);
	Rte_IWrite_RE_ComTx_PP_MotFrIgbtTFb_CAN4_VIU_TBOX_0x405_MotFrIgbtTFb_CAN4_VIU_TBOX_0x405(MotFrIgbtTFb);
	Rte_IWrite_RE_ComTx_PP_ComBatt1VltgFb_CAN4_VIU_COM_0x431_ComBatt1VltgFb_CAN4_VIU_COM_0x431(ComBatt1VltgFb);
	Rte_IWrite_RE_ComTx_PP_ComIsgMcuTFb2_CAN4_VIU_COM_0x437_ComIsgMcuTFb2_CAN4_VIU_COM_0x437(ComIsgMcuTFb2);
	Rte_IWrite_RE_ComTx_PP_Test1FlgBrk_CAN1_VIU_MCU_0x521_Test1FlgBrk_CAN1_VIU_MCU_0x521(Test1FlgBrk);
	Rte_IWrite_RE_ComTx_PP_EmgyStopVcu_CAN2_VIU_VIU_0x702_EmgyStopVcu_CAN2_VIU_VIU_0x702(EmgyStopVcu);
	Rte_IWrite_RE_ComTx_PP_SwVersCVN_CAN2_VIU_VIU_0x710_SwVersCVN_CAN2_VIU_VIU_0x710(SwVersCVN);
	Rte_IWrite_RE_ComTx_PP_ComPwrExchStsFb_CAN4_VIU_COM_0x431_ComPwrExchStsFb_CAN4_VIU_COM_0x431(ComPwrExchStsFb);
	Rte_IWrite_RE_ComTx_PP_EngSpdFb1_CAN4_VIU_TBOX_0x404_EngSpdFb1_CAN4_VIU_TBOX_0x404(EngSpdFb1);
	Rte_IWrite_RE_ComTx_PP_CAN1BMSMaiRlyClsd_CAN1_VIU_MCU_0x521_CAN1BMSMaiRlyClsd_CAN1_VIU_MCU_0x521(CAN1BMSMaiRlyClsd);
	Rte_IWrite_RE_ComTx_PP_ComPullWireModFb_CAN4_VIU_COM_0x431_ComPullWireModFb_CAN4_VIU_COM_0x431(ComPullWireModFb);
	Rte_IWrite_RE_ComTx_PP_BcuCanStS_CAN1_VIU_VIU1_0x101_BcuCanStS_CAN1_VIU_VIU1_0x101(BcuCanStS);
	Rte_IWrite_RE_ComTx_PP_VCU1MaiRlyClsInfo_CAN1_VIU_MCU_0x121_VCU1MaiRlyClsInfo_CAN1_VIU_MCU_0x121(VCU1MaiRlyClsInfo);
	Rte_IWrite_RE_ComTx_PP_VcuWbs1PtWhlLocn_CAN1_VIU_WBS_0x212_VcuWbs1PtWhlLocn_CAN1_VIU_WBS_0x212(VcuWbs1PtWhlLocn);
	Rte_IWrite_RE_ComTx_PP_MaiCtrlrLocnFb_CAN4_VIU_TBOX_0x407_MaiCtrlrLocnFb_CAN4_VIU_TBOX_0x407(MaiCtrlrLocnFb);
	Rte_IWrite_RE_ComTx_PP_VcuErrNrFb_CAN4_VIU_TBOX_0x402_VcuErrNrFb_CAN4_VIU_TBOX_0x402(VcuErrNrFb);
	Rte_IWrite_RE_ComTx_PP_LvOnFb_CAN4_VIU_TBOX_0x401_LvOnFb_CAN4_VIU_TBOX_0x401(LvOnFb);
	Rte_IWrite_RE_ComTx_PP_VCU1MinPermTq_CAN1_VIU_MCU_0x121_VCU1MinPermTq_CAN1_VIU_MCU_0x121(VCU1MinPermTq);
	Rte_IWrite_RE_ComTx_PP_ESTOP2_CAN2_VIU_WBS_0x212_ESTOP2_CAN2_VIU_WBS_0x212(ESTOP2);
	Rte_IWrite_RE_ComTx_PP_AutVehVFb_CAN4_VIU_MDC_0x141_AutVehVFb_CAN4_VIU_MDC_0x141(AutVehVFb);
	Rte_IWrite_RE_ComTx_PP_VCU2VehicleSpeed_CAN2_VIU_WBS_0x212_VCU2VehicleSpeed_CAN2_VIU_WBS_0x212(VCU2VehicleSpeed);
	Rte_IWrite_RE_ComTx_PP_ErrLvUpInhbS_CAN1_VIU_VIU1_0x101_ErrLvUpInhbS_CAN1_VIU_VIU1_0x101(ErrLvUpInhbS);
	Rte_IWrite_RE_ComTx_PP_Apu1PwrReq_CAN1_VIU_APU_0x217_Apu1PwrReq_CAN1_VIU_APU_0x217(Apu1PwrReq);
	Rte_IWrite_RE_ComTx_PP_BatttSnsrTOutVcu_CAN2_VIU_VIU_0x703_BatttSnsrTOutVcu_CAN2_VIU_VIU_0x703(BatttSnsrTOutVcu);
	Rte_IWrite_RE_ComTx_PP_CAN2DCLId601CanStsVcu_CAN2_VIU_VIU_0x702_CAN2DCLId601CanStsVcu_CAN2_VIU_VIU_0x702(CAN2DCLId601CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_Batt1MaxTFb_CAN4_VIU_TBOX_0x401_Batt1MaxTFb_CAN4_VIU_TBOX_0x401(Batt1MaxTFb);
	Rte_IWrite_RE_ComTx_PP_ImuId500CanStsVcu_CAN2_VIU_VIU_0x702_ImuId500CanStsVcu_CAN2_VIU_VIU_0x702(ImuId500CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_ComId421CanStsVcu_CAN2_VIU_VIU_0x702_ComId421CanStsVcu_CAN2_VIU_VIU_0x702(ComId421CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_ComMotFlIgbtTFb_CAN4_VIU_COM_0x435_ComMotFlIgbtTFb_CAN4_VIU_COM_0x435(ComMotFlIgbtTFb);
	Rte_IWrite_RE_ComTx_PP_ComEngSpdFb1_CAN4_VIU_COM_0x434_ComEngSpdFb1_CAN4_VIU_COM_0x434(ComEngSpdFb1);
	Rte_IWrite_RE_ComTx_PP_Cntr321_CAN1_VIU_DCL_0x321_Cntr321_CAN1_VIU_DCL_0x321(Cntr321_swc);
	Rte_IWrite_RE_ComTx_PP_CAN2Acp354CanStsVcu_CAN2_VIU_VIU_0x702_CAN2Acp354CanStsVcu_CAN2_VIU_VIU_0x702(CAN2Acp354CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_VCU2MaxPermTq_CAN2_VIU_MCU_0x121_VCU2MaxPermTq_CAN2_VIU_MCU_0x121(VCU2MaxPermTq);
	Rte_IWrite_RE_ComTx_PP_VCU1PtWhlLocn_CAN1_VIU_MCU_0x121_VCU1PtWhlLocn_CAN1_VIU_MCU_0x121(VCU1PtWhlLocn);
	Rte_IWrite_RE_ComTx_PP_Batt2SocFb_CAN4_VIU_TBOX_0x402_Batt2SocFb_CAN4_VIU_TBOX_0x402(Batt2SocFb);
	Rte_IWrite_RE_ComTx_PP_VcuBcupauseChargeFaultS_CAN1_VIU_VIU1_0x101_VcuBcupauseChargeFaultS_CAN1_VIU_VIU1_0x101(VcuBcupauseChargeFaultS);
	Rte_IWrite_RE_ComTx_PP_VehVFb_CAN4_VIU_TBOX_0x401_VehVFb_CAN4_VIU_TBOX_0x401(VehVFb);
	Rte_IWrite_RE_ComTx_PP_EmgyStopOnFb_CAN4_VIU_TBOX_0x401_EmgyStopOnFb_CAN4_VIU_TBOX_0x401(EmgyStopOnFb);
	Rte_IWrite_RE_ComTx_PP_vcuwbs02BR2_CAN2_VIU_WBS_0x212_vcuwbs02BR2_CAN2_VIU_WBS_0x212(vcuwbs02BR2);
	Rte_IWrite_RE_ComTx_PP_RunningParking1Status_CAN1_VIU_WBS_0x212_RunningParking1Status_CAN1_VIU_WBS_0x212(RunningParking1Status);
	Rte_IWrite_RE_ComTx_PP_AgHeadingFb_CAN4_VIU_TBOX_0x406_AgHeadingFb_CAN4_VIU_TBOX_0x406(AgHeadingFb);
	Rte_IWrite_RE_ComTx_PP_CAN2Cntr217_CAN2_VIU_APU_0x217_CAN2Cntr217_CAN2_VIU_APU_0x217(CAN2Cntr217_swc);
	Rte_IWrite_RE_ComTx_PP_MechanismKeyFlgVcu_CAN2_VIU_VIU_0x702_MechanismKeyFlgVcu_CAN2_VIU_VIU_0x702(MechanismKeyFlgVcu);
	Rte_IWrite_RE_ComTx_PP_VcuEngStsFb_CAN4_VIU_MDC_0x141_VcuEngStsFb_CAN4_VIU_MDC_0x141(VcuEngStsFb);
	Rte_IWrite_RE_ComTx_PP_ONIGNReady_CAN2_VIU_WBS_0x212_ONIGNReady_CAN2_VIU_WBS_0x212(ONIGNReady);
	Rte_IWrite_RE_ComTx_PP_BattSnsrTVcu_CAN2_VIU_VIU_0x701_BattSnsrTVcu_CAN2_VIU_VIU_0x701(BattSnsrTVcu);
	Rte_IWrite_RE_ComTx_PP_ComBatt2VltgFb_CAN4_VIU_COM_0x432_ComBatt2VltgFb_CAN4_VIU_COM_0x432(ComBatt2VltgFb);
	Rte_IWrite_RE_ComTx_PP_EngCooltTFb1_CAN4_VIU_TBOX_0x404_EngCooltTFb1_CAN4_VIU_TBOX_0x404(EngCooltTFb1);
	Rte_IWrite_RE_ComTx_PP_VcuBcuSocS_CAN1_VIU_VIU1_0x101_VcuBcuSocS_CAN1_VIU_VIU1_0x101(VcuBcuSocS);
	Rte_IWrite_RE_ComTx_PP_MotFrTFb_CAN4_VIU_TBOX_0x405_MotFrTFb_CAN4_VIU_TBOX_0x405(MotFrTFb);
	Rte_IWrite_RE_ComTx_PP_vcuwbs02BR1_CAN1_VIU_WBS_0x212_vcuwbs02BR1_CAN1_VIU_WBS_0x212(vcuwbs02BR1);
	Rte_IWrite_RE_ComTx_PP_PtfmTypFb_CAN4_VIU_TBOX_0x402_PtfmTypFb_CAN4_VIU_TBOX_0x402(PtfmTypFb);
	Rte_IWrite_RE_ComTx_PP_HvilErrVcu_CAN2_VIU_VIU_0x702_HvilErrVcu_CAN2_VIU_VIU_0x702(HvilErrVcu);
	Rte_IWrite_RE_ComTx_PP_VCU1PrecClsInfo_CAN1_VIU_MCU_0x121_VCU1PrecClsInfo_CAN1_VIU_MCU_0x121(VCU1PrecClsInfo);
	Rte_IWrite_RE_ComTx_PP_VCU2InAccpedalposition1_CAN2_VIU_MCU_0x520_VCU2InAccpedalposition1_CAN2_VIU_MCU_0x520(VCU2InAccpedalposition1);
	Rte_IWrite_RE_ComTx_PP_VcuBcuPwrUpAllwS_CAN1_VIU_VIU1_0x101_VcuBcuPwrUpAllwS_CAN1_VIU_VIU1_0x101(VcuBcuPwrUpAllwS);
	Rte_IWrite_RE_ComTx_PP_VCU1MaxPermTq_CAN1_VIU_MCU_0x121_VCU1MaxPermTq_CAN1_VIU_MCU_0x121(VCU1MaxPermTq);
	Rte_IWrite_RE_ComTx_PP_CAN1Cntr217_CAN1_VIU_APU_0x217_CAN1Cntr217_CAN1_VIU_APU_0x217(CAN1Cntr217_swc);
	Rte_IWrite_RE_ComTx_PP_VCU2SysFltRank_CAN2_VIU_MCU_0x121_VCU2SysFltRank_CAN2_VIU_MCU_0x121(VCU2SysFltRank);
	Rte_IWrite_RE_ComTx_PP_CAN2BMSNegRlyClsd_CAN2_VIU_MCU_0x521_CAN2BMSNegRlyClsd_CAN2_VIU_MCU_0x521(CAN2BMSNegRlyClsd);
	Rte_IWrite_RE_ComTx_PP_Batt2VltgFb_CAN4_VIU_TBOX_0x402_Batt2VltgFb_CAN4_VIU_TBOX_0x402(Batt2VltgFb);
	Rte_IWrite_RE_ComTx_PP_VehRdyFb_CAN4_VIU_TBOX_0x401_VehRdyFb_CAN4_VIU_TBOX_0x401(VehRdyFb);
	Rte_IWrite_RE_ComTx_PP_RiLampCtrl_CAN4_VIU_TBOX_0x407_RiLampCtrl_CAN4_VIU_TBOX_0x407(RiLampCtrl);
	Rte_IWrite_RE_ComTx_PP_VcuHornRlyEna_CAN2_VIU_VIU_0x700_VcuHornRlyEna_CAN2_VIU_VIU_0x700(VcuHornRlyEna);
	Rte_IWrite_RE_ComTx_PP_CAN2WbsId201CanStsVcu_CAN2_VIU_VIU_0x702_CAN2WbsId201CanStsVcu_CAN2_VIU_VIU_0x702(CAN2WbsId201CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_ComMaiCtrlrLocnFb_CAN4_VIU_COM_0x431_ComMaiCtrlrLocnFb_CAN4_VIU_COM_0x431(ComMaiCtrlrLocnFb);
	Rte_IWrite_RE_ComTx_PP_PtWhlLocnS_CAN1_VIU_VIU1_0x101_PtWhlLocnS_CAN1_VIU_VIU1_0x101(PtWhlLocnS);
	Rte_IWrite_RE_ComTx_PP_Test2FlgGripBrk_CAN2_VIU_MCU_0x521_Test2FlgGripBrk_CAN2_VIU_MCU_0x521(Test2FlgGripBrk);
	Rte_IWrite_RE_ComTx_PP_VcuResElyEna1_CAN2_VIU_VIU_0x700_VcuResElyEna1_CAN2_VIU_VIU_0x700(VcuResElyEna1);
	Rte_IWrite_RE_ComTx_PP_Test2FlgBrk_CAN2_VIU_MCU_0x521_Test2FlgBrk_CAN2_VIU_MCU_0x521(Test2FlgBrk);
	Rte_IWrite_RE_ComTx_PP_Batt2MaxTFb_CAN4_VIU_TBOX_0x402_Batt2MaxTFb_CAN4_VIU_TBOX_0x402(Batt2MaxTFb);
	Rte_IWrite_RE_ComTx_PP_PullWireModFb_CAN4_VIU_TBOX_0x401_PullWireModFb_CAN4_VIU_TBOX_0x401(PullWireModFb);
	Rte_IWrite_RE_ComTx_PP_ComMotFlTFb_CAN4_VIU_COM_0x435_ComMotFlTFb_CAN4_VIU_COM_0x435(ComMotFlTFb);
	Rte_IWrite_RE_ComTx_PP_VcuHvActvS_CAN1_VIU_VIU1_0x101_VcuHvActvS_CAN1_VIU_VIU1_0x101(VcuHvActvS);
	Rte_IWrite_RE_ComTx_PP_VCU1MCUPwrDwn_CAN1_VIU_MCU_0x121_VCU1MCUPwrDwn_CAN1_VIU_MCU_0x121(VCU1MCUPwrDwn);
	Rte_IWrite_RE_ComTx_PP_VcuRvsLiLampSts_CAN2_VIU_VIU_0x700_VcuRvsLiLampSts_CAN2_VIU_VIU_0x700(VcuRvsLiLampSts);
	Rte_IWrite_RE_ComTx_PP_PwrExchStsFb_CAN4_VIU_TBOX_0x401_PwrExchStsFb_CAN4_VIU_TBOX_0x401(PwrExchStsFb);
	Rte_IWrite_RE_ComTx_PP_ComIsgMcuTFb1_CAN4_VIU_COM_0x434_ComIsgMcuTFb1_CAN4_VIU_COM_0x434(ComIsgMcuTFb1);
	Rte_IWrite_RE_ComTx_PP_ComIsgPwrOutFb2_CAN4_VIU_COM_0x437_ComIsgPwrOutFb2_CAN4_VIU_COM_0x437(ComIsgPwrOutFb2);
	Rte_IWrite_RE_ComTx_PP_ActvGearPosnFb_CAN4_VIU_MDC_0x141_ActvGearPosnFb_CAN4_VIU_MDC_0x141(ActvGearPosnFb);
	Rte_IWrite_RE_ComTx_PP_Batt1VltgFb_CAN4_VIU_TBOX_0x401_Batt1VltgFb_CAN4_VIU_TBOX_0x401(Batt1VltgFb);
	Rte_IWrite_RE_ComTx_PP_ComMotFrTFb_CAN4_VIU_COM_0x435_ComMotFrTFb_CAN4_VIU_COM_0x435(ComMotFrTFb);
	Rte_IWrite_RE_ComTx_PP_VcuApuCAN2StStopReq_CAN2_VIU_VIU_0x700_VcuApuCAN2StStopReq_CAN2_VIU_VIU_0x700(VcuApuCAN2StStopReq);
	Rte_IWrite_RE_ComTx_PP_VcuBrkPedlLiLampSts_CAN2_VIU_VIU_0x700_VcuBrkPedlLiLampSts_CAN2_VIU_VIU_0x700(VcuBrkPedlLiLampSts);
	Rte_IWrite_RE_ComTx_PP_IsgPwrOutFb2_CAN4_VIU_TBOX_0x408_IsgPwrOutFb2_CAN4_VIU_TBOX_0x408(IsgPwrOutFb2);
	Rte_IWrite_RE_ComTx_PP_VcuWbsRlyEna_CAN2_VIU_VIU_0x700_VcuWbsRlyEna_CAN2_VIU_VIU_0x700(VcuWbsRlyEna);
	Rte_IWrite_RE_ComTx_PP_ComIsgMotTFb2_CAN4_VIU_COM_0x437_ComIsgMotTFb2_CAN4_VIU_COM_0x437(ComIsgMotTFb2);
	Rte_IWrite_RE_ComTx_PP_CAN1DCLId601CanStsVcu_CAN2_VIU_VIU_0x702_CAN1DCLId601CanStsVcu_CAN2_VIU_VIU_0x702(CAN1DCLId601CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_VcuPosnLampSts_CAN2_VIU_VIU_0x700_VcuPosnLampSts_CAN2_VIU_VIU_0x700(VcuPosnLampSts);
	Rte_IWrite_RE_ComTx_PP_VcuTotVygStorg_CAN2_VIU_VIU_0x700_VcuTotVygStorg_CAN2_VIU_VIU_0x700(VcuTotVygStorg);
	Rte_IWrite_RE_ComTx_PP_CAN2VIUId101CanStsVcu_CAN2_VIU_VIU_0x702_CAN2VIUId101CanStsVcu_CAN2_VIU_VIU_0x702(CAN2VIUId101CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_PtWhlCompanionBattAvlS_CAN1_VIU_VIU1_0x101_PtWhlCompanionBattAvlS_CAN1_VIU_VIU1_0x101(PtWhlCompanionBattAvlS);
	Rte_IWrite_RE_ComTx_PP_OperModFb_CAN4_VIU_TBOX_0x401_OperModFb_CAN4_VIU_TBOX_0x401(OperModFb);
	Rte_IWrite_RE_ComTx_PP_VcuLeRiPosRlyEna_CAN2_VIU_VIU_0x700_VcuLeRiPosRlyEna_CAN2_VIU_VIU_0x700(VcuLeRiPosRlyEna);
	Rte_IWrite_RE_ComTx_PP_MotSnsrTOutVcu_CAN2_VIU_VIU_0x703_MotSnsrTOutVcu_CAN2_VIU_VIU_0x703(MotSnsrTOutVcu);
	Rte_IWrite_RE_ComTx_PP_VcuTensnrRlyEna_CAN2_VIU_VIU_0x700_VcuTensnrRlyEna_CAN2_VIU_VIU_0x700(VcuTensnrRlyEna);
	Rte_IWrite_RE_ComTx_PP_TotVygFb_CAN4_VIU_TBOX_0x403_TotVygFb_CAN4_VIU_TBOX_0x403(TotVygFb);
	Rte_IWrite_RE_ComTx_PP_ComRfPFb_CAN4_VIU_COM_0x433_ComRfPFb_CAN4_VIU_COM_0x433(ComRfPFb);
	Rte_IWrite_RE_ComTx_PP_VCU2gearposition_CAN2_VIU_MCU_0x307_VCU2gearposition_CAN2_VIU_MCU_0x307(VCU2gearposition);
	Rte_IWrite_RE_ComTx_PP_MotFlTFb_CAN4_VIU_TBOX_0x405_MotFlTFb_CAN4_VIU_TBOX_0x405(MotFlTFb);
	Rte_IWrite_RE_ComTx_PP_ComVehRdyFb_CAN4_VIU_COM_0x431_ComVehRdyFb_CAN4_VIU_COM_0x431(ComVehRdyFb);
	Rte_IWrite_RE_ComTx_PP_ComParkModFb_CAN4_VIU_COM_0x431_ComParkModFb_CAN4_VIU_COM_0x431(ComParkModFb);
	Rte_IWrite_RE_ComTx_PP_ComBatt1MaxTFb_CAN4_VIU_COM_0x431_ComBatt1MaxTFb_CAN4_VIU_COM_0x431(ComBatt1MaxTFb);
	Rte_IWrite_RE_ComTx_PP_VCU1InAccpedalposition2_CAN1_VIU_MCU_0x520_VCU1InAccpedalposition2_CAN1_VIU_MCU_0x520(VCU1InAccpedalposition2);
	Rte_IWrite_RE_ComTx_PP_ComPtfmTypFb_CAN4_VIU_COM_0x432_ComPtfmTypFb_CAN4_VIU_COM_0x432(ComPtfmTypFb);
	Rte_IWrite_RE_ComTx_PP_CAN1ID131CycCntr_CAN1_VIU_MCU_0x121_CAN1ID131CycCntr_CAN1_VIU_MCU_0x121(CAN1ID131CycCntr_swc);
	Rte_IWrite_RE_ComTx_PP_VcuBcuCoolPumpRlyEna_CAN2_VIU_VIU_0x700_VcuBcuCoolPumpRlyEna_CAN2_VIU_VIU_0x700(VcuBcuCoolPumpRlyEna);
	Rte_IWrite_RE_ComTx_PP_ComIsgPwrOutFb1_CAN4_VIU_COM_0x434_ComIsgPwrOutFb1_CAN4_VIU_COM_0x434(ComIsgPwrOutFb1);
	Rte_IWrite_RE_ComTx_PP_ACCoolEnable_CAN1_VIU_TMS_0X513_ACCoolEnable_CAN1_VIU_TMS_0X513(ACCoolEnable);
	Rte_IWrite_RE_ComTx_PP_FuQntyVcu_CAN2_VIU_VIU_0x701_FuQntyVcu_CAN2_VIU_VIU_0x701(FuQntyVcu);
	Rte_IWrite_RE_ComTx_PP_Apu1DisChrgReq_CAN1_VIU_APU_0x217_Apu1DisChrgReq_CAN1_VIU_APU_0x217(Apu1DisChrgReq);
	Rte_IWrite_RE_ComTx_PP_CAN1Acp352CanStsVcu_CAN2_VIU_VIU_0x702_CAN1Acp352CanStsVcu_CAN2_VIU_VIU_0x702(CAN1Acp352CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_VCUFuQntyS_CAN1_VIU_VIU1_0x101_VCUFuQntyS_CAN1_VIU_VIU1_0x101(VCUFuQntyS);
	Rte_IWrite_RE_ComTx_PP_IsgPwrOutFb1_CAN4_VIU_TBOX_0x404_IsgPwrOutFb1_CAN4_VIU_TBOX_0x404(IsgPwrOutFb1);
	Rte_IWrite_RE_ComTx_PP_AgRollFb_CAN4_VIU_TBOX_0x406_AgRollFb_CAN4_VIU_TBOX_0x406(AgRollFb);
	Rte_IWrite_RE_ComTx_PP_MotSnsrTVcu_CAN2_VIU_VIU_0x701_MotSnsrTVcu_CAN2_VIU_VIU_0x701(MotSnsrTVcu);
	Rte_IWrite_RE_ComTx_PP_ComAgRollFb_CAN4_VIU_COM_0x436_ComAgRollFb_CAN4_VIU_COM_0x436(ComAgRollFb);
	Rte_IWrite_RE_ComTx_PP_VcuApuCAN1StStopReq_CAN2_VIU_VIU_0x700_VcuApuCAN1StStopReq_CAN2_VIU_VIU_0x700(VcuApuCAN1StStopReq);
	Rte_IWrite_RE_ComTx_PP_VcuDrvModFb_CAN4_VIU_MDC_0x141_VcuDrvModFb_CAN4_VIU_MDC_0x141(VcuDrvModFb);
	Rte_IWrite_RE_ComTx_PP_ComTotVygFb_CAN4_VIU_COM_0x433_ComTotVygFb_CAN4_VIU_COM_0x433(ComTotVygFb);
	Rte_IWrite_RE_ComTx_PP_VcuLvActvS_CAN1_VIU_VIU1_0x101_VcuLvActvS_CAN1_VIU_VIU1_0x101(VcuLvActvS);
	Rte_IWrite_RE_ComTx_PP_CAN2BMSMaiRlyClsd_CAN2_VIU_MCU_0x521_CAN2BMSMaiRlyClsd_CAN2_VIU_MCU_0x521(CAN2BMSMaiRlyClsd);
	Rte_IWrite_RE_ComTx_PP_DCLOutCurLimSet_CAN1_VIU_DCL_0x321_DCLOutCurLimSet_CAN1_VIU_DCL_0x321(DCLOutCurLimSet);
	Rte_IWrite_RE_ComTx_PP_VcuWbs2PtWhlLocn_CAN2_VIU_WBS_0x212_VcuWbs2PtWhlLocn_CAN2_VIU_WBS_0x212(VcuWbs2PtWhlLocn);
	Rte_IWrite_RE_ComTx_PP_VcuBcuFltRankS_CAN1_VIU_VIU1_0x101_VcuBcuFltRankS_CAN1_VIU_VIU1_0x101(VcuBcuFltRankS);
	Rte_IWrite_RE_ComTx_PP_ParkModFb_CAN4_VIU_TBOX_0x407_ParkModFb_CAN4_VIU_TBOX_0x407(ParkModFb);
	Rte_IWrite_RE_ComTx_PP_VcuFltRankFb_CAN4_VIU_MDC_0x141_VcuFltRankFb_CAN4_VIU_MDC_0x141(VcuFltRankFb);
	Rte_IWrite_RE_ComTx_PP_Apu2StrtReq_CAN2_VIU_APU_0x217_Apu2StrtReq_CAN2_VIU_APU_0x217(Apu2StrtReq);
	Rte_IWrite_RE_ComTx_PP_SwVersVSN_CAN2_VIU_VIU_0x710_SwVersVSN_CAN2_VIU_VIU_0x710(SwVersVSN);
	Rte_IWrite_RE_ComTx_PP_ComBatt2MaxTFb_CAN4_VIU_COM_0x432_ComBatt2MaxTFb_CAN4_VIU_COM_0x432(ComBatt2MaxTFb);
	Rte_IWrite_RE_ComTx_PP_ESTOP1_CAN1_VIU_WBS_0x212_ESTOP1_CAN1_VIU_WBS_0x212(ESTOP1);
	Rte_IWrite_RE_ComTx_PP_Test1AccrPedV2_CAN1_VIU_MCU_0x520_Test1AccrPedV2_CAN1_VIU_MCU_0x520(Test1AccrPedV2);
	Rte_IWrite_RE_ComTx_PP_CAN2BcuId181CanStsVcu_CAN2_VIU_VIU_0x702_CAN2BcuId181CanStsVcu_CAN2_VIU_VIU_0x702(CAN2BcuId181CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_PwrModFb_CAN4_VIU_TBOX_0x401_PwrModFb_CAN4_VIU_TBOX_0x401(PwrModFb);
	Rte_IWrite_RE_ComTx_PP_ComEngSpdFb2_CAN4_VIU_COM_0x437_ComEngSpdFb2_CAN4_VIU_COM_0x437(ComEngSpdFb2);
	Rte_IWrite_RE_ComTx_PP_EmgBrkStsFb_CAN4_VIU_MDC_0x141_EmgBrkStsFb_CAN4_VIU_MDC_0x141(EmgBrkStsFb);
	Rte_IWrite_RE_ComTx_PP_LeLampCtrl_CAN4_VIU_TBOX_0x407_LeLampCtrl_CAN4_VIU_TBOX_0x407(LeLampCtrl);
	Rte_IWrite_RE_ComTx_PP_ComPwrModFb_CAN4_VIU_COM_0x431_ComPwrModFb_CAN4_VIU_COM_0x431(ComPwrModFb);
	Rte_IWrite_RE_ComTx_PP_ErrChrgInhbReqS_CAN1_VIU_VIU1_0x101_ErrChrgInhbReqS_CAN1_VIU_VIU1_0x101(ErrChrgInhbReqS);
	Rte_IWrite_RE_ComTx_PP_VCU2InAccpedalposition2_CAN2_VIU_MCU_0x520_VCU2InAccpedalposition2_CAN2_VIU_MCU_0x520(VCU2InAccpedalposition2);
	Rte_IWrite_RE_ComTx_PP_GearFb_CAN4_VIU_TBOX_0x402_GearFb_CAN4_VIU_TBOX_0x402(GearFb);
	Rte_IWrite_RE_ComTx_PP_CAN1McuId153CanStsVcu_CAN2_VIU_VIU_0x702_CAN1McuId153CanStsVcu_CAN2_VIU_VIU_0x702(CAN1McuId153CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_VcuPwrSysStsNrS_CAN1_VIU_VIU1_0x101_VcuPwrSysStsNrS_CAN1_VIU_VIU1_0x101(VcuPwrSysStsNrS);
	Rte_IWrite_RE_ComTx_PP_ComOperModFb_CAN4_VIU_COM_0x431_ComOperModFb_CAN4_VIU_COM_0x431(ComOperModFb);
	Rte_IWrite_RE_ComTx_PP_VcuMcuCoolPumpRlyEna_CAN2_VIU_VIU_0x700_VcuMcuCoolPumpRlyEna_CAN2_VIU_VIU_0x700(VcuMcuCoolPumpRlyEna);
	Rte_IWrite_RE_ComTx_PP_VCUBcuOperModReq_CAN1_VIU_BCU_0x131_VCUBcuOperModReq_CAN1_VIU_BCU_0x131(VCUBcuOperModReq);
	Rte_IWrite_RE_ComTx_PP_VCU2MinPermTq_CAN2_VIU_MCU_0x121_VCU2MinPermTq_CAN2_VIU_MCU_0x121(VCU2MinPermTq);
	Rte_IWrite_RE_ComTx_PP_Cntr322_CAN1_VIU_DCH_0x322_Cntr322_CAN1_VIU_DCH_0x322(Cntr322_swc);
	Rte_IWrite_RE_ComTx_PP_BatTarCoolTemp_CAN1_VIU_TMS_0X513_BatTarCoolTemp_CAN1_VIU_TMS_0X513(BatTarCoolTemp);
	Rte_IWrite_RE_ComTx_PP_VcuBcuChrgStsS_CAN1_VIU_VIU1_0x101_VcuBcuChrgStsS_CAN1_VIU_VIU1_0x101(VcuBcuChrgStsS);
	Rte_IWrite_RE_ComTx_PP_Test1FlgGripBrk_CAN1_VIU_MCU_0x521_Test1FlgGripBrk_CAN1_VIU_MCU_0x521(Test1FlgGripBrk);
	Rte_IWrite_RE_ComTx_PP_VCU2MCUSpdDischrg_CAN2_VIU_MCU_0x121_VCU2MCUSpdDischrg_CAN2_VIU_MCU_0x121(VCU2MCUSpdDischrg);
	Rte_IWrite_RE_ComTx_PP_LfPFb_CAN4_VIU_TBOX_0x403_LfPFb_CAN4_VIU_TBOX_0x403(LfPFb);
	Rte_IWrite_RE_ComTx_PP_ComEquipModFb_CAN4_VIU_COM_0x431_ComEquipModFb_CAN4_VIU_COM_0x431(ComEquipModFb);
	Rte_IWrite_RE_ComTx_PP_ComAgPitchFb_CAN4_VIU_COM_0x436_ComAgPitchFb_CAN4_VIU_COM_0x436(ComAgPitchFb);
	Rte_IWrite_RE_ComTx_PP_EngCooltTFb2_CAN4_VIU_TBOX_0x408_EngCooltTFb2_CAN4_VIU_TBOX_0x408(EngCooltTFb2);
	Rte_IWrite_RE_ComTx_PP_VcuBcuChrgModS_CAN1_VIU_VIU1_0x101_VcuBcuChrgModS_CAN1_VIU_VIU1_0x101(VcuBcuChrgModS);
	Rte_IWrite_RE_ComTx_PP_VCU1InAccpedalposition1_CAN1_VIU_MCU_0x520_VCU1InAccpedalposition1_CAN1_VIU_MCU_0x520(VCU1InAccpedalposition1);
	Rte_IWrite_RE_ComTx_PP_Batt1SocFb_CAN4_VIU_TBOX_0x401_Batt1SocFb_CAN4_VIU_TBOX_0x401(Batt1SocFb);
	Rte_IWrite_RE_ComTx_PP_VcuDcdcRlyEna_CAN2_VIU_VIU_0x700_VcuDcdcRlyEna_CAN2_VIU_VIU_0x700(VcuDcdcRlyEna);
	Rte_IWrite_RE_ComTx_PP_ComBatt2SocFb_CAN4_VIU_COM_0x432_ComBatt2SocFb_CAN4_VIU_COM_0x432(ComBatt2SocFb);
	Rte_IWrite_RE_ComTx_PP_ErrLvPwrDwnReqS_CAN1_VIU_VIU1_0x101_ErrLvPwrDwnReqS_CAN1_VIU_VIU1_0x101(ErrLvPwrDwnReqS);
	Rte_IWrite_RE_ComTx_PP_EpbCtrlStsInfo_CAN2_VIU_VIU_0x702_EpbCtrlStsInfo_CAN2_VIU_VIU_0x702(EpbCtrlStsInfo);
	Rte_IWrite_RE_ComTx_PP_VCU2PtWhlLocn_CAN2_VIU_MCU_0x121_VCU2PtWhlLocn_CAN2_VIU_MCU_0x121(VCU2PtWhlLocn);
	Rte_IWrite_RE_ComTx_PP_IsgMcuTFb1_CAN4_VIU_TBOX_0x404_IsgMcuTFb1_CAN4_VIU_TBOX_0x404(IsgMcuTFb1);
	Rte_IWrite_RE_ComTx_PP_VCU2ReqTq_CAN2_VIU_MCU_0x121_VCU2ReqTq_CAN2_VIU_MCU_0x121(VCU2ReqTq);
	Rte_IWrite_RE_ComTx_PP_CAN2Acp353CanStsVcu_CAN2_VIU_VIU_0x702_CAN2Acp353CanStsVcu_CAN2_VIU_VIU_0x702(CAN2Acp353CanStsVcu);
	Rte_IWrite_RE_ComTx_PP_EpbCtrlStsFbS_CAN1_VIU_VIU1_0x101_EpbCtrlStsFbS_CAN1_VIU_VIU1_0x101(EpbCtrlStsFbS);
	Rte_IWrite_RE_ComTx_PP_ComPwrLocnFb_CAN4_VIU_COM_0x431_ComPwrLocnFb_CAN4_VIU_COM_0x431(ComPwrLocnFb);
	Rte_IWrite_RE_ComTx_PP_VcuBattSwtSt_CAN2_VIU_VIU_0x702_VcuBattSwtSt_CAN2_VIU_VIU_0x702(VcuBattSwtSt);
	Rte_IWrite_RE_ComTx_PP_VcuPosRlyEna_CAN2_VIU_VIU_0x700_VcuPosRlyEna_CAN2_VIU_VIU_0x700(VcuPosRlyEna);
	Rte_IWrite_RE_ComTx_PP_VCUFltLevel_CAN1_VIU_BCU_0x131_VCUFltLevel_CAN1_VIU_BCU_0x131(VCUFltLevel);
	Rte_IWrite_RE_ComTx_PP_VcuPrechrgRlyEna_CAN2_VIU_VIU_0x700_VcuPrechrgRlyEna_CAN2_VIU_VIU_0x700(VcuPrechrgRlyEna);
	Rte_IWrite_RE_ComTx_PP_ComLvOnFb_CAN4_VIU_COM_0x431_ComLvOnFb_CAN4_VIU_COM_0x431(ComLvOnFb);
	Rte_IWrite_RE_ComTx_PP_CAN2VCUID131CycCntr_CAN2_VIU_MCU_0x121_CAN2VCUID131CycCntr_CAN2_VIU_MCU_0x121(CAN2VCUID131CycCntr_swc);
	Rte_IWrite_RE_ComTx_PP_Apu2PwrReq_CAN2_VIU_APU_0x217_Apu2PwrReq_CAN2_VIU_APU_0x217(Apu2PwrReq);
	Rte_IWrite_RE_ComTx_PP_CAN1Cntr212_CAN1_VIU_WBS_0x212_CAN1Cntr212_CAN1_VIU_WBS_0x212(CAN1Cntr212_swc);
	Rte_IWrite_RE_ComTx_PP_VcuTurnLampSts_CAN2_VIU_VIU_0x700_VcuTurnLampSts_CAN2_VIU_VIU_0x700(VcuTurnLampSts);
	Rte_IWrite_RE_ComTx_PP_Prak1PressureLevel_CAN1_VIU_WBS_0x212_Prak1PressureLevel_CAN1_VIU_WBS_0x212(Prak1PressureLevel);
	Rte_IWrite_RE_ComTx_PP_ComEngCooltTFb2_CAN4_VIU_COM_0x437_ComEngCooltTFb2_CAN4_VIU_COM_0x437(ComEngCooltTFb2);
	Rte_IWrite_RE_ComTx_PP_VcuMdcRadarRlyEna_CAN2_VIU_VIU_0x700_VcuMdcRadarRlyEna_CAN2_VIU_VIU_0x700(VcuMdcRadarRlyEna);
	Rte_IWrite_RE_ComTx_PP_HvOnFb_CAN4_VIU_TBOX_0x401_HvOnFb_CAN4_VIU_TBOX_0x401(HvOnFb);
	Rte_IWrite_RE_ComTx_PP_VCU1ElecMotOperMod_CAN1_VIU_MCU_0x121_VCU1ElecMotOperMod_CAN1_VIU_MCU_0x121(VCU1ElecMotOperMod);
	Rte_IWrite_RE_ComTx_PP_VCU2MCUPwrDwn_CAN2_VIU_MCU_0x121_VCU2MCUPwrDwn_CAN2_VIU_MCU_0x121(VCU2MCUPwrDwn);
	Rte_IWrite_RE_ComTx_PP_ONIGNReady1_CAN1_VIU_WBS_0x212_ONIGNReady1_CAN1_VIU_WBS_0x212(ONIGNReady1);
	Rte_IWrite_RE_ComTx_PP_ComBarrModFb_CAN4_VIU_COM_0x431_ComBarrModFb_CAN4_VIU_COM_0x431(ComBarrModFb);
	Rte_IWrite_RE_ComTx_PP_VcuEPBCtrl_CAN2_VIU_VIU_0x700_VcuEPBCtrl_CAN2_VIU_VIU_0x700(VcuEPBCtrl);
	Rte_IWrite_RE_ComTx_PP_VcuAcpRlyEna_CAN2_VIU_VIU_0x700_VcuAcpRlyEna_CAN2_VIU_VIU_0x700(VcuAcpRlyEna);
	Rte_IWrite_RE_ComTx_PP_AgPitchFb_CAN4_VIU_TBOX_0x406_AgPitchFb_CAN4_VIU_TBOX_0x406(AgPitchFb);
	Rte_IWrite_RE_ComTx_PP_VCU1ReqTq_CAN1_VIU_MCU_0x121_VCU1ReqTq_CAN1_VIU_MCU_0x121(VCU1ReqTq);
	Rte_IWrite_RE_ComTx_PP_VCU1ReqSpd_CAN1_VIU_MCU_0x121_VCU1ReqSpd_CAN1_VIU_MCU_0x121(VCU1ReqSpd);
	Rte_IWrite_RE_ComTx_PP_VCUCycCntr_CAN1_VIU_BCU_0x131_VCUCycCntr_CAN1_VIU_BCU_0x131(VCUCycCntr_swc);
	Rte_IWrite_RE_ComTx_PP_ComEmgyStopOnFb_CAN4_VIU_COM_0x431_ComEmgyStopOnFb_CAN4_VIU_COM_0x431(ComEmgyStopOnFb);
	Rte_IWrite_RE_ComTx_PP_ComImuSysCalModSts_CAN4_VIU_COM_0x432_ComImuSysCalModSts_CAN4_VIU_COM_0x432(ComImuSysCalModSts);
	Rte_IWrite_RE_ComTx_PP_IsgMotTFb1_CAN4_VIU_TBOX_0x404_IsgMotTFb1_CAN4_VIU_TBOX_0x404(IsgMotTFb1);
	Rte_IWrite_RE_ComTx_PP_DCLEnableCmd_CAN1_VIU_DCL_0x321_DCLEnableCmd_CAN1_VIU_DCL_0x321(DCLEnableCmd);
	Rte_IWrite_RE_ComTx_PP_LeBattStsFb_CAN4_VIU_TBOX_0x407_LeBattStsFb_CAN4_VIU_TBOX_0x407(LeBattStsFb);
	Rte_IWrite_RE_ComTx_PP_VcuWhlCmbnMod_CAN2_VIU_VIU_0x702_VcuWhlCmbnMod_CAN2_VIU_VIU_0x702(VcuWhlCmbnMod);
	Rte_IWrite_RE_ComTx_PP_ImuSysCalModSts_CAN4_VIU_TBOX_0x402_ImuSysCalModSts_CAN4_VIU_TBOX_0x402(ImuSysCalModSts);


	/*  -------------------------------------- Trigger Interface ---------------------------------  */

	/*  -------------------------------------- Mode Management -----------------------------------  */

	if (CANStStopReq != CANStStopReq_b)
	{
		(void)Rte_Switch_PP_A2B_CANStReq_CANStReq( CANStStopReq);
		CANStStopReq_b = CANStStopReq;
	}

	if (ApuCAN1StStopReq != ApuCAN1StStopReq_b)
	{
		(void)Rte_Switch_PP_A2B_ApuCAN1StReq_ApuCAN1StReq( ApuCAN1StStopReq);
		ApuCAN1StStopReq_b = ApuCAN1StStopReq;
	}
	
	if (ApuCAN2StStopReq != ApuCAN2StStopReq_b)
	{
		(void)Rte_Switch_PP_A2B_ApuCAN2StReq_ApuCAN2StReq( ApuCAN2StStopReq);
		ApuCAN2StStopReq_b = ApuCAN2StStopReq;
	}	


	if(VCUCycCntr_swc < 14)
	{
		VCUCycCntr_swc ++;
	}
	else
	{
		VCUCycCntr_swc = 0;
	}	
	if(CAN1ID131CycCntr_swc < 14)
	{
		CAN1ID131CycCntr_swc ++;
	}
	else
	{
		CAN1ID131CycCntr_swc =0;
	}	

	if(CAN2VCUID131CycCntr_swc < 14)
	{
		CAN2VCUID131CycCntr_swc ++;
	}
	else
	{
		CAN2VCUID131CycCntr_swc = 0;
	}		
	if(time20ms < 2u)
	{
		time20ms ++;
	}
	else
	{
		time20ms  = 0u;

	}



	/*  -------------------------------------- Port Handling -------------------------------------  */

	/*  -------------------------------------- Exclusive Area ------------------------------------  */

	/*  -------------------------------------- Multiple Instantiation ----------------------------  */

	/*PROTECTED REGION ID(User Logic :RE_ComTx) ENABLED START */
	/* Start of user code - Do not remove this comment */
	/* End of user code - Do not remove this comment */
	/*PROTECTED REGION END */

}
#define OUTP_SWC_STOP_SEC_CODE  
#include "OUTP_SWC_MemMap.h" 

/*PROTECTED REGION ID(FileHeaderUserDefinedFunctions :OUTP_SWC) ENABLED START */
/* Start of user defined functions  - Do not remove this comment */
/* End of user defined functions - Do not remove this comment */
/*PROTECTED REGION END */

