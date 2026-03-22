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
#define OUTP_SWC_START_SEC_CODE                   
#include "OUTP_SWC_MemMap.h"
FUNC (void, OUTP_SWC_CODE) RE_ComTx/* return value & FctID */
(
		void
)
{

	boolean iWrite1;
	boolean iWriteRef1;
	boolean *retIWriteRef1;
	uint8 iWrite2;
	uint8 iWriteRef2;
	uint8 *retIWriteRef2;
	uint8 iWrite3;
	uint8 iWriteRef3;
	uint8 *retIWriteRef3;
	uint8 iWrite4;
	uint8 iWriteRef4;
	uint8 *retIWriteRef4;
	boolean iWrite5;
	boolean iWriteRef5;
	boolean *retIWriteRef5;
	boolean iWrite6;
	boolean iWriteRef6;
	boolean *retIWriteRef6;
	uint8 iWrite7;
	uint8 iWriteRef7;
	uint8 *retIWriteRef7;
	uint16 iWrite8;
	uint16 iWriteRef8;
	uint16 *retIWriteRef8;
	uint8 iWrite9;
	uint8 iWriteRef9;
	uint8 *retIWriteRef9;
	uint8 iWrite10;
	uint8 iWriteRef10;
	uint8 *retIWriteRef10;
	uint8 iWrite11;
	uint8 iWriteRef11;
	uint8 *retIWriteRef11;
	uint8 iWrite12;
	uint8 iWriteRef12;
	uint8 *retIWriteRef12;
	boolean iWrite13;
	boolean iWriteRef13;
	boolean *retIWriteRef13;
	boolean iWrite14;
	boolean iWriteRef14;
	boolean *retIWriteRef14;
	uint8 iWrite15;
	uint8 iWriteRef15;
	uint8 *retIWriteRef15;
	uint16 iWrite16;
	uint16 iWriteRef16;
	uint16 *retIWriteRef16;
	uint8 iWrite17;
	uint8 iWriteRef17;
	uint8 *retIWriteRef17;
	uint8 iWrite18;
	uint8 iWriteRef18;
	uint8 *retIWriteRef18;
	uint8 iWrite19;
	uint8 iWriteRef19;
	uint8 *retIWriteRef19;
	uint8 iWrite20;
	uint8 iWriteRef20;
	uint8 *retIWriteRef20;
	uint16 iWrite21;
	uint16 iWriteRef21;
	uint16 *retIWriteRef21;
	uint16 iWrite22;
	uint16 iWriteRef22;
	uint16 *retIWriteRef22;
	uint16 iWrite23;
	uint16 iWriteRef23;
	uint16 *retIWriteRef23;
	boolean iWrite24;
	boolean iWriteRef24;
	boolean *retIWriteRef24;
	boolean iWrite25;
	boolean iWriteRef25;
	boolean *retIWriteRef25;
	uint16 iWrite26;
	uint16 iWriteRef26;
	uint16 *retIWriteRef26;
	boolean iWrite27;
	boolean iWriteRef27;
	boolean *retIWriteRef27;
	boolean iWrite28;
	boolean iWriteRef28;
	boolean *retIWriteRef28;
	uint8 iWrite29;
	uint8 iWriteRef29;
	uint8 *retIWriteRef29;
	boolean iWrite30;
	boolean iWriteRef30;
	boolean *retIWriteRef30;
	uint16 iWrite31;
	uint16 iWriteRef31;
	uint16 *retIWriteRef31;
	boolean iWrite32;
	boolean iWriteRef32;
	boolean *retIWriteRef32;
	uint8 iWrite33;
	uint8 iWriteRef33;
	uint8 *retIWriteRef33;
	uint8 iWrite34;
	uint8 iWriteRef34;
	uint8 *retIWriteRef34;
	uint16 iWrite35;
	uint16 iWriteRef35;
	uint16 *retIWriteRef35;
	boolean iWrite36;
	boolean iWriteRef36;
	boolean *retIWriteRef36;
	boolean iWrite37;
	boolean iWriteRef37;
	boolean *retIWriteRef37;
	uint8 iWrite38;
	uint8 iWriteRef38;
	uint8 *retIWriteRef38;
	boolean iWrite39;
	boolean iWriteRef39;
	boolean *retIWriteRef39;
	uint8 iWrite40;
	uint8 iWriteRef40;
	uint8 *retIWriteRef40;
	uint16 iWrite41;
	uint16 iWriteRef41;
	uint16 *retIWriteRef41;
	boolean iWrite42;
	boolean iWriteRef42;
	boolean *retIWriteRef42;
	uint8 iWrite43;
	uint8 iWriteRef43;
	uint8 *retIWriteRef43;
	uint8 iWrite44;
	uint8 iWriteRef44;
	uint8 *retIWriteRef44;
	boolean iWrite45;
	boolean iWriteRef45;
	boolean *retIWriteRef45;
	boolean iWrite46;
	boolean iWriteRef46;
	boolean *retIWriteRef46;
	uint8 iWrite47;
	uint8 iWriteRef47;
	uint8 *retIWriteRef47;
	boolean iWrite48;
	boolean iWriteRef48;
	boolean *retIWriteRef48;
	uint8 iWrite49;
	uint8 iWriteRef49;
	uint8 *retIWriteRef49;
	uint8 iWrite50;
	uint8 iWriteRef50;
	uint8 *retIWriteRef50;
	uint8 iWrite51;
	uint8 iWriteRef51;
	uint8 *retIWriteRef51;
	boolean iWrite52;
	boolean iWriteRef52;
	boolean *retIWriteRef52;
	uint8 iWrite53;
	uint8 iWriteRef53;
	uint8 *retIWriteRef53;
	uint8 iWrite54;
	uint8 iWriteRef54;
	uint8 *retIWriteRef54;
	uint8 iWrite55;
	uint8 iWriteRef55;
	uint8 *retIWriteRef55;
	uint16 iWrite56;
	uint16 iWriteRef56;
	uint16 *retIWriteRef56;
	uint16 iWrite57;
	uint16 iWriteRef57;
	uint16 *retIWriteRef57;
	uint8 iWrite58;
	uint8 iWriteRef58;
	uint8 *retIWriteRef58;
	boolean iWrite59;
	boolean iWriteRef59;
	boolean *retIWriteRef59;
	boolean iWrite60;
	boolean iWriteRef60;
	boolean *retIWriteRef60;
	uint16 iWrite61;
	uint16 iWriteRef61;
	uint16 *retIWriteRef61;
	uint8 iWrite62;
	uint8 iWriteRef62;
	uint8 *retIWriteRef62;
	boolean iWrite63;
	boolean iWriteRef63;
	boolean *retIWriteRef63;
	uint8 iWrite64;
	uint8 iWriteRef64;
	uint8 *retIWriteRef64;
	uint8 iWrite65;
	uint8 iWriteRef65;
	uint8 *retIWriteRef65;
	uint8 iWrite66;
	uint8 iWriteRef66;
	uint8 *retIWriteRef66;
	uint8 iWrite67;
	uint8 iWriteRef67;
	uint8 *retIWriteRef67;
	uint16 iWrite68;
	uint16 iWriteRef68;
	uint16 *retIWriteRef68;
	boolean iWrite69;
	boolean iWriteRef69;
	boolean *retIWriteRef69;
	uint16 iWrite70;
	uint16 iWriteRef70;
	uint16 *retIWriteRef70;
	boolean iWrite71;
	boolean iWriteRef71;
	boolean *retIWriteRef71;
	uint8 iWrite72;
	uint8 iWriteRef72;
	uint8 *retIWriteRef72;
	boolean iWrite73;
	boolean iWriteRef73;
	boolean *retIWriteRef73;
	boolean iWrite74;
	boolean iWriteRef74;
	boolean *retIWriteRef74;
	boolean iWrite75;
	boolean iWriteRef75;
	boolean *retIWriteRef75;
	uint8 iWrite76;
	uint8 iWriteRef76;
	uint8 *retIWriteRef76;
	uint16 iWrite77;
	uint16 iWriteRef77;
	uint16 *retIWriteRef77;
	uint16 iWrite78;
	uint16 iWriteRef78;
	uint16 *retIWriteRef78;
	boolean iWrite79;
	boolean iWriteRef79;
	boolean *retIWriteRef79;
	boolean iWrite80;
	boolean iWriteRef80;
	boolean *retIWriteRef80;
	boolean iWrite81;
	boolean iWriteRef81;
	boolean *retIWriteRef81;
	uint16 iWrite82;
	uint16 iWriteRef82;
	uint16 *retIWriteRef82;
	uint8 iWrite83;
	uint8 iWriteRef83;
	uint8 *retIWriteRef83;
	boolean iWrite84;
	boolean iWriteRef84;
	boolean *retIWriteRef84;
	uint16 iWrite85;
	uint16 iWriteRef85;
	uint16 *retIWriteRef85;
	boolean iWrite86;
	boolean iWriteRef86;
	boolean *retIWriteRef86;
	uint8 iWrite87;
	uint8 iWriteRef87;
	uint8 *retIWriteRef87;
	uint8 iWrite88;
	uint8 iWriteRef88;
	uint8 *retIWriteRef88;
	uint16 iWrite89;
	uint16 iWriteRef89;
	uint16 *retIWriteRef89;
	uint8 iWrite90;
	uint8 iWriteRef90;
	uint8 *retIWriteRef90;
	boolean iWrite91;
	boolean iWriteRef91;
	boolean *retIWriteRef91;
	boolean iWrite92;
	boolean iWriteRef92;
	boolean *retIWriteRef92;
	uint8 iWrite93;
	uint8 iWriteRef93;
	uint8 *retIWriteRef93;
	uint8 iWrite94;
	uint8 iWriteRef94;
	uint8 *retIWriteRef94;
	uint16 iWrite95;
	uint16 iWriteRef95;
	uint16 *retIWriteRef95;
	boolean iWrite96;
	boolean iWriteRef96;
	boolean *retIWriteRef96;
	boolean iWrite97;
	boolean iWriteRef97;
	boolean *retIWriteRef97;
	boolean iWrite98;
	boolean iWriteRef98;
	boolean *retIWriteRef98;
	boolean iWrite99;
	boolean iWriteRef99;
	boolean *retIWriteRef99;
	uint8 iWrite100;
	uint8 iWriteRef100;
	uint8 *retIWriteRef100;
	boolean iWrite101;
	boolean iWriteRef101;
	boolean *retIWriteRef101;
	uint16 iWrite102;
	uint16 iWriteRef102;
	uint16 *retIWriteRef102;
	boolean iWrite103;
	boolean iWriteRef103;
	boolean *retIWriteRef103;
	uint16 iWrite104;
	uint16 iWriteRef104;
	uint16 *retIWriteRef104;
	uint8 iWrite105;
	uint8 iWriteRef105;
	uint8 *retIWriteRef105;
	uint16 iWrite106;
	uint16 iWriteRef106;
	uint16 *retIWriteRef106;
	uint8 iWrite107;
	uint8 iWriteRef107;
	uint8 *retIWriteRef107;
	boolean iWrite108;
	boolean iWriteRef108;
	boolean *retIWriteRef108;
	uint16 iWrite109;
	uint16 iWriteRef109;
	uint16 *retIWriteRef109;
	uint16 iWrite110;
	uint16 iWriteRef110;
	uint16 *retIWriteRef110;
	boolean iWrite111;
	boolean iWriteRef111;
	boolean *retIWriteRef111;
	uint8 iWrite112;
	uint8 iWriteRef112;
	uint8 *retIWriteRef112;
	boolean iWrite113;
	boolean iWriteRef113;
	boolean *retIWriteRef113;
	boolean iWrite114;
	boolean iWriteRef114;
	boolean *retIWriteRef114;
	uint8 iWrite115;
	uint8 iWriteRef115;
	uint8 *retIWriteRef115;
	uint16 iWrite116;
	uint16 iWriteRef116;
	uint16 *retIWriteRef116;
	uint8 iWrite117;
	uint8 iWriteRef117;
	uint8 *retIWriteRef117;
	boolean iWrite118;
	boolean iWriteRef118;
	boolean *retIWriteRef118;
	uint16 iWrite119;
	uint16 iWriteRef119;
	uint16 *retIWriteRef119;
	uint8 iWrite120;
	uint8 iWriteRef120;
	uint8 *retIWriteRef120;
	uint8 iWrite121;
	uint8 iWriteRef121;
	uint8 *retIWriteRef121;
	uint8 iWrite122;
	uint8 iWriteRef122;
	uint8 *retIWriteRef122;
	uint8 iWrite123;
	uint8 iWriteRef123;
	uint8 *retIWriteRef123;
	boolean iWrite124;
	boolean iWriteRef124;
	boolean *retIWriteRef124;
	uint8 iWrite125;
	uint8 iWriteRef125;
	uint8 *retIWriteRef125;
	uint8 iWrite126;
	uint8 iWriteRef126;
	uint8 *retIWriteRef126;
	uint16 iWrite127;
	uint16 iWriteRef127;
	uint16 *retIWriteRef127;
	uint8 iWrite128;
	uint8 iWriteRef128;
	uint8 *retIWriteRef128;
	boolean iWrite129;
	boolean iWriteRef129;
	boolean *retIWriteRef129;
	boolean iWrite130;
	boolean iWriteRef130;
	boolean *retIWriteRef130;
	uint8 iWrite131;
	uint8 iWriteRef131;
	uint8 *retIWriteRef131;
	uint16 iWrite132;
	uint16 iWriteRef132;
	uint16 *retIWriteRef132;
	uint16 iWrite133;
	uint16 iWriteRef133;
	uint16 *retIWriteRef133;
	uint8 iWrite134;
	uint8 iWriteRef134;
	uint8 *retIWriteRef134;
	uint16 iWrite135;
	uint16 iWriteRef135;
	uint16 *retIWriteRef135;
	uint8 iWrite136;
	uint8 iWriteRef136;
	uint8 *retIWriteRef136;
	uint8 iWrite137;
	uint8 iWriteRef137;
	uint8 *retIWriteRef137;
	uint8 iWrite138;
	uint8 iWriteRef138;
	uint8 *retIWriteRef138;
	boolean iWrite139;
	boolean iWriteRef139;
	boolean *retIWriteRef139;
	boolean iWrite140;
	boolean iWriteRef140;
	boolean *retIWriteRef140;
	uint8 iWrite141;
	uint8 iWriteRef141;
	uint8 *retIWriteRef141;
	boolean iWrite142;
	boolean iWriteRef142;
	boolean *retIWriteRef142;
	uint16 iWrite143;
	uint16 iWriteRef143;
	uint16 *retIWriteRef143;
	uint8 iWrite144;
	uint8 iWriteRef144;
	uint8 *retIWriteRef144;
	uint8 iWrite145;
	uint8 iWriteRef145;
	uint8 *retIWriteRef145;
	boolean iWrite146;
	boolean iWriteRef146;
	boolean *retIWriteRef146;
	uint16 iWrite147;
	uint16 iWriteRef147;
	uint16 *retIWriteRef147;
	boolean iWrite148;
	boolean iWriteRef148;
	boolean *retIWriteRef148;
	boolean iWrite149;
	boolean iWriteRef149;
	boolean *retIWriteRef149;
	boolean iWrite150;
	boolean iWriteRef150;
	boolean *retIWriteRef150;
	boolean iWrite151;
	boolean iWriteRef151;
	boolean *retIWriteRef151;
	boolean iWrite152;
	boolean iWriteRef152;
	boolean *retIWriteRef152;
	uint8 iWrite153;
	uint8 iWriteRef153;
	uint8 *retIWriteRef153;
	boolean iWrite154;
	boolean iWriteRef154;
	boolean *retIWriteRef154;
	boolean iWrite155;
	boolean iWriteRef155;
	boolean *retIWriteRef155;
	boolean iWrite156;
	boolean iWriteRef156;
	boolean *retIWriteRef156;
	uint8 iWrite157;
	uint8 iWriteRef157;
	uint8 *retIWriteRef157;
	boolean iWrite158;
	boolean iWriteRef158;
	boolean *retIWriteRef158;
	uint8 iWrite159;
	uint8 iWriteRef159;
	uint8 *retIWriteRef159;
	boolean iWrite160;
	boolean iWriteRef160;
	boolean *retIWriteRef160;
	boolean iWrite161;
	boolean iWriteRef161;
	boolean *retIWriteRef161;
	boolean iWrite162;
	boolean iWriteRef162;
	boolean *retIWriteRef162;
	uint8 iWrite163;
	uint8 iWriteRef163;
	uint8 *retIWriteRef163;
	uint8 iWrite164;
	uint8 iWriteRef164;
	uint8 *retIWriteRef164;
	uint8 iWrite165;
	uint8 iWriteRef165;
	uint8 *retIWriteRef165;
	uint8 iWrite166;
	uint8 iWriteRef166;
	uint8 *retIWriteRef166;
	uint16 iWrite167;
	uint16 iWriteRef167;
	uint16 *retIWriteRef167;
	uint8 iWrite168;
	uint8 iWriteRef168;
	uint8 *retIWriteRef168;
	boolean iWrite169;
	boolean iWriteRef169;
	boolean *retIWriteRef169;
	boolean iWrite170;
	boolean iWriteRef170;
	boolean *retIWriteRef170;
	uint8 iWrite171;
	uint8 iWriteRef171;
	uint8 *retIWriteRef171;
	boolean iWrite172;
	boolean iWriteRef172;
	boolean *retIWriteRef172;
	uint8 iWrite173;
	uint8 iWriteRef173;
	uint8 *retIWriteRef173;
	boolean iWrite174;
	boolean iWriteRef174;
	boolean *retIWriteRef174;
	boolean iWrite175;
	boolean iWriteRef175;
	boolean *retIWriteRef175;
	uint16 iWrite176;
	uint16 iWriteRef176;
	uint16 *retIWriteRef176;
	boolean iWrite177;
	boolean iWriteRef177;
	boolean *retIWriteRef177;
	boolean iWrite178;
	boolean iWriteRef178;
	boolean *retIWriteRef178;
	uint8 iWrite179;
	uint8 iWriteRef179;
	uint8 *retIWriteRef179;
	boolean iWrite180;
	boolean iWriteRef180;
	boolean *retIWriteRef180;
	uint16 iWrite181;
	uint16 iWriteRef181;
	uint16 *retIWriteRef181;
	boolean iWrite182;
	boolean iWriteRef182;
	boolean *retIWriteRef182;
	uint16 iWrite183;
	uint16 iWriteRef183;
	uint16 *retIWriteRef183;
	uint16 iWrite184;
	uint16 iWriteRef184;
	uint16 *retIWriteRef184;
	uint8 iWrite185;
	uint8 iWriteRef185;
	uint8 *retIWriteRef185;
	uint8 iWrite186;
	uint8 iWriteRef186;
	uint8 *retIWriteRef186;
	boolean iWrite187;
	boolean iWriteRef187;
	boolean *retIWriteRef187;
	boolean iWrite188;
	boolean iWriteRef188;
	boolean *retIWriteRef188;
	uint8 iWrite189;
	uint8 iWriteRef189;
	uint8 *retIWriteRef189;
	uint8 iWrite190;
	uint8 iWriteRef190;
	uint8 *retIWriteRef190;
	uint8 iWrite191;
	uint8 iWriteRef191;
	uint8 *retIWriteRef191;
	uint8 iWrite192;
	uint8 iWriteRef192;
	uint8 *retIWriteRef192;
	boolean iWrite193;
	boolean iWriteRef193;
	boolean *retIWriteRef193;
	uint8 iWrite194;
	uint8 iWriteRef194;
	uint8 *retIWriteRef194;
	boolean iWrite195;
	boolean iWriteRef195;
	boolean *retIWriteRef195;
	uint16 iWrite196;
	uint16 iWriteRef196;
	uint16 *retIWriteRef196;
	boolean iWrite197;
	boolean iWriteRef197;
	boolean *retIWriteRef197;
	boolean iWrite198;
	boolean iWriteRef198;
	boolean *retIWriteRef198;
	uint8 iWrite199;
	uint8 iWriteRef199;
	uint8 *retIWriteRef199;
	uint8 iWrite200;
	uint8 iWriteRef200;
	uint8 *retIWriteRef200;
	uint16 iWrite201;
	uint16 iWriteRef201;
	uint16 *retIWriteRef201;
	uint16 iWrite202;
	uint16 iWriteRef202;
	uint16 *retIWriteRef202;
	uint16 iWrite203;
	uint16 iWriteRef203;
	uint16 *retIWriteRef203;
	boolean iWrite204;
	boolean iWriteRef204;
	boolean *retIWriteRef204;
	uint8 iWrite205;
	uint8 iWriteRef205;
	uint8 *retIWriteRef205;
	uint16 iWrite206;
	uint16 iWriteRef206;
	uint16 *retIWriteRef206;
	boolean iWrite207;
	boolean iWriteRef207;
	boolean *retIWriteRef207;
	boolean iWrite208;
	boolean iWriteRef208;
	boolean *retIWriteRef208;
	uint16 iWrite209;
	uint16 iWriteRef209;
	uint16 *retIWriteRef209;
	uint8 iWrite210;
	uint8 iWriteRef210;
	uint8 *retIWriteRef210;
	uint8 iWrite211;
	uint8 iWriteRef211;
	uint8 *retIWriteRef211;
	boolean iWrite212;
	boolean iWriteRef212;
	boolean *retIWriteRef212;
	uint8 iWrite213;
	uint8 iWriteRef213;
	uint8 *retIWriteRef213;
	boolean iWrite214;
	boolean iWriteRef214;
	boolean *retIWriteRef214;
	uint8 iWrite215;
	uint8 iWriteRef215;
	uint8 *retIWriteRef215;
	uint8 iWrite216;
	uint8 iWriteRef216;
	uint8 *retIWriteRef216;
	uint8 iWrite217;
	uint8 iWriteRef217;
	uint8 *retIWriteRef217;
	uint8 iWrite218;
	uint8 iWriteRef218;
	uint8 *retIWriteRef218;
	boolean iWrite219;
	boolean iWriteRef219;
	boolean *retIWriteRef219;
	uint8 iWrite220;
	uint8 iWriteRef220;
	uint8 *retIWriteRef220;
	uint16 iWrite221;
	uint16 iWriteRef221;
	uint16 *retIWriteRef221;
	boolean iWrite222;
	boolean iWriteRef222;
	boolean *retIWriteRef222;
	boolean iWrite223;
	boolean iWriteRef223;
	boolean *retIWriteRef223;
	uint8 iWrite224;
	uint8 iWriteRef224;
	uint8 *retIWriteRef224;
	boolean iWrite225;
	boolean iWriteRef225;
	boolean *retIWriteRef225;
	uint8 iWrite226;
	uint8 iWriteRef226;
	uint8 *retIWriteRef226;
	uint8 iWrite227;
	uint8 iWriteRef227;
	uint8 *retIWriteRef227;
	boolean iWrite228;
	boolean iWriteRef228;
	boolean *retIWriteRef228;
	uint8 iWrite229;
	uint8 iWriteRef229;
	uint8 *retIWriteRef229;
	uint8 iWrite230;
	uint8 iWriteRef230;
	uint8 *retIWriteRef230;
	boolean iWrite231;
	boolean iWriteRef231;
	boolean *retIWriteRef231;
	uint8 iWrite232;
	uint8 iWriteRef232;
	uint8 *retIWriteRef232;
	uint16 iWrite233;
	uint16 iWriteRef233;
	uint16 *retIWriteRef233;
	uint8 iWrite234;
	uint8 iWriteRef234;
	uint8 *retIWriteRef234;
	uint8 iWrite235;
	uint8 iWriteRef235;
	uint8 *retIWriteRef235;
	uint8 iWrite236;
	uint8 iWriteRef236;
	uint8 *retIWriteRef236;
	boolean iWrite237;
	boolean iWriteRef237;
	boolean *retIWriteRef237;
	boolean iWrite238;
	boolean iWriteRef238;
	boolean *retIWriteRef238;
	uint16 iWrite239;
	uint16 iWriteRef239;
	uint16 *retIWriteRef239;
	uint8 iWrite240;
	uint8 iWriteRef240;
	uint8 *retIWriteRef240;
	uint16 iWrite241;
	uint16 iWriteRef241;
	uint16 *retIWriteRef241;
	uint8 iWrite242;
	uint8 iWriteRef242;
	uint8 *retIWriteRef242;
	boolean iWrite243;
	boolean iWriteRef243;
	boolean *retIWriteRef243;
	uint8 iWrite244;
	uint8 iWriteRef244;
	uint8 *retIWriteRef244;
	uint8 iWrite245;
	uint8 iWriteRef245;
	uint8 *retIWriteRef245;
	boolean iWrite246;
	boolean iWriteRef246;
	boolean *retIWriteRef246;
	uint8 iWrite247;
	uint8 iWriteRef247;
	uint8 *retIWriteRef247;
	boolean iWrite248;
	boolean iWriteRef248;
	boolean *retIWriteRef248;
	uint8 iWrite249;
	uint8 iWriteRef249;
	uint8 *retIWriteRef249;
	uint8 iWrite250;
	uint8 iWriteRef250;
	uint8 *retIWriteRef250;
	uint8 iWrite251;
	uint8 iWriteRef251;
	uint8 *retIWriteRef251;
	uint16 iWrite252;
	uint16 iWriteRef252;
	uint16 *retIWriteRef252;
	boolean iWrite253;
	boolean iWriteRef253;
	boolean *retIWriteRef253;
	uint8 iWrite254;
	uint8 iWriteRef254;
	uint8 *retIWriteRef254;
	uint8 iWrite255;
	uint8 iWriteRef255;
	uint8 *retIWriteRef255;
	uint8 iWrite256;
	uint8 iWriteRef256;
	uint8 *retIWriteRef256;
	boolean iWrite257;
	boolean iWriteRef257;
	boolean *retIWriteRef257;
	uint8 iWrite258;
	uint8 iWriteRef258;
	uint8 *retIWriteRef258;
	boolean iWrite259;
	boolean iWriteRef259;
	boolean *retIWriteRef259;
	boolean iWrite260;
	boolean iWriteRef260;
	boolean *retIWriteRef260;
	uint8 iWrite261;
	uint8 iWriteRef261;
	uint8 *retIWriteRef261;
	uint16 iWrite262;
	uint16 iWriteRef262;
	uint16 *retIWriteRef262;
	uint8 iWrite263;
	uint8 iWriteRef263;
	uint8 *retIWriteRef263;
	boolean iWrite264;
	boolean iWriteRef264;
	boolean *retIWriteRef264;
	uint8 iWrite265;
	uint8 iWriteRef265;
	uint8 *retIWriteRef265;
	uint8 iWrite266;
	uint8 iWriteRef266;
	uint8 *retIWriteRef266;
	boolean iWrite267;
	boolean iWriteRef267;
	boolean *retIWriteRef267;
	boolean iWrite268;
	boolean iWriteRef268;
	boolean *retIWriteRef268;
	uint8 iWrite269;
	uint8 iWriteRef269;
	uint8 *retIWriteRef269;
	boolean iWrite270;
	boolean iWriteRef270;
	boolean *retIWriteRef270;
	uint8 iWrite271;
	uint8 iWriteRef271;
	uint8 *retIWriteRef271;
	boolean iWrite272;
	boolean iWriteRef272;
	boolean *retIWriteRef272;
	uint8 iWrite273;
	uint8 iWriteRef273;
	uint8 *retIWriteRef273;
	boolean iWrite274;
	boolean iWriteRef274;
	boolean *retIWriteRef274;
	uint16 iWrite275;
	uint16 iWriteRef275;
	uint16 *retIWriteRef275;
	uint16 iWrite276;
	uint16 iWriteRef276;
	uint16 *retIWriteRef276;
	uint16 iWrite277;
	uint16 iWriteRef277;
	uint16 *retIWriteRef277;
	uint8 iWrite278;
	uint8 iWriteRef278;
	uint8 *retIWriteRef278;
	boolean iWrite279;
	boolean iWriteRef279;
	boolean *retIWriteRef279;
	uint8 iWrite280;
	uint8 iWriteRef280;
	uint8 *retIWriteRef280;
	uint8 iWrite281;
	uint8 iWriteRef281;
	uint8 *retIWriteRef281;
	uint8 iWrite282;
	uint8 iWriteRef282;
	uint8 *retIWriteRef282;
	boolean iWrite283;
	boolean iWriteRef283;
	boolean *retIWriteRef283;
	uint8 iWrite284;
	uint8 iWriteRef284;
	uint8 *retIWriteRef284;
	uint8 iWrite285;
	uint8 iWriteRef285;
	uint8 *retIWriteRef285;
	uint8 COM_DISABLE_NONE;
	Std_ReturnType e286;
	uint8 COM_DISABLE_NONE;
	Std_ReturnType e287;
	uint8 COM_DISABLE_NONE;
	Std_ReturnType e288;

	/* Local Data Declaration */

	/*PROTECTED REGION ID(UserVariables :RE_ComTx) ENABLED START */
	/* Start of user variable defintions - Do not remove this comment  */
	/* End of user variable defintions - Do not remove this comment  */
	/*PROTECTED REGION END */
	Std_ReturnType retValue = RTE_E_OK;
	/*  -------------------------------------- Data Read -----------------------------------------  */

	/*  -------------------------------------- Server Call Point  --------------------------------  */

	/*  -------------------------------------- CDATA ---------------------------------------------  */

	/*  -------------------------------------- Data Write ----------------------------------------  */

	Rte_IWrite_RE_ComTx_PP_CAN2ApuId310CanStsVcu_CAN2_VIU_VIU_0x702_CAN2ApuId310CanStsVcu_CAN2_VIU_VIU_0x702(iWrite1);

	retIWriteRef1 = Rte_IWriteRef_RE_ComTx_PP_CAN2ApuId310CanStsVcu_CAN2_VIU_VIU_0x702_CAN2ApuId310CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_SwVersDVN_CAN2_VIU_VIU_0x710_SwVersDVN_CAN2_VIU_VIU_0x710(iWrite2);

	retIWriteRef2 = Rte_IWriteRef_RE_ComTx_PP_SwVersDVN_CAN2_VIU_VIU_0x710_SwVersDVN_CAN2_VIU_VIU_0x710();

	Rte_IWrite_RE_ComTx_PP_VCU1gearposition_CAN1_VIU_MCU_0x307_VCU1gearposition_CAN1_VIU_MCU_0x307(iWrite3);

	retIWriteRef3 = Rte_IWriteRef_RE_ComTx_PP_VCU1gearposition_CAN1_VIU_MCU_0x307_VCU1gearposition_CAN1_VIU_MCU_0x307();

	Rte_IWrite_RE_ComTx_PP_ComBatt1SocFb_CAN4_VIU_COM_0x431_ComBatt1SocFb_CAN4_VIU_COM_0x431(iWrite4);

	retIWriteRef4 = Rte_IWriteRef_RE_ComTx_PP_ComBatt1SocFb_CAN4_VIU_COM_0x431_ComBatt1SocFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_VCUChrgAllw_CAN1_VIU_BCU_0x131_VCUChrgAllw_CAN1_VIU_BCU_0x131(iWrite5);

	retIWriteRef5 = Rte_IWriteRef_RE_ComTx_PP_VCUChrgAllw_CAN1_VIU_BCU_0x131_VCUChrgAllw_CAN1_VIU_BCU_0x131();

	Rte_IWrite_RE_ComTx_PP_VCU2MaiRlyClsInfo_CAN2_VIU_MCU_0x121_VCU2MaiRlyClsInfo_CAN2_VIU_MCU_0x121(iWrite6);

	retIWriteRef6 = Rte_IWriteRef_RE_ComTx_PP_VCU2MaiRlyClsInfo_CAN2_VIU_MCU_0x121_VCU2MaiRlyClsInfo_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_VCU2ElecMotOperMod_CAN2_VIU_MCU_0x121_VCU2ElecMotOperMod_CAN2_VIU_MCU_0x121(iWrite7);

	retIWriteRef7 = Rte_IWriteRef_RE_ComTx_PP_VCU2ElecMotOperMod_CAN2_VIU_MCU_0x121_VCU2ElecMotOperMod_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_VcuErrNrCycFb_CAN4_VIU_MDC_0x521_VcuErrNrCycFb_CAN4_VIU_MDC_0x521(iWrite8);

	retIWriteRef8 = Rte_IWriteRef_RE_ComTx_PP_VcuErrNrCycFb_CAN4_VIU_MDC_0x521_VcuErrNrCycFb_CAN4_VIU_MDC_0x521();

	Rte_IWrite_RE_ComTx_PP_ComGearFb_CAN4_VIU_COM_0x432_ComGearFb_CAN4_VIU_COM_0x432(iWrite9);

	retIWriteRef9 = Rte_IWriteRef_RE_ComTx_PP_ComGearFb_CAN4_VIU_COM_0x432_ComGearFb_CAN4_VIU_COM_0x432();

	Rte_IWrite_RE_ComTx_PP_ComVehVFb_CAN4_VIU_COM_0x431_ComVehVFb_CAN4_VIU_COM_0x431(iWrite10);

	retIWriteRef10 = Rte_IWriteRef_RE_ComTx_PP_ComVehVFb_CAN4_VIU_COM_0x431_ComVehVFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_VCU1SysFltRank_CAN1_VIU_MCU_0x121_VCU1SysFltRank_CAN1_VIU_MCU_0x121(iWrite11);

	retIWriteRef11 = Rte_IWriteRef_RE_ComTx_PP_VCU1SysFltRank_CAN1_VIU_MCU_0x121_VCU1SysFltRank_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_IsgMotTFb2_CAN4_VIU_TBOX_0x408_IsgMotTFb2_CAN4_VIU_TBOX_0x408(iWrite12);

	retIWriteRef12 = Rte_IWriteRef_RE_ComTx_PP_IsgMotTFb2_CAN4_VIU_TBOX_0x408_IsgMotTFb2_CAN4_VIU_TBOX_0x408();

	Rte_IWrite_RE_ComTx_PP_VCU2PrecClsInfo_CAN2_VIU_MCU_0x121_VCU2PrecClsInfo_CAN2_VIU_MCU_0x121(iWrite13);

	retIWriteRef13 = Rte_IWriteRef_RE_ComTx_PP_VCU2PrecClsInfo_CAN2_VIU_MCU_0x121_VCU2PrecClsInfo_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_CAN1DCHId603CanStsVcu_CAN2_VIU_VIU_0x702_CAN1DCHId603CanStsVcu_CAN2_VIU_VIU_0x702(iWrite14);

	retIWriteRef14 = Rte_IWriteRef_RE_ComTx_PP_CAN1DCHId603CanStsVcu_CAN2_VIU_VIU_0x702_CAN1DCHId603CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_Cntr141_CAN4_VIU_MDC_0x141_Cntr141_CAN4_VIU_MDC_0x141(iWrite15);

	retIWriteRef15 = Rte_IWriteRef_RE_ComTx_PP_Cntr141_CAN4_VIU_MDC_0x141_Cntr141_CAN4_VIU_MDC_0x141();

	Rte_IWrite_RE_ComTx_PP_PressureTargetWBS2_CAN2_VIU_WBS_0x212_PressureTargetWBS2_CAN2_VIU_WBS_0x212(iWrite16);

	retIWriteRef16 = Rte_IWriteRef_RE_ComTx_PP_PressureTargetWBS2_CAN2_VIU_WBS_0x212_PressureTargetWBS2_CAN2_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_FuQntyFb1_CAN4_VIU_TBOX_0x404_FuQntyFb1_CAN4_VIU_TBOX_0x404(iWrite17);

	retIWriteRef17 = Rte_IWriteRef_RE_ComTx_PP_FuQntyFb1_CAN4_VIU_TBOX_0x404_FuQntyFb1_CAN4_VIU_TBOX_0x404();

	Rte_IWrite_RE_ComTx_PP_PwrLocnFb_CAN4_VIU_TBOX_0x407_PwrLocnFb_CAN4_VIU_TBOX_0x407(iWrite18);

	retIWriteRef18 = Rte_IWriteRef_RE_ComTx_PP_PwrLocnFb_CAN4_VIU_TBOX_0x407_PwrLocnFb_CAN4_VIU_TBOX_0x407();

	Rte_IWrite_RE_ComTx_PP_VcuResiFuQntyStorg_CAN2_VIU_VIU_0x700_VcuResiFuQntyStorg_CAN2_VIU_VIU_0x700(iWrite19);

	retIWriteRef19 = Rte_IWriteRef_RE_ComTx_PP_VcuResiFuQntyStorg_CAN2_VIU_VIU_0x700_VcuResiFuQntyStorg_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_Test1AccrPedV1_CAN1_VIU_MCU_0x520_Test1AccrPedV1_CAN1_VIU_MCU_0x520(iWrite20);

	retIWriteRef20 = Rte_IWriteRef_RE_ComTx_PP_Test1AccrPedV1_CAN1_VIU_MCU_0x520_Test1AccrPedV1_CAN1_VIU_MCU_0x520();

	Rte_IWrite_RE_ComTx_PP_VCU2ReqSpd_CAN2_VIU_MCU_0x121_VCU2ReqSpd_CAN2_VIU_MCU_0x121(iWrite21);

	retIWriteRef21 = Rte_IWriteRef_RE_ComTx_PP_VCU2ReqSpd_CAN2_VIU_MCU_0x121_VCU2ReqSpd_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_DCHOutCurLimSet_CAN1_VIU_DCH_0x322_DCHOutCurLimSet_CAN1_VIU_DCH_0x322(iWrite22);

	retIWriteRef22 = Rte_IWriteRef_RE_ComTx_PP_DCHOutCurLimSet_CAN1_VIU_DCH_0x322_DCHOutCurLimSet_CAN1_VIU_DCH_0x322();

	Rte_IWrite_RE_ComTx_PP_DCHOutVolSet_CAN1_VIU_DCH_0x322_DCHOutVolSet_CAN1_VIU_DCH_0x322(iWrite23);

	retIWriteRef23 = Rte_IWriteRef_RE_ComTx_PP_DCHOutVolSet_CAN1_VIU_DCH_0x322_DCHOutVolSet_CAN1_VIU_DCH_0x322();

	Rte_IWrite_RE_ComTx_PP_VcuIsgRlyEna_CAN2_VIU_VIU_0x700_VcuIsgRlyEna_CAN2_VIU_VIU_0x700(iWrite24);

	retIWriteRef24 = Rte_IWriteRef_RE_ComTx_PP_VcuIsgRlyEna_CAN2_VIU_VIU_0x700_VcuIsgRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_CAN1BMSNegRlyClsd_CAN1_VIU_MCU_0x521_CAN1BMSNegRlyClsd_CAN1_VIU_MCU_0x521(iWrite25);

	retIWriteRef25 = Rte_IWriteRef_RE_ComTx_PP_CAN1BMSNegRlyClsd_CAN1_VIU_MCU_0x521_CAN1BMSNegRlyClsd_CAN1_VIU_MCU_0x521();

	Rte_IWrite_RE_ComTx_PP_Pressure1TargetWBS1_CAN1_VIU_WBS_0x212_Pressure1TargetWBS1_CAN1_VIU_WBS_0x212(iWrite26);

	retIWriteRef26 = Rte_IWriteRef_RE_ComTx_PP_Pressure1TargetWBS1_CAN1_VIU_WBS_0x212_Pressure1TargetWBS1_CAN1_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_TboxId501CanStsVcu_CAN2_VIU_VIU_0x702_TboxId501CanStsVcu_CAN2_VIU_VIU_0x702(iWrite27);

	retIWriteRef27 = Rte_IWriteRef_RE_ComTx_PP_TboxId501CanStsVcu_CAN2_VIU_VIU_0x702_TboxId501CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_Apu1StrtReq_CAN1_VIU_APU_0x217_Apu1StrtReq_CAN1_VIU_APU_0x217(iWrite28);

	retIWriteRef28 = Rte_IWriteRef_RE_ComTx_PP_Apu1StrtReq_CAN1_VIU_APU_0x217_Apu1StrtReq_CAN1_VIU_APU_0x217();

	Rte_IWrite_RE_ComTx_PP_VcuPwrSysStsNr_CAN2_VIU_VIU_0x702_VcuPwrSysStsNr_CAN2_VIU_VIU_0x702(iWrite29);

	retIWriteRef29 = Rte_IWriteRef_RE_ComTx_PP_VcuPwrSysStsNr_CAN2_VIU_VIU_0x702_VcuPwrSysStsNr_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_LeOrRiPosRcndVcu_CAN2_VIU_VIU_0x702_LeOrRiPosRcndVcu_CAN2_VIU_VIU_0x702(iWrite30);

	retIWriteRef30 = Rte_IWriteRef_RE_ComTx_PP_LeOrRiPosRcndVcu_CAN2_VIU_VIU_0x702_LeOrRiPosRcndVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_RfPFb_CAN4_VIU_TBOX_0x403_RfPFb_CAN4_VIU_TBOX_0x403(iWrite31);

	retIWriteRef31 = Rte_IWriteRef_RE_ComTx_PP_RfPFb_CAN4_VIU_TBOX_0x403_RfPFb_CAN4_VIU_TBOX_0x403();

	Rte_IWrite_RE_ComTx_PP_VCU2StrtAllwd_CAN2_VIU_MCU_0x121_VCU2StrtAllwd_CAN2_VIU_MCU_0x121(iWrite32);

	retIWriteRef32 = Rte_IWriteRef_RE_ComTx_PP_VCU2StrtAllwd_CAN2_VIU_MCU_0x121_VCU2StrtAllwd_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_Test2AccrPedV1_CAN2_VIU_MCU_0x520_Test2AccrPedV1_CAN2_VIU_MCU_0x520(iWrite33);

	retIWriteRef33 = Rte_IWriteRef_RE_ComTx_PP_Test2AccrPedV1_CAN2_VIU_MCU_0x520_Test2AccrPedV1_CAN2_VIU_MCU_0x520();

	Rte_IWrite_RE_ComTx_PP_VcuApu1PtMod_CAN2_VIU_VIU_0x702_VcuApu1PtMod_CAN2_VIU_VIU_0x702(iWrite34);

	retIWriteRef34 = Rte_IWriteRef_RE_ComTx_PP_VcuApu1PtMod_CAN2_VIU_VIU_0x702_VcuApu1PtMod_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_Pressure1TargetWBS2_CAN1_VIU_WBS_0x212_Pressure1TargetWBS2_CAN1_VIU_WBS_0x212(iWrite35);

	retIWriteRef35 = Rte_IWriteRef_RE_ComTx_PP_Pressure1TargetWBS2_CAN1_VIU_WBS_0x212_Pressure1TargetWBS2_CAN1_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_CAN1ApuId310CanStsVcu_CAN2_VIU_VIU_0x702_CAN1ApuId310CanStsVcu_CAN2_VIU_VIU_0x702(iWrite36);

	retIWriteRef36 = Rte_IWriteRef_RE_ComTx_PP_CAN1ApuId310CanStsVcu_CAN2_VIU_VIU_0x702_CAN1ApuId310CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_Apu2DisChrgReq_CAN2_VIU_APU_0x217_Apu2DisChrgReq_CAN2_VIU_APU_0x217(iWrite37);

	retIWriteRef37 = Rte_IWriteRef_RE_ComTx_PP_Apu2DisChrgReq_CAN2_VIU_APU_0x217_Apu2DisChrgReq_CAN2_VIU_APU_0x217();

	Rte_IWrite_RE_ComTx_PP_DCHEnableCmd_CAN1_VIU_DCH_0x322_DCHEnableCmd_CAN1_VIU_DCH_0x322(iWrite38);

	retIWriteRef38 = Rte_IWriteRef_RE_ComTx_PP_DCHEnableCmd_CAN1_VIU_DCH_0x322_DCHEnableCmd_CAN1_VIU_DCH_0x322();

	Rte_IWrite_RE_ComTx_PP_VCU1StrtAllwd_CAN1_VIU_MCU_0x121_VCU1StrtAllwd_CAN1_VIU_MCU_0x121(iWrite39);

	retIWriteRef39 = Rte_IWriteRef_RE_ComTx_PP_VCU1StrtAllwd_CAN1_VIU_MCU_0x121_VCU1StrtAllwd_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_MotFlIgbtTFb_CAN4_VIU_TBOX_0x405_MotFlIgbtTFb_CAN4_VIU_TBOX_0x405(iWrite40);

	retIWriteRef40 = Rte_IWriteRef_RE_ComTx_PP_MotFlIgbtTFb_CAN4_VIU_TBOX_0x405_MotFlIgbtTFb_CAN4_VIU_TBOX_0x405();

	Rte_IWrite_RE_ComTx_PP_Pressure2TargetWBS1_CAN2_VIU_WBS_0x212_Pressure2TargetWBS1_CAN2_VIU_WBS_0x212(iWrite41);

	retIWriteRef41 = Rte_IWriteRef_RE_ComTx_PP_Pressure2TargetWBS1_CAN2_VIU_WBS_0x212_Pressure2TargetWBS1_CAN2_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_CAN2DCHId603CanStsVcu_CAN2_VIU_VIU_0x702_CAN2DCHId603CanStsVcu_CAN2_VIU_VIU_0x702(iWrite42);

	retIWriteRef42 = Rte_IWriteRef_RE_ComTx_PP_CAN2DCHId603CanStsVcu_CAN2_VIU_VIU_0x702_CAN2DCHId603CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_VCUVehicleSpeed1_CAN1_VIU_WBS_0x212_VCUVehicleSpeed1_CAN1_VIU_WBS_0x212(iWrite43);

	retIWriteRef43 = Rte_IWriteRef_RE_ComTx_PP_VCUVehicleSpeed1_CAN1_VIU_WBS_0x212_VCUVehicleSpeed1_CAN1_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_RunningParking2Status_CAN2_VIU_WBS_0x212_RunningParking2Status_CAN2_VIU_WBS_0x212(iWrite44);

	retIWriteRef44 = Rte_IWriteRef_RE_ComTx_PP_RunningParking2Status_CAN2_VIU_WBS_0x212_RunningParking2Status_CAN2_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_VCU1MCUSpdDischrg_CAN1_VIU_MCU_0x121_VCU1MCUSpdDischrg_CAN1_VIU_MCU_0x121(iWrite45);

	retIWriteRef45 = Rte_IWriteRef_RE_ComTx_PP_VCU1MCUSpdDischrg_CAN1_VIU_MCU_0x121_VCU1MCUSpdDischrg_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_CAN1BcuId181CanStsVcu_CAN2_VIU_VIU_0x702_CAN1BcuId181CanStsVcu_CAN2_VIU_VIU_0x702(iWrite46);

	retIWriteRef46 = Rte_IWriteRef_RE_ComTx_PP_CAN1BcuId181CanStsVcu_CAN2_VIU_VIU_0x702_CAN1BcuId181CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_EquipModFb_CAN4_VIU_TBOX_0x401_EquipModFb_CAN4_VIU_TBOX_0x401(iWrite47);

	retIWriteRef47 = Rte_IWriteRef_RE_ComTx_PP_EquipModFb_CAN4_VIU_TBOX_0x401_EquipModFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_VcuCANStStopReq_CAN2_VIU_VIU_0x700_VcuCANStStopReq_CAN2_VIU_VIU_0x700(iWrite48);

	retIWriteRef48 = Rte_IWriteRef_RE_ComTx_PP_VcuCANStStopReq_CAN2_VIU_VIU_0x700_VcuCANStStopReq_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_Test2AccrPedV2_CAN2_VIU_MCU_0x520_Test2AccrPedV2_CAN2_VIU_MCU_0x520(iWrite49);

	retIWriteRef49 = Rte_IWriteRef_RE_ComTx_PP_Test2AccrPedV2_CAN2_VIU_MCU_0x520_Test2AccrPedV2_CAN2_VIU_MCU_0x520();

	Rte_IWrite_RE_ComTx_PP_VcuApu2PtMod_CAN2_VIU_VIU_0x702_VcuApu2PtMod_CAN2_VIU_VIU_0x702(iWrite50);

	retIWriteRef50 = Rte_IWriteRef_RE_ComTx_PP_VcuApu2PtMod_CAN2_VIU_VIU_0x702_VcuApu2PtMod_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_CAN2Cntr212_CAN2_VIU_WBS_0x212_CAN2Cntr212_CAN2_VIU_WBS_0x212(iWrite51);

	retIWriteRef51 = Rte_IWriteRef_RE_ComTx_PP_CAN2Cntr212_CAN2_VIU_WBS_0x212_CAN2Cntr212_CAN2_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_VcuFrntLampRlyEna_CAN2_VIU_VIU_0x700_VcuFrntLampRlyEna_CAN2_VIU_VIU_0x700(iWrite52);

	retIWriteRef52 = Rte_IWriteRef_RE_ComTx_PP_VcuFrntLampRlyEna_CAN2_VIU_VIU_0x700_VcuFrntLampRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_NM_Tx_Sig_NM_Tx_0x400_NM_Tx_Sig_NM_Tx_0x400(iWrite53);

	retIWriteRef53 = Rte_IWriteRef_RE_ComTx_PP_NM_Tx_Sig_NM_Tx_0x400_NM_Tx_Sig_NM_Tx_0x400();

	Rte_IWrite_RE_ComTx_PP_IsgMcuTFb2_CAN4_VIU_TBOX_0x408_IsgMcuTFb2_CAN4_VIU_TBOX_0x408(iWrite54);

	retIWriteRef54 = Rte_IWriteRef_RE_ComTx_PP_IsgMcuTFb2_CAN4_VIU_TBOX_0x408_IsgMcuTFb2_CAN4_VIU_TBOX_0x408();

	Rte_IWrite_RE_ComTx_PP_VcuFanSpdPwmCtrl_CAN2_VIU_VIU_0x700_VcuFanSpdPwmCtrl_CAN2_VIU_VIU_0x700(iWrite55);

	retIWriteRef55 = Rte_IWriteRef_RE_ComTx_PP_VcuFanSpdPwmCtrl_CAN2_VIU_VIU_0x700_VcuFanSpdPwmCtrl_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_EngSpdFb2_CAN4_VIU_TBOX_0x408_EngSpdFb2_CAN4_VIU_TBOX_0x408(iWrite56);

	retIWriteRef56 = Rte_IWriteRef_RE_ComTx_PP_EngSpdFb2_CAN4_VIU_TBOX_0x408_EngSpdFb2_CAN4_VIU_TBOX_0x408();

	Rte_IWrite_RE_ComTx_PP_DCLOutVolSet_CAN1_VIU_DCL_0x321_DCLOutVolSet_CAN1_VIU_DCL_0x321(iWrite57);

	retIWriteRef57 = Rte_IWriteRef_RE_ComTx_PP_DCLOutVolSet_CAN1_VIU_DCL_0x321_DCLOutVolSet_CAN1_VIU_DCL_0x321();

	Rte_IWrite_RE_ComTx_PP_Prak2PressureLevel_CAN2_VIU_WBS_0x212_Prak2PressureLevel_CAN2_VIU_WBS_0x212(iWrite58);

	retIWriteRef58 = Rte_IWriteRef_RE_ComTx_PP_Prak2PressureLevel_CAN2_VIU_WBS_0x212_Prak2PressureLevel_CAN2_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_ComHvOnFb_CAN4_VIU_COM_0x431_ComHvOnFb_CAN4_VIU_COM_0x431(iWrite59);

	retIWriteRef59 = Rte_IWriteRef_RE_ComTx_PP_ComHvOnFb_CAN4_VIU_COM_0x431_ComHvOnFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_MdcVehRdyFb_CAN4_VIU_MDC_0x141_MdcVehRdyFb_CAN4_VIU_MDC_0x141(iWrite60);

	retIWriteRef60 = Rte_IWriteRef_RE_ComTx_PP_MdcVehRdyFb_CAN4_VIU_MDC_0x141_MdcVehRdyFb_CAN4_VIU_MDC_0x141();

	Rte_IWrite_RE_ComTx_PP_VCUApuPwrReqS_CAN1_VIU_VIU1_0x101_VCUApuPwrReqS_CAN1_VIU_VIU1_0x101(iWrite61);

	retIWriteRef61 = Rte_IWriteRef_RE_ComTx_PP_VCUApuPwrReqS_CAN1_VIU_VIU1_0x101_VCUApuPwrReqS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_ComIsgMotTFb1_CAN4_VIU_COM_0x434_ComIsgMotTFb1_CAN4_VIU_COM_0x434(iWrite62);

	retIWriteRef62 = Rte_IWriteRef_RE_ComTx_PP_ComIsgMotTFb1_CAN4_VIU_COM_0x434_ComIsgMotTFb1_CAN4_VIU_COM_0x434();

	Rte_IWrite_RE_ComTx_PP_ComRiBattStsFb_CAN4_VIU_COM_0x431_ComRiBattStsFb_CAN4_VIU_COM_0x431(iWrite63);

	retIWriteRef63 = Rte_IWriteRef_RE_ComTx_PP_ComRiBattStsFb_CAN4_VIU_COM_0x431_ComRiBattStsFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_FuQntyFb2_CAN4_VIU_TBOX_0x408_FuQntyFb2_CAN4_VIU_TBOX_0x408(iWrite64);

	retIWriteRef64 = Rte_IWriteRef_RE_ComTx_PP_FuQntyFb2_CAN4_VIU_TBOX_0x408_FuQntyFb2_CAN4_VIU_TBOX_0x408();

	Rte_IWrite_RE_ComTx_PP_ComMotFrIgbtTFb_CAN4_VIU_COM_0x435_ComMotFrIgbtTFb_CAN4_VIU_COM_0x435(iWrite65);

	retIWriteRef65 = Rte_IWriteRef_RE_ComTx_PP_ComMotFrIgbtTFb_CAN4_VIU_COM_0x435_ComMotFrIgbtTFb_CAN4_VIU_COM_0x435();

	Rte_IWrite_RE_ComTx_PP_PtWhlTypS_CAN1_VIU_VIU1_0x101_PtWhlTypS_CAN1_VIU_VIU1_0x101(iWrite66);

	retIWriteRef66 = Rte_IWriteRef_RE_ComTx_PP_PtWhlTypS_CAN1_VIU_VIU1_0x101_PtWhlTypS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_SwVersVRN_CAN2_VIU_VIU_0x710_SwVersVRN_CAN2_VIU_VIU_0x710(iWrite67);

	retIWriteRef67 = Rte_IWriteRef_RE_ComTx_PP_SwVersVRN_CAN2_VIU_VIU_0x710_SwVersVRN_CAN2_VIU_VIU_0x710();

	Rte_IWrite_RE_ComTx_PP_LoBattUVcu_CAN2_VIU_VIU_0x701_LoBattUVcu_CAN2_VIU_VIU_0x701(iWrite68);

	retIWriteRef68 = Rte_IWriteRef_RE_ComTx_PP_LoBattUVcu_CAN2_VIU_VIU_0x701_LoBattUVcu_CAN2_VIU_VIU_0x701();

	Rte_IWrite_RE_ComTx_PP_VcuFanRlyEna_CAN2_VIU_VIU_0x700_VcuFanRlyEna_CAN2_VIU_VIU_0x700(iWrite69);

	retIWriteRef69 = Rte_IWriteRef_RE_ComTx_PP_VcuFanRlyEna_CAN2_VIU_VIU_0x700_VcuFanRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_ActvSteerR_CAN4_VIU_MDC_0x141_ActvSteerR_CAN4_VIU_MDC_0x141(iWrite70);

	retIWriteRef70 = Rte_IWriteRef_RE_ComTx_PP_ActvSteerR_CAN4_VIU_MDC_0x141_ActvSteerR_CAN4_VIU_MDC_0x141();

	Rte_IWrite_RE_ComTx_PP_RiBattStsFb_CAN4_VIU_TBOX_0x407_RiBattStsFb_CAN4_VIU_TBOX_0x407(iWrite71);

	retIWriteRef71 = Rte_IWriteRef_RE_ComTx_PP_RiBattStsFb_CAN4_VIU_TBOX_0x407_RiBattStsFb_CAN4_VIU_TBOX_0x407();

	Rte_IWrite_RE_ComTx_PP_ComEngCooltTFb1_CAN4_VIU_COM_0x434_ComEngCooltTFb1_CAN4_VIU_COM_0x434(iWrite72);

	retIWriteRef72 = Rte_IWriteRef_RE_ComTx_PP_ComEngCooltTFb1_CAN4_VIU_COM_0x434_ComEngCooltTFb1_CAN4_VIU_COM_0x434();

	Rte_IWrite_RE_ComTx_PP_CAN2McuId153CanStsVcu_CAN2_VIU_VIU_0x702_CAN2McuId153CanStsVcu_CAN2_VIU_VIU_0x702(iWrite73);

	retIWriteRef73 = Rte_IWriteRef_RE_ComTx_PP_CAN2McuId153CanStsVcu_CAN2_VIU_VIU_0x702_CAN2McuId153CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_BarrModFb_CAN4_VIU_TBOX_0x401_BarrModFb_CAN4_VIU_TBOX_0x401(iWrite74);

	retIWriteRef74 = Rte_IWriteRef_RE_ComTx_PP_BarrModFb_CAN4_VIU_TBOX_0x401_BarrModFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_MdcId148CanStsVcu_CAN2_VIU_VIU_0x702_MdcId148CanStsVcu_CAN2_VIU_VIU_0x702(iWrite75);

	retIWriteRef75 = Rte_IWriteRef_RE_ComTx_PP_MdcId148CanStsVcu_CAN2_VIU_VIU_0x702_MdcId148CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_SwVersVFN_CAN2_VIU_VIU_0x710_SwVersVFN_CAN2_VIU_VIU_0x710(iWrite76);

	retIWriteRef76 = Rte_IWriteRef_RE_ComTx_PP_SwVersVFN_CAN2_VIU_VIU_0x710_SwVersVFN_CAN2_VIU_VIU_0x710();

	Rte_IWrite_RE_ComTx_PP_ComLfPFb_CAN4_VIU_COM_0x433_ComLfPFb_CAN4_VIU_COM_0x433(iWrite77);

	retIWriteRef77 = Rte_IWriteRef_RE_ComTx_PP_ComLfPFb_CAN4_VIU_COM_0x433_ComLfPFb_CAN4_VIU_COM_0x433();

	Rte_IWrite_RE_ComTx_PP_ComAgHeadingFb_CAN4_VIU_COM_0x436_ComAgHeadingFb_CAN4_VIU_COM_0x436(iWrite78);

	retIWriteRef78 = Rte_IWriteRef_RE_ComTx_PP_ComAgHeadingFb_CAN4_VIU_COM_0x436_ComAgHeadingFb_CAN4_VIU_COM_0x436();

	Rte_IWrite_RE_ComTx_PP_VcuDataStoreReq_CAN2_VIU_VIU_0x700_VcuDataStoreReq_CAN2_VIU_VIU_0x700(iWrite79);

	retIWriteRef79 = Rte_IWriteRef_RE_ComTx_PP_VcuDataStoreReq_CAN2_VIU_VIU_0x700_VcuDataStoreReq_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_ComLeBattStsFb_CAN4_VIU_COM_0x431_ComLeBattStsFb_CAN4_VIU_COM_0x431(iWrite80);

	retIWriteRef80 = Rte_IWriteRef_RE_ComTx_PP_ComLeBattStsFb_CAN4_VIU_COM_0x431_ComLeBattStsFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_SteerModStsFb_CAN4_VIU_MDC_0x141_SteerModStsFb_CAN4_VIU_MDC_0x141(iWrite81);

	retIWriteRef81 = Rte_IWriteRef_RE_ComTx_PP_SteerModStsFb_CAN4_VIU_MDC_0x141_SteerModStsFb_CAN4_VIU_MDC_0x141();

	Rte_IWrite_RE_ComTx_PP_ComVcuErrNrFb_CAN4_VIU_COM_0x432_ComVcuErrNrFb_CAN4_VIU_COM_0x432(iWrite82);

	retIWriteRef82 = Rte_IWriteRef_RE_ComTx_PP_ComVcuErrNrFb_CAN4_VIU_COM_0x432_ComVcuErrNrFb_CAN4_VIU_COM_0x432();

	Rte_IWrite_RE_ComTx_PP_ComFuQntyFb1_CAN4_VIU_COM_0x434_ComFuQntyFb1_CAN4_VIU_COM_0x434(iWrite83);

	retIWriteRef83 = Rte_IWriteRef_RE_ComTx_PP_ComFuQntyFb1_CAN4_VIU_COM_0x434_ComFuQntyFb1_CAN4_VIU_COM_0x434();

	Rte_IWrite_RE_ComTx_PP_CAN1WbsId201CanStsVcu_CAN2_VIU_VIU_0x702_CAN1WbsId201CanStsVcu_CAN2_VIU_VIU_0x702(iWrite84);

	retIWriteRef84 = Rte_IWriteRef_RE_ComTx_PP_CAN1WbsId201CanStsVcu_CAN2_VIU_VIU_0x702_CAN1WbsId201CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_VcuErrTotFb_CAN4_VIU_MDC_0x521_VcuErrTotFb_CAN4_VIU_MDC_0x521(iWrite85);

	retIWriteRef85 = Rte_IWriteRef_RE_ComTx_PP_VcuErrTotFb_CAN4_VIU_MDC_0x521_VcuErrTotFb_CAN4_VIU_MDC_0x521();

	Rte_IWrite_RE_ComTx_PP_ACMSD_CAN1_VIU_TMS_0X513_ACMSD_CAN1_VIU_TMS_0X513(iWrite86);

	retIWriteRef86 = Rte_IWriteRef_RE_ComTx_PP_ACMSD_CAN1_VIU_TMS_0X513_ACMSD_CAN1_VIU_TMS_0X513();

	Rte_IWrite_RE_ComTx_PP_ComFuQntyFb2_CAN4_VIU_COM_0x437_ComFuQntyFb2_CAN4_VIU_COM_0x437(iWrite87);

	retIWriteRef87 = Rte_IWriteRef_RE_ComTx_PP_ComFuQntyFb2_CAN4_VIU_COM_0x437_ComFuQntyFb2_CAN4_VIU_COM_0x437();

	Rte_IWrite_RE_ComTx_PP_MotFrIgbtTFb_CAN4_VIU_TBOX_0x405_MotFrIgbtTFb_CAN4_VIU_TBOX_0x405(iWrite88);

	retIWriteRef88 = Rte_IWriteRef_RE_ComTx_PP_MotFrIgbtTFb_CAN4_VIU_TBOX_0x405_MotFrIgbtTFb_CAN4_VIU_TBOX_0x405();

	Rte_IWrite_RE_ComTx_PP_ComBatt1VltgFb_CAN4_VIU_COM_0x431_ComBatt1VltgFb_CAN4_VIU_COM_0x431(iWrite89);

	retIWriteRef89 = Rte_IWriteRef_RE_ComTx_PP_ComBatt1VltgFb_CAN4_VIU_COM_0x431_ComBatt1VltgFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_ComIsgMcuTFb2_CAN4_VIU_COM_0x437_ComIsgMcuTFb2_CAN4_VIU_COM_0x437(iWrite90);

	retIWriteRef90 = Rte_IWriteRef_RE_ComTx_PP_ComIsgMcuTFb2_CAN4_VIU_COM_0x437_ComIsgMcuTFb2_CAN4_VIU_COM_0x437();

	Rte_IWrite_RE_ComTx_PP_Test1FlgBrk_CAN1_VIU_MCU_0x521_Test1FlgBrk_CAN1_VIU_MCU_0x521(iWrite91);

	retIWriteRef91 = Rte_IWriteRef_RE_ComTx_PP_Test1FlgBrk_CAN1_VIU_MCU_0x521_Test1FlgBrk_CAN1_VIU_MCU_0x521();

	Rte_IWrite_RE_ComTx_PP_EmgyStopVcu_CAN2_VIU_VIU_0x702_EmgyStopVcu_CAN2_VIU_VIU_0x702(iWrite92);

	retIWriteRef92 = Rte_IWriteRef_RE_ComTx_PP_EmgyStopVcu_CAN2_VIU_VIU_0x702_EmgyStopVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_SwVersCVN_CAN2_VIU_VIU_0x710_SwVersCVN_CAN2_VIU_VIU_0x710(iWrite93);

	retIWriteRef93 = Rte_IWriteRef_RE_ComTx_PP_SwVersCVN_CAN2_VIU_VIU_0x710_SwVersCVN_CAN2_VIU_VIU_0x710();

	Rte_IWrite_RE_ComTx_PP_ComPwrExchStsFb_CAN4_VIU_COM_0x431_ComPwrExchStsFb_CAN4_VIU_COM_0x431(iWrite94);

	retIWriteRef94 = Rte_IWriteRef_RE_ComTx_PP_ComPwrExchStsFb_CAN4_VIU_COM_0x431_ComPwrExchStsFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_EngSpdFb1_CAN4_VIU_TBOX_0x404_EngSpdFb1_CAN4_VIU_TBOX_0x404(iWrite95);

	retIWriteRef95 = Rte_IWriteRef_RE_ComTx_PP_EngSpdFb1_CAN4_VIU_TBOX_0x404_EngSpdFb1_CAN4_VIU_TBOX_0x404();

	Rte_IWrite_RE_ComTx_PP_CAN1BMSMaiRlyClsd_CAN1_VIU_MCU_0x521_CAN1BMSMaiRlyClsd_CAN1_VIU_MCU_0x521(iWrite96);

	retIWriteRef96 = Rte_IWriteRef_RE_ComTx_PP_CAN1BMSMaiRlyClsd_CAN1_VIU_MCU_0x521_CAN1BMSMaiRlyClsd_CAN1_VIU_MCU_0x521();

	Rte_IWrite_RE_ComTx_PP_ComPullWireModFb_CAN4_VIU_COM_0x431_ComPullWireModFb_CAN4_VIU_COM_0x431(iWrite97);

	retIWriteRef97 = Rte_IWriteRef_RE_ComTx_PP_ComPullWireModFb_CAN4_VIU_COM_0x431_ComPullWireModFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_BcuCanStS_CAN1_VIU_VIU1_0x101_BcuCanStS_CAN1_VIU_VIU1_0x101(iWrite98);

	retIWriteRef98 = Rte_IWriteRef_RE_ComTx_PP_BcuCanStS_CAN1_VIU_VIU1_0x101_BcuCanStS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_VCU1MaiRlyClsInfo_CAN1_VIU_MCU_0x121_VCU1MaiRlyClsInfo_CAN1_VIU_MCU_0x121(iWrite99);

	retIWriteRef99 = Rte_IWriteRef_RE_ComTx_PP_VCU1MaiRlyClsInfo_CAN1_VIU_MCU_0x121_VCU1MaiRlyClsInfo_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_VcuWbs1PtWhlLocn_CAN1_VIU_WBS_0x212_VcuWbs1PtWhlLocn_CAN1_VIU_WBS_0x212(iWrite100);

	retIWriteRef100 = Rte_IWriteRef_RE_ComTx_PP_VcuWbs1PtWhlLocn_CAN1_VIU_WBS_0x212_VcuWbs1PtWhlLocn_CAN1_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_MaiCtrlrLocnFb_CAN4_VIU_TBOX_0x407_MaiCtrlrLocnFb_CAN4_VIU_TBOX_0x407(iWrite101);

	retIWriteRef101 = Rte_IWriteRef_RE_ComTx_PP_MaiCtrlrLocnFb_CAN4_VIU_TBOX_0x407_MaiCtrlrLocnFb_CAN4_VIU_TBOX_0x407();

	Rte_IWrite_RE_ComTx_PP_VcuErrNrFb_CAN4_VIU_TBOX_0x402_VcuErrNrFb_CAN4_VIU_TBOX_0x402(iWrite102);

	retIWriteRef102 = Rte_IWriteRef_RE_ComTx_PP_VcuErrNrFb_CAN4_VIU_TBOX_0x402_VcuErrNrFb_CAN4_VIU_TBOX_0x402();

	Rte_IWrite_RE_ComTx_PP_LvOnFb_CAN4_VIU_TBOX_0x401_LvOnFb_CAN4_VIU_TBOX_0x401(iWrite103);

	retIWriteRef103 = Rte_IWriteRef_RE_ComTx_PP_LvOnFb_CAN4_VIU_TBOX_0x401_LvOnFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_VCU1MinPermTq_CAN1_VIU_MCU_0x121_VCU1MinPermTq_CAN1_VIU_MCU_0x121(iWrite104);

	retIWriteRef104 = Rte_IWriteRef_RE_ComTx_PP_VCU1MinPermTq_CAN1_VIU_MCU_0x121_VCU1MinPermTq_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_ESTOP2_CAN2_VIU_WBS_0x212_ESTOP2_CAN2_VIU_WBS_0x212(iWrite105);

	retIWriteRef105 = Rte_IWriteRef_RE_ComTx_PP_ESTOP2_CAN2_VIU_WBS_0x212_ESTOP2_CAN2_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_AutVehVFb_CAN4_VIU_MDC_0x141_AutVehVFb_CAN4_VIU_MDC_0x141(iWrite106);

	retIWriteRef106 = Rte_IWriteRef_RE_ComTx_PP_AutVehVFb_CAN4_VIU_MDC_0x141_AutVehVFb_CAN4_VIU_MDC_0x141();

	Rte_IWrite_RE_ComTx_PP_VCU2VehicleSpeed_CAN2_VIU_WBS_0x212_VCU2VehicleSpeed_CAN2_VIU_WBS_0x212(iWrite107);

	retIWriteRef107 = Rte_IWriteRef_RE_ComTx_PP_VCU2VehicleSpeed_CAN2_VIU_WBS_0x212_VCU2VehicleSpeed_CAN2_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_ErrLvUpInhbS_CAN1_VIU_VIU1_0x101_ErrLvUpInhbS_CAN1_VIU_VIU1_0x101(iWrite108);

	retIWriteRef108 = Rte_IWriteRef_RE_ComTx_PP_ErrLvUpInhbS_CAN1_VIU_VIU1_0x101_ErrLvUpInhbS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_Apu1PwrReq_CAN1_VIU_APU_0x217_Apu1PwrReq_CAN1_VIU_APU_0x217(iWrite109);

	retIWriteRef109 = Rte_IWriteRef_RE_ComTx_PP_Apu1PwrReq_CAN1_VIU_APU_0x217_Apu1PwrReq_CAN1_VIU_APU_0x217();

	Rte_IWrite_RE_ComTx_PP_BatttSnsrTOutVcu_CAN2_VIU_VIU_0x703_BatttSnsrTOutVcu_CAN2_VIU_VIU_0x703(iWrite110);

	retIWriteRef110 = Rte_IWriteRef_RE_ComTx_PP_BatttSnsrTOutVcu_CAN2_VIU_VIU_0x703_BatttSnsrTOutVcu_CAN2_VIU_VIU_0x703();

	Rte_IWrite_RE_ComTx_PP_CAN2DCLId601CanStsVcu_CAN2_VIU_VIU_0x702_CAN2DCLId601CanStsVcu_CAN2_VIU_VIU_0x702(iWrite111);

	retIWriteRef111 = Rte_IWriteRef_RE_ComTx_PP_CAN2DCLId601CanStsVcu_CAN2_VIU_VIU_0x702_CAN2DCLId601CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_Batt1MaxTFb_CAN4_VIU_TBOX_0x401_Batt1MaxTFb_CAN4_VIU_TBOX_0x401(iWrite112);

	retIWriteRef112 = Rte_IWriteRef_RE_ComTx_PP_Batt1MaxTFb_CAN4_VIU_TBOX_0x401_Batt1MaxTFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_ImuId500CanStsVcu_CAN2_VIU_VIU_0x702_ImuId500CanStsVcu_CAN2_VIU_VIU_0x702(iWrite113);

	retIWriteRef113 = Rte_IWriteRef_RE_ComTx_PP_ImuId500CanStsVcu_CAN2_VIU_VIU_0x702_ImuId500CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_ComId421CanStsVcu_CAN2_VIU_VIU_0x702_ComId421CanStsVcu_CAN2_VIU_VIU_0x702(iWrite114);

	retIWriteRef114 = Rte_IWriteRef_RE_ComTx_PP_ComId421CanStsVcu_CAN2_VIU_VIU_0x702_ComId421CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_ComMotFlIgbtTFb_CAN4_VIU_COM_0x435_ComMotFlIgbtTFb_CAN4_VIU_COM_0x435(iWrite115);

	retIWriteRef115 = Rte_IWriteRef_RE_ComTx_PP_ComMotFlIgbtTFb_CAN4_VIU_COM_0x435_ComMotFlIgbtTFb_CAN4_VIU_COM_0x435();

	Rte_IWrite_RE_ComTx_PP_ComEngSpdFb1_CAN4_VIU_COM_0x434_ComEngSpdFb1_CAN4_VIU_COM_0x434(iWrite116);

	retIWriteRef116 = Rte_IWriteRef_RE_ComTx_PP_ComEngSpdFb1_CAN4_VIU_COM_0x434_ComEngSpdFb1_CAN4_VIU_COM_0x434();

	Rte_IWrite_RE_ComTx_PP_Cntr321_CAN1_VIU_DCL_0x321_Cntr321_CAN1_VIU_DCL_0x321(iWrite117);

	retIWriteRef117 = Rte_IWriteRef_RE_ComTx_PP_Cntr321_CAN1_VIU_DCL_0x321_Cntr321_CAN1_VIU_DCL_0x321();

	Rte_IWrite_RE_ComTx_PP_CAN2Acp354CanStsVcu_CAN2_VIU_VIU_0x702_CAN2Acp354CanStsVcu_CAN2_VIU_VIU_0x702(iWrite118);

	retIWriteRef118 = Rte_IWriteRef_RE_ComTx_PP_CAN2Acp354CanStsVcu_CAN2_VIU_VIU_0x702_CAN2Acp354CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_VCU2MaxPermTq_CAN2_VIU_MCU_0x121_VCU2MaxPermTq_CAN2_VIU_MCU_0x121(iWrite119);

	retIWriteRef119 = Rte_IWriteRef_RE_ComTx_PP_VCU2MaxPermTq_CAN2_VIU_MCU_0x121_VCU2MaxPermTq_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_VCU1PtWhlLocn_CAN1_VIU_MCU_0x121_VCU1PtWhlLocn_CAN1_VIU_MCU_0x121(iWrite120);

	retIWriteRef120 = Rte_IWriteRef_RE_ComTx_PP_VCU1PtWhlLocn_CAN1_VIU_MCU_0x121_VCU1PtWhlLocn_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_Batt2SocFb_CAN4_VIU_TBOX_0x402_Batt2SocFb_CAN4_VIU_TBOX_0x402(iWrite121);

	retIWriteRef121 = Rte_IWriteRef_RE_ComTx_PP_Batt2SocFb_CAN4_VIU_TBOX_0x402_Batt2SocFb_CAN4_VIU_TBOX_0x402();

	Rte_IWrite_RE_ComTx_PP_VcuBcupauseChargeFaultS_CAN1_VIU_VIU1_0x101_VcuBcupauseChargeFaultS_CAN1_VIU_VIU1_0x101(iWrite122);

	retIWriteRef122 = Rte_IWriteRef_RE_ComTx_PP_VcuBcupauseChargeFaultS_CAN1_VIU_VIU1_0x101_VcuBcupauseChargeFaultS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_VehVFb_CAN4_VIU_TBOX_0x401_VehVFb_CAN4_VIU_TBOX_0x401(iWrite123);

	retIWriteRef123 = Rte_IWriteRef_RE_ComTx_PP_VehVFb_CAN4_VIU_TBOX_0x401_VehVFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_EmgyStopOnFb_CAN4_VIU_TBOX_0x401_EmgyStopOnFb_CAN4_VIU_TBOX_0x401(iWrite124);

	retIWriteRef124 = Rte_IWriteRef_RE_ComTx_PP_EmgyStopOnFb_CAN4_VIU_TBOX_0x401_EmgyStopOnFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_vcuwbs02BR2_CAN2_VIU_WBS_0x212_vcuwbs02BR2_CAN2_VIU_WBS_0x212(iWrite125);

	retIWriteRef125 = Rte_IWriteRef_RE_ComTx_PP_vcuwbs02BR2_CAN2_VIU_WBS_0x212_vcuwbs02BR2_CAN2_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_RunningParking1Status_CAN1_VIU_WBS_0x212_RunningParking1Status_CAN1_VIU_WBS_0x212(iWrite126);

	retIWriteRef126 = Rte_IWriteRef_RE_ComTx_PP_RunningParking1Status_CAN1_VIU_WBS_0x212_RunningParking1Status_CAN1_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_AgHeadingFb_CAN4_VIU_TBOX_0x406_AgHeadingFb_CAN4_VIU_TBOX_0x406(iWrite127);

	retIWriteRef127 = Rte_IWriteRef_RE_ComTx_PP_AgHeadingFb_CAN4_VIU_TBOX_0x406_AgHeadingFb_CAN4_VIU_TBOX_0x406();

	Rte_IWrite_RE_ComTx_PP_CAN2Cntr217_CAN2_VIU_APU_0x217_CAN2Cntr217_CAN2_VIU_APU_0x217(iWrite128);

	retIWriteRef128 = Rte_IWriteRef_RE_ComTx_PP_CAN2Cntr217_CAN2_VIU_APU_0x217_CAN2Cntr217_CAN2_VIU_APU_0x217();

	Rte_IWrite_RE_ComTx_PP_MechanismKeyFlgVcu_CAN2_VIU_VIU_0x702_MechanismKeyFlgVcu_CAN2_VIU_VIU_0x702(iWrite129);

	retIWriteRef129 = Rte_IWriteRef_RE_ComTx_PP_MechanismKeyFlgVcu_CAN2_VIU_VIU_0x702_MechanismKeyFlgVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_VcuEngStsFb_CAN4_VIU_MDC_0x141_VcuEngStsFb_CAN4_VIU_MDC_0x141(iWrite130);

	retIWriteRef130 = Rte_IWriteRef_RE_ComTx_PP_VcuEngStsFb_CAN4_VIU_MDC_0x141_VcuEngStsFb_CAN4_VIU_MDC_0x141();

	Rte_IWrite_RE_ComTx_PP_ONIGNReady_CAN2_VIU_WBS_0x212_ONIGNReady_CAN2_VIU_WBS_0x212(iWrite131);

	retIWriteRef131 = Rte_IWriteRef_RE_ComTx_PP_ONIGNReady_CAN2_VIU_WBS_0x212_ONIGNReady_CAN2_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_BattSnsrTVcu_CAN2_VIU_VIU_0x701_BattSnsrTVcu_CAN2_VIU_VIU_0x701(iWrite132);

	retIWriteRef132 = Rte_IWriteRef_RE_ComTx_PP_BattSnsrTVcu_CAN2_VIU_VIU_0x701_BattSnsrTVcu_CAN2_VIU_VIU_0x701();

	Rte_IWrite_RE_ComTx_PP_ComBatt2VltgFb_CAN4_VIU_COM_0x432_ComBatt2VltgFb_CAN4_VIU_COM_0x432(iWrite133);

	retIWriteRef133 = Rte_IWriteRef_RE_ComTx_PP_ComBatt2VltgFb_CAN4_VIU_COM_0x432_ComBatt2VltgFb_CAN4_VIU_COM_0x432();

	Rte_IWrite_RE_ComTx_PP_EngCooltTFb1_CAN4_VIU_TBOX_0x404_EngCooltTFb1_CAN4_VIU_TBOX_0x404(iWrite134);

	retIWriteRef134 = Rte_IWriteRef_RE_ComTx_PP_EngCooltTFb1_CAN4_VIU_TBOX_0x404_EngCooltTFb1_CAN4_VIU_TBOX_0x404();

	Rte_IWrite_RE_ComTx_PP_VcuBcuSocS_CAN1_VIU_VIU1_0x101_VcuBcuSocS_CAN1_VIU_VIU1_0x101(iWrite135);

	retIWriteRef135 = Rte_IWriteRef_RE_ComTx_PP_VcuBcuSocS_CAN1_VIU_VIU1_0x101_VcuBcuSocS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_MotFrTFb_CAN4_VIU_TBOX_0x405_MotFrTFb_CAN4_VIU_TBOX_0x405(iWrite136);

	retIWriteRef136 = Rte_IWriteRef_RE_ComTx_PP_MotFrTFb_CAN4_VIU_TBOX_0x405_MotFrTFb_CAN4_VIU_TBOX_0x405();

	Rte_IWrite_RE_ComTx_PP_vcuwbs02BR1_CAN1_VIU_WBS_0x212_vcuwbs02BR1_CAN1_VIU_WBS_0x212(iWrite137);

	retIWriteRef137 = Rte_IWriteRef_RE_ComTx_PP_vcuwbs02BR1_CAN1_VIU_WBS_0x212_vcuwbs02BR1_CAN1_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_PtfmTypFb_CAN4_VIU_TBOX_0x402_PtfmTypFb_CAN4_VIU_TBOX_0x402(iWrite138);

	retIWriteRef138 = Rte_IWriteRef_RE_ComTx_PP_PtfmTypFb_CAN4_VIU_TBOX_0x402_PtfmTypFb_CAN4_VIU_TBOX_0x402();

	Rte_IWrite_RE_ComTx_PP_HvilErrVcu_CAN2_VIU_VIU_0x702_HvilErrVcu_CAN2_VIU_VIU_0x702(iWrite139);

	retIWriteRef139 = Rte_IWriteRef_RE_ComTx_PP_HvilErrVcu_CAN2_VIU_VIU_0x702_HvilErrVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_VCU1PrecClsInfo_CAN1_VIU_MCU_0x121_VCU1PrecClsInfo_CAN1_VIU_MCU_0x121(iWrite140);

	retIWriteRef140 = Rte_IWriteRef_RE_ComTx_PP_VCU1PrecClsInfo_CAN1_VIU_MCU_0x121_VCU1PrecClsInfo_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_VCU2InAccpedalposition1_CAN2_VIU_MCU_0x520_VCU2InAccpedalposition1_CAN2_VIU_MCU_0x520(iWrite141);

	retIWriteRef141 = Rte_IWriteRef_RE_ComTx_PP_VCU2InAccpedalposition1_CAN2_VIU_MCU_0x520_VCU2InAccpedalposition1_CAN2_VIU_MCU_0x520();

	Rte_IWrite_RE_ComTx_PP_VcuBcuPwrUpAllwS_CAN1_VIU_VIU1_0x101_VcuBcuPwrUpAllwS_CAN1_VIU_VIU1_0x101(iWrite142);

	retIWriteRef142 = Rte_IWriteRef_RE_ComTx_PP_VcuBcuPwrUpAllwS_CAN1_VIU_VIU1_0x101_VcuBcuPwrUpAllwS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_VCU1MaxPermTq_CAN1_VIU_MCU_0x121_VCU1MaxPermTq_CAN1_VIU_MCU_0x121(iWrite143);

	retIWriteRef143 = Rte_IWriteRef_RE_ComTx_PP_VCU1MaxPermTq_CAN1_VIU_MCU_0x121_VCU1MaxPermTq_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_CAN1Cntr217_CAN1_VIU_APU_0x217_CAN1Cntr217_CAN1_VIU_APU_0x217(iWrite144);

	retIWriteRef144 = Rte_IWriteRef_RE_ComTx_PP_CAN1Cntr217_CAN1_VIU_APU_0x217_CAN1Cntr217_CAN1_VIU_APU_0x217();

	Rte_IWrite_RE_ComTx_PP_VCU2SysFltRank_CAN2_VIU_MCU_0x121_VCU2SysFltRank_CAN2_VIU_MCU_0x121(iWrite145);

	retIWriteRef145 = Rte_IWriteRef_RE_ComTx_PP_VCU2SysFltRank_CAN2_VIU_MCU_0x121_VCU2SysFltRank_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_CAN2BMSNegRlyClsd_CAN2_VIU_MCU_0x521_CAN2BMSNegRlyClsd_CAN2_VIU_MCU_0x521(iWrite146);

	retIWriteRef146 = Rte_IWriteRef_RE_ComTx_PP_CAN2BMSNegRlyClsd_CAN2_VIU_MCU_0x521_CAN2BMSNegRlyClsd_CAN2_VIU_MCU_0x521();

	Rte_IWrite_RE_ComTx_PP_Batt2VltgFb_CAN4_VIU_TBOX_0x402_Batt2VltgFb_CAN4_VIU_TBOX_0x402(iWrite147);

	retIWriteRef147 = Rte_IWriteRef_RE_ComTx_PP_Batt2VltgFb_CAN4_VIU_TBOX_0x402_Batt2VltgFb_CAN4_VIU_TBOX_0x402();

	Rte_IWrite_RE_ComTx_PP_VehRdyFb_CAN4_VIU_TBOX_0x401_VehRdyFb_CAN4_VIU_TBOX_0x401(iWrite148);

	retIWriteRef148 = Rte_IWriteRef_RE_ComTx_PP_VehRdyFb_CAN4_VIU_TBOX_0x401_VehRdyFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_RiLampCtrl_CAN4_VIU_TBOX_0x407_RiLampCtrl_CAN4_VIU_TBOX_0x407(iWrite149);

	retIWriteRef149 = Rte_IWriteRef_RE_ComTx_PP_RiLampCtrl_CAN4_VIU_TBOX_0x407_RiLampCtrl_CAN4_VIU_TBOX_0x407();

	Rte_IWrite_RE_ComTx_PP_VcuHornRlyEna_CAN2_VIU_VIU_0x700_VcuHornRlyEna_CAN2_VIU_VIU_0x700(iWrite150);

	retIWriteRef150 = Rte_IWriteRef_RE_ComTx_PP_VcuHornRlyEna_CAN2_VIU_VIU_0x700_VcuHornRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_CAN2WbsId201CanStsVcu_CAN2_VIU_VIU_0x702_CAN2WbsId201CanStsVcu_CAN2_VIU_VIU_0x702(iWrite151);

	retIWriteRef151 = Rte_IWriteRef_RE_ComTx_PP_CAN2WbsId201CanStsVcu_CAN2_VIU_VIU_0x702_CAN2WbsId201CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_ComMaiCtrlrLocnFb_CAN4_VIU_COM_0x431_ComMaiCtrlrLocnFb_CAN4_VIU_COM_0x431(iWrite152);

	retIWriteRef152 = Rte_IWriteRef_RE_ComTx_PP_ComMaiCtrlrLocnFb_CAN4_VIU_COM_0x431_ComMaiCtrlrLocnFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_PtWhlLocnS_CAN1_VIU_VIU1_0x101_PtWhlLocnS_CAN1_VIU_VIU1_0x101(iWrite153);

	retIWriteRef153 = Rte_IWriteRef_RE_ComTx_PP_PtWhlLocnS_CAN1_VIU_VIU1_0x101_PtWhlLocnS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_Test2FlgGripBrk_CAN2_VIU_MCU_0x521_Test2FlgGripBrk_CAN2_VIU_MCU_0x521(iWrite154);

	retIWriteRef154 = Rte_IWriteRef_RE_ComTx_PP_Test2FlgGripBrk_CAN2_VIU_MCU_0x521_Test2FlgGripBrk_CAN2_VIU_MCU_0x521();

	Rte_IWrite_RE_ComTx_PP_VcuResElyEna1_CAN2_VIU_VIU_0x700_VcuResElyEna1_CAN2_VIU_VIU_0x700(iWrite155);

	retIWriteRef155 = Rte_IWriteRef_RE_ComTx_PP_VcuResElyEna1_CAN2_VIU_VIU_0x700_VcuResElyEna1_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_Test2FlgBrk_CAN2_VIU_MCU_0x521_Test2FlgBrk_CAN2_VIU_MCU_0x521(iWrite156);

	retIWriteRef156 = Rte_IWriteRef_RE_ComTx_PP_Test2FlgBrk_CAN2_VIU_MCU_0x521_Test2FlgBrk_CAN2_VIU_MCU_0x521();

	Rte_IWrite_RE_ComTx_PP_Batt2MaxTFb_CAN4_VIU_TBOX_0x402_Batt2MaxTFb_CAN4_VIU_TBOX_0x402(iWrite157);

	retIWriteRef157 = Rte_IWriteRef_RE_ComTx_PP_Batt2MaxTFb_CAN4_VIU_TBOX_0x402_Batt2MaxTFb_CAN4_VIU_TBOX_0x402();

	Rte_IWrite_RE_ComTx_PP_PullWireModFb_CAN4_VIU_TBOX_0x401_PullWireModFb_CAN4_VIU_TBOX_0x401(iWrite158);

	retIWriteRef158 = Rte_IWriteRef_RE_ComTx_PP_PullWireModFb_CAN4_VIU_TBOX_0x401_PullWireModFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_ComMotFlTFb_CAN4_VIU_COM_0x435_ComMotFlTFb_CAN4_VIU_COM_0x435(iWrite159);

	retIWriteRef159 = Rte_IWriteRef_RE_ComTx_PP_ComMotFlTFb_CAN4_VIU_COM_0x435_ComMotFlTFb_CAN4_VIU_COM_0x435();

	Rte_IWrite_RE_ComTx_PP_VcuHvActvS_CAN1_VIU_VIU1_0x101_VcuHvActvS_CAN1_VIU_VIU1_0x101(iWrite160);

	retIWriteRef160 = Rte_IWriteRef_RE_ComTx_PP_VcuHvActvS_CAN1_VIU_VIU1_0x101_VcuHvActvS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_VCU1MCUPwrDwn_CAN1_VIU_MCU_0x121_VCU1MCUPwrDwn_CAN1_VIU_MCU_0x121(iWrite161);

	retIWriteRef161 = Rte_IWriteRef_RE_ComTx_PP_VCU1MCUPwrDwn_CAN1_VIU_MCU_0x121_VCU1MCUPwrDwn_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_VcuRvsLiLampSts_CAN2_VIU_VIU_0x700_VcuRvsLiLampSts_CAN2_VIU_VIU_0x700(iWrite162);

	retIWriteRef162 = Rte_IWriteRef_RE_ComTx_PP_VcuRvsLiLampSts_CAN2_VIU_VIU_0x700_VcuRvsLiLampSts_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_PwrExchStsFb_CAN4_VIU_TBOX_0x401_PwrExchStsFb_CAN4_VIU_TBOX_0x401(iWrite163);

	retIWriteRef163 = Rte_IWriteRef_RE_ComTx_PP_PwrExchStsFb_CAN4_VIU_TBOX_0x401_PwrExchStsFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_ComIsgMcuTFb1_CAN4_VIU_COM_0x434_ComIsgMcuTFb1_CAN4_VIU_COM_0x434(iWrite164);

	retIWriteRef164 = Rte_IWriteRef_RE_ComTx_PP_ComIsgMcuTFb1_CAN4_VIU_COM_0x434_ComIsgMcuTFb1_CAN4_VIU_COM_0x434();

	Rte_IWrite_RE_ComTx_PP_ComIsgPwrOutFb2_CAN4_VIU_COM_0x437_ComIsgPwrOutFb2_CAN4_VIU_COM_0x437(iWrite165);

	retIWriteRef165 = Rte_IWriteRef_RE_ComTx_PP_ComIsgPwrOutFb2_CAN4_VIU_COM_0x437_ComIsgPwrOutFb2_CAN4_VIU_COM_0x437();

	Rte_IWrite_RE_ComTx_PP_ActvGearPosnFb_CAN4_VIU_MDC_0x141_ActvGearPosnFb_CAN4_VIU_MDC_0x141(iWrite166);

	retIWriteRef166 = Rte_IWriteRef_RE_ComTx_PP_ActvGearPosnFb_CAN4_VIU_MDC_0x141_ActvGearPosnFb_CAN4_VIU_MDC_0x141();

	Rte_IWrite_RE_ComTx_PP_Batt1VltgFb_CAN4_VIU_TBOX_0x401_Batt1VltgFb_CAN4_VIU_TBOX_0x401(iWrite167);

	retIWriteRef167 = Rte_IWriteRef_RE_ComTx_PP_Batt1VltgFb_CAN4_VIU_TBOX_0x401_Batt1VltgFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_ComMotFrTFb_CAN4_VIU_COM_0x435_ComMotFrTFb_CAN4_VIU_COM_0x435(iWrite168);

	retIWriteRef168 = Rte_IWriteRef_RE_ComTx_PP_ComMotFrTFb_CAN4_VIU_COM_0x435_ComMotFrTFb_CAN4_VIU_COM_0x435();

	Rte_IWrite_RE_ComTx_PP_VcuApuCAN2StStopReq_CAN2_VIU_VIU_0x700_VcuApuCAN2StStopReq_CAN2_VIU_VIU_0x700(iWrite169);

	retIWriteRef169 = Rte_IWriteRef_RE_ComTx_PP_VcuApuCAN2StStopReq_CAN2_VIU_VIU_0x700_VcuApuCAN2StStopReq_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_VcuBrkPedlLiLampSts_CAN2_VIU_VIU_0x700_VcuBrkPedlLiLampSts_CAN2_VIU_VIU_0x700(iWrite170);

	retIWriteRef170 = Rte_IWriteRef_RE_ComTx_PP_VcuBrkPedlLiLampSts_CAN2_VIU_VIU_0x700_VcuBrkPedlLiLampSts_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_IsgPwrOutFb2_CAN4_VIU_TBOX_0x408_IsgPwrOutFb2_CAN4_VIU_TBOX_0x408(iWrite171);

	retIWriteRef171 = Rte_IWriteRef_RE_ComTx_PP_IsgPwrOutFb2_CAN4_VIU_TBOX_0x408_IsgPwrOutFb2_CAN4_VIU_TBOX_0x408();

	Rte_IWrite_RE_ComTx_PP_VcuWbsRlyEna_CAN2_VIU_VIU_0x700_VcuWbsRlyEna_CAN2_VIU_VIU_0x700(iWrite172);

	retIWriteRef172 = Rte_IWriteRef_RE_ComTx_PP_VcuWbsRlyEna_CAN2_VIU_VIU_0x700_VcuWbsRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_ComIsgMotTFb2_CAN4_VIU_COM_0x437_ComIsgMotTFb2_CAN4_VIU_COM_0x437(iWrite173);

	retIWriteRef173 = Rte_IWriteRef_RE_ComTx_PP_ComIsgMotTFb2_CAN4_VIU_COM_0x437_ComIsgMotTFb2_CAN4_VIU_COM_0x437();

	Rte_IWrite_RE_ComTx_PP_CAN1DCLId601CanStsVcu_CAN2_VIU_VIU_0x702_CAN1DCLId601CanStsVcu_CAN2_VIU_VIU_0x702(iWrite174);

	retIWriteRef174 = Rte_IWriteRef_RE_ComTx_PP_CAN1DCLId601CanStsVcu_CAN2_VIU_VIU_0x702_CAN1DCLId601CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_VcuPosnLampSts_CAN2_VIU_VIU_0x700_VcuPosnLampSts_CAN2_VIU_VIU_0x700(iWrite175);

	retIWriteRef175 = Rte_IWriteRef_RE_ComTx_PP_VcuPosnLampSts_CAN2_VIU_VIU_0x700_VcuPosnLampSts_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_VcuTotVygStorg_CAN2_VIU_VIU_0x700_VcuTotVygStorg_CAN2_VIU_VIU_0x700(iWrite176);

	retIWriteRef176 = Rte_IWriteRef_RE_ComTx_PP_VcuTotVygStorg_CAN2_VIU_VIU_0x700_VcuTotVygStorg_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_CAN2VIUId101CanStsVcu_CAN2_VIU_VIU_0x702_CAN2VIUId101CanStsVcu_CAN2_VIU_VIU_0x702(iWrite177);

	retIWriteRef177 = Rte_IWriteRef_RE_ComTx_PP_CAN2VIUId101CanStsVcu_CAN2_VIU_VIU_0x702_CAN2VIUId101CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_PtWhlCompanionBattAvlS_CAN1_VIU_VIU1_0x101_PtWhlCompanionBattAvlS_CAN1_VIU_VIU1_0x101(iWrite178);

	retIWriteRef178 = Rte_IWriteRef_RE_ComTx_PP_PtWhlCompanionBattAvlS_CAN1_VIU_VIU1_0x101_PtWhlCompanionBattAvlS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_OperModFb_CAN4_VIU_TBOX_0x401_OperModFb_CAN4_VIU_TBOX_0x401(iWrite179);

	retIWriteRef179 = Rte_IWriteRef_RE_ComTx_PP_OperModFb_CAN4_VIU_TBOX_0x401_OperModFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_VcuLeRiPosRlyEna_CAN2_VIU_VIU_0x700_VcuLeRiPosRlyEna_CAN2_VIU_VIU_0x700(iWrite180);

	retIWriteRef180 = Rte_IWriteRef_RE_ComTx_PP_VcuLeRiPosRlyEna_CAN2_VIU_VIU_0x700_VcuLeRiPosRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_MotSnsrTOutVcu_CAN2_VIU_VIU_0x703_MotSnsrTOutVcu_CAN2_VIU_VIU_0x703(iWrite181);

	retIWriteRef181 = Rte_IWriteRef_RE_ComTx_PP_MotSnsrTOutVcu_CAN2_VIU_VIU_0x703_MotSnsrTOutVcu_CAN2_VIU_VIU_0x703();

	Rte_IWrite_RE_ComTx_PP_VcuTensnrRlyEna_CAN2_VIU_VIU_0x700_VcuTensnrRlyEna_CAN2_VIU_VIU_0x700(iWrite182);

	retIWriteRef182 = Rte_IWriteRef_RE_ComTx_PP_VcuTensnrRlyEna_CAN2_VIU_VIU_0x700_VcuTensnrRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_TotVygFb_CAN4_VIU_TBOX_0x403_TotVygFb_CAN4_VIU_TBOX_0x403(iWrite183);

	retIWriteRef183 = Rte_IWriteRef_RE_ComTx_PP_TotVygFb_CAN4_VIU_TBOX_0x403_TotVygFb_CAN4_VIU_TBOX_0x403();

	Rte_IWrite_RE_ComTx_PP_ComRfPFb_CAN4_VIU_COM_0x433_ComRfPFb_CAN4_VIU_COM_0x433(iWrite184);

	retIWriteRef184 = Rte_IWriteRef_RE_ComTx_PP_ComRfPFb_CAN4_VIU_COM_0x433_ComRfPFb_CAN4_VIU_COM_0x433();

	Rte_IWrite_RE_ComTx_PP_VCU2gearposition_CAN2_VIU_MCU_0x307_VCU2gearposition_CAN2_VIU_MCU_0x307(iWrite185);

	retIWriteRef185 = Rte_IWriteRef_RE_ComTx_PP_VCU2gearposition_CAN2_VIU_MCU_0x307_VCU2gearposition_CAN2_VIU_MCU_0x307();

	Rte_IWrite_RE_ComTx_PP_MotFlTFb_CAN4_VIU_TBOX_0x405_MotFlTFb_CAN4_VIU_TBOX_0x405(iWrite186);

	retIWriteRef186 = Rte_IWriteRef_RE_ComTx_PP_MotFlTFb_CAN4_VIU_TBOX_0x405_MotFlTFb_CAN4_VIU_TBOX_0x405();

	Rte_IWrite_RE_ComTx_PP_ComVehRdyFb_CAN4_VIU_COM_0x431_ComVehRdyFb_CAN4_VIU_COM_0x431(iWrite187);

	retIWriteRef187 = Rte_IWriteRef_RE_ComTx_PP_ComVehRdyFb_CAN4_VIU_COM_0x431_ComVehRdyFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_ComParkModFb_CAN4_VIU_COM_0x431_ComParkModFb_CAN4_VIU_COM_0x431(iWrite188);

	retIWriteRef188 = Rte_IWriteRef_RE_ComTx_PP_ComParkModFb_CAN4_VIU_COM_0x431_ComParkModFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_ComBatt1MaxTFb_CAN4_VIU_COM_0x431_ComBatt1MaxTFb_CAN4_VIU_COM_0x431(iWrite189);

	retIWriteRef189 = Rte_IWriteRef_RE_ComTx_PP_ComBatt1MaxTFb_CAN4_VIU_COM_0x431_ComBatt1MaxTFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_VCU1InAccpedalposition2_CAN1_VIU_MCU_0x520_VCU1InAccpedalposition2_CAN1_VIU_MCU_0x520(iWrite190);

	retIWriteRef190 = Rte_IWriteRef_RE_ComTx_PP_VCU1InAccpedalposition2_CAN1_VIU_MCU_0x520_VCU1InAccpedalposition2_CAN1_VIU_MCU_0x520();

	Rte_IWrite_RE_ComTx_PP_ComPtfmTypFb_CAN4_VIU_COM_0x432_ComPtfmTypFb_CAN4_VIU_COM_0x432(iWrite191);

	retIWriteRef191 = Rte_IWriteRef_RE_ComTx_PP_ComPtfmTypFb_CAN4_VIU_COM_0x432_ComPtfmTypFb_CAN4_VIU_COM_0x432();

	Rte_IWrite_RE_ComTx_PP_CAN1ID131CycCntr_CAN1_VIU_MCU_0x121_CAN1ID131CycCntr_CAN1_VIU_MCU_0x121(iWrite192);

	retIWriteRef192 = Rte_IWriteRef_RE_ComTx_PP_CAN1ID131CycCntr_CAN1_VIU_MCU_0x121_CAN1ID131CycCntr_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_VcuBcuCoolPumpRlyEna_CAN2_VIU_VIU_0x700_VcuBcuCoolPumpRlyEna_CAN2_VIU_VIU_0x700(iWrite193);

	retIWriteRef193 = Rte_IWriteRef_RE_ComTx_PP_VcuBcuCoolPumpRlyEna_CAN2_VIU_VIU_0x700_VcuBcuCoolPumpRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_ComIsgPwrOutFb1_CAN4_VIU_COM_0x434_ComIsgPwrOutFb1_CAN4_VIU_COM_0x434(iWrite194);

	retIWriteRef194 = Rte_IWriteRef_RE_ComTx_PP_ComIsgPwrOutFb1_CAN4_VIU_COM_0x434_ComIsgPwrOutFb1_CAN4_VIU_COM_0x434();

	Rte_IWrite_RE_ComTx_PP_ACCoolEnable_CAN1_VIU_TMS_0X513_ACCoolEnable_CAN1_VIU_TMS_0X513(iWrite195);

	retIWriteRef195 = Rte_IWriteRef_RE_ComTx_PP_ACCoolEnable_CAN1_VIU_TMS_0X513_ACCoolEnable_CAN1_VIU_TMS_0X513();

	Rte_IWrite_RE_ComTx_PP_FuQntyVcu_CAN2_VIU_VIU_0x701_FuQntyVcu_CAN2_VIU_VIU_0x701(iWrite196);

	retIWriteRef196 = Rte_IWriteRef_RE_ComTx_PP_FuQntyVcu_CAN2_VIU_VIU_0x701_FuQntyVcu_CAN2_VIU_VIU_0x701();

	Rte_IWrite_RE_ComTx_PP_Apu1DisChrgReq_CAN1_VIU_APU_0x217_Apu1DisChrgReq_CAN1_VIU_APU_0x217(iWrite197);

	retIWriteRef197 = Rte_IWriteRef_RE_ComTx_PP_Apu1DisChrgReq_CAN1_VIU_APU_0x217_Apu1DisChrgReq_CAN1_VIU_APU_0x217();

	Rte_IWrite_RE_ComTx_PP_CAN1Acp352CanStsVcu_CAN2_VIU_VIU_0x702_CAN1Acp352CanStsVcu_CAN2_VIU_VIU_0x702(iWrite198);

	retIWriteRef198 = Rte_IWriteRef_RE_ComTx_PP_CAN1Acp352CanStsVcu_CAN2_VIU_VIU_0x702_CAN1Acp352CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_VCUFuQntyS_CAN1_VIU_VIU1_0x101_VCUFuQntyS_CAN1_VIU_VIU1_0x101(iWrite199);

	retIWriteRef199 = Rte_IWriteRef_RE_ComTx_PP_VCUFuQntyS_CAN1_VIU_VIU1_0x101_VCUFuQntyS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_IsgPwrOutFb1_CAN4_VIU_TBOX_0x404_IsgPwrOutFb1_CAN4_VIU_TBOX_0x404(iWrite200);

	retIWriteRef200 = Rte_IWriteRef_RE_ComTx_PP_IsgPwrOutFb1_CAN4_VIU_TBOX_0x404_IsgPwrOutFb1_CAN4_VIU_TBOX_0x404();

	Rte_IWrite_RE_ComTx_PP_AgRollFb_CAN4_VIU_TBOX_0x406_AgRollFb_CAN4_VIU_TBOX_0x406(iWrite201);

	retIWriteRef201 = Rte_IWriteRef_RE_ComTx_PP_AgRollFb_CAN4_VIU_TBOX_0x406_AgRollFb_CAN4_VIU_TBOX_0x406();

	Rte_IWrite_RE_ComTx_PP_MotSnsrTVcu_CAN2_VIU_VIU_0x701_MotSnsrTVcu_CAN2_VIU_VIU_0x701(iWrite202);

	retIWriteRef202 = Rte_IWriteRef_RE_ComTx_PP_MotSnsrTVcu_CAN2_VIU_VIU_0x701_MotSnsrTVcu_CAN2_VIU_VIU_0x701();

	Rte_IWrite_RE_ComTx_PP_ComAgRollFb_CAN4_VIU_COM_0x436_ComAgRollFb_CAN4_VIU_COM_0x436(iWrite203);

	retIWriteRef203 = Rte_IWriteRef_RE_ComTx_PP_ComAgRollFb_CAN4_VIU_COM_0x436_ComAgRollFb_CAN4_VIU_COM_0x436();

	Rte_IWrite_RE_ComTx_PP_VcuApuCAN1StStopReq_CAN2_VIU_VIU_0x700_VcuApuCAN1StStopReq_CAN2_VIU_VIU_0x700(iWrite204);

	retIWriteRef204 = Rte_IWriteRef_RE_ComTx_PP_VcuApuCAN1StStopReq_CAN2_VIU_VIU_0x700_VcuApuCAN1StStopReq_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_VcuDrvModFb_CAN4_VIU_MDC_0x141_VcuDrvModFb_CAN4_VIU_MDC_0x141(iWrite205);

	retIWriteRef205 = Rte_IWriteRef_RE_ComTx_PP_VcuDrvModFb_CAN4_VIU_MDC_0x141_VcuDrvModFb_CAN4_VIU_MDC_0x141();

	Rte_IWrite_RE_ComTx_PP_ComTotVygFb_CAN4_VIU_COM_0x433_ComTotVygFb_CAN4_VIU_COM_0x433(iWrite206);

	retIWriteRef206 = Rte_IWriteRef_RE_ComTx_PP_ComTotVygFb_CAN4_VIU_COM_0x433_ComTotVygFb_CAN4_VIU_COM_0x433();

	Rte_IWrite_RE_ComTx_PP_VcuLvActvS_CAN1_VIU_VIU1_0x101_VcuLvActvS_CAN1_VIU_VIU1_0x101(iWrite207);

	retIWriteRef207 = Rte_IWriteRef_RE_ComTx_PP_VcuLvActvS_CAN1_VIU_VIU1_0x101_VcuLvActvS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_CAN2BMSMaiRlyClsd_CAN2_VIU_MCU_0x521_CAN2BMSMaiRlyClsd_CAN2_VIU_MCU_0x521(iWrite208);

	retIWriteRef208 = Rte_IWriteRef_RE_ComTx_PP_CAN2BMSMaiRlyClsd_CAN2_VIU_MCU_0x521_CAN2BMSMaiRlyClsd_CAN2_VIU_MCU_0x521();

	Rte_IWrite_RE_ComTx_PP_DCLOutCurLimSet_CAN1_VIU_DCL_0x321_DCLOutCurLimSet_CAN1_VIU_DCL_0x321(iWrite209);

	retIWriteRef209 = Rte_IWriteRef_RE_ComTx_PP_DCLOutCurLimSet_CAN1_VIU_DCL_0x321_DCLOutCurLimSet_CAN1_VIU_DCL_0x321();

	Rte_IWrite_RE_ComTx_PP_VcuWbs2PtWhlLocn_CAN2_VIU_WBS_0x212_VcuWbs2PtWhlLocn_CAN2_VIU_WBS_0x212(iWrite210);

	retIWriteRef210 = Rte_IWriteRef_RE_ComTx_PP_VcuWbs2PtWhlLocn_CAN2_VIU_WBS_0x212_VcuWbs2PtWhlLocn_CAN2_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_VcuBcuFltRankS_CAN1_VIU_VIU1_0x101_VcuBcuFltRankS_CAN1_VIU_VIU1_0x101(iWrite211);

	retIWriteRef211 = Rte_IWriteRef_RE_ComTx_PP_VcuBcuFltRankS_CAN1_VIU_VIU1_0x101_VcuBcuFltRankS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_ParkModFb_CAN4_VIU_TBOX_0x407_ParkModFb_CAN4_VIU_TBOX_0x407(iWrite212);

	retIWriteRef212 = Rte_IWriteRef_RE_ComTx_PP_ParkModFb_CAN4_VIU_TBOX_0x407_ParkModFb_CAN4_VIU_TBOX_0x407();

	Rte_IWrite_RE_ComTx_PP_VcuFltRankFb_CAN4_VIU_MDC_0x141_VcuFltRankFb_CAN4_VIU_MDC_0x141(iWrite213);

	retIWriteRef213 = Rte_IWriteRef_RE_ComTx_PP_VcuFltRankFb_CAN4_VIU_MDC_0x141_VcuFltRankFb_CAN4_VIU_MDC_0x141();

	Rte_IWrite_RE_ComTx_PP_Apu2StrtReq_CAN2_VIU_APU_0x217_Apu2StrtReq_CAN2_VIU_APU_0x217(iWrite214);

	retIWriteRef214 = Rte_IWriteRef_RE_ComTx_PP_Apu2StrtReq_CAN2_VIU_APU_0x217_Apu2StrtReq_CAN2_VIU_APU_0x217();

	Rte_IWrite_RE_ComTx_PP_SwVersVSN_CAN2_VIU_VIU_0x710_SwVersVSN_CAN2_VIU_VIU_0x710(iWrite215);

	retIWriteRef215 = Rte_IWriteRef_RE_ComTx_PP_SwVersVSN_CAN2_VIU_VIU_0x710_SwVersVSN_CAN2_VIU_VIU_0x710();

	Rte_IWrite_RE_ComTx_PP_ComBatt2MaxTFb_CAN4_VIU_COM_0x432_ComBatt2MaxTFb_CAN4_VIU_COM_0x432(iWrite216);

	retIWriteRef216 = Rte_IWriteRef_RE_ComTx_PP_ComBatt2MaxTFb_CAN4_VIU_COM_0x432_ComBatt2MaxTFb_CAN4_VIU_COM_0x432();

	Rte_IWrite_RE_ComTx_PP_ESTOP1_CAN1_VIU_WBS_0x212_ESTOP1_CAN1_VIU_WBS_0x212(iWrite217);

	retIWriteRef217 = Rte_IWriteRef_RE_ComTx_PP_ESTOP1_CAN1_VIU_WBS_0x212_ESTOP1_CAN1_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_Test1AccrPedV2_CAN1_VIU_MCU_0x520_Test1AccrPedV2_CAN1_VIU_MCU_0x520(iWrite218);

	retIWriteRef218 = Rte_IWriteRef_RE_ComTx_PP_Test1AccrPedV2_CAN1_VIU_MCU_0x520_Test1AccrPedV2_CAN1_VIU_MCU_0x520();

	Rte_IWrite_RE_ComTx_PP_CAN2BcuId181CanStsVcu_CAN2_VIU_VIU_0x702_CAN2BcuId181CanStsVcu_CAN2_VIU_VIU_0x702(iWrite219);

	retIWriteRef219 = Rte_IWriteRef_RE_ComTx_PP_CAN2BcuId181CanStsVcu_CAN2_VIU_VIU_0x702_CAN2BcuId181CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_PwrModFb_CAN4_VIU_TBOX_0x401_PwrModFb_CAN4_VIU_TBOX_0x401(iWrite220);

	retIWriteRef220 = Rte_IWriteRef_RE_ComTx_PP_PwrModFb_CAN4_VIU_TBOX_0x401_PwrModFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_ComEngSpdFb2_CAN4_VIU_COM_0x437_ComEngSpdFb2_CAN4_VIU_COM_0x437(iWrite221);

	retIWriteRef221 = Rte_IWriteRef_RE_ComTx_PP_ComEngSpdFb2_CAN4_VIU_COM_0x437_ComEngSpdFb2_CAN4_VIU_COM_0x437();

	Rte_IWrite_RE_ComTx_PP_EmgBrkStsFb_CAN4_VIU_MDC_0x141_EmgBrkStsFb_CAN4_VIU_MDC_0x141(iWrite222);

	retIWriteRef222 = Rte_IWriteRef_RE_ComTx_PP_EmgBrkStsFb_CAN4_VIU_MDC_0x141_EmgBrkStsFb_CAN4_VIU_MDC_0x141();

	Rte_IWrite_RE_ComTx_PP_LeLampCtrl_CAN4_VIU_TBOX_0x407_LeLampCtrl_CAN4_VIU_TBOX_0x407(iWrite223);

	retIWriteRef223 = Rte_IWriteRef_RE_ComTx_PP_LeLampCtrl_CAN4_VIU_TBOX_0x407_LeLampCtrl_CAN4_VIU_TBOX_0x407();

	Rte_IWrite_RE_ComTx_PP_ComPwrModFb_CAN4_VIU_COM_0x431_ComPwrModFb_CAN4_VIU_COM_0x431(iWrite224);

	retIWriteRef224 = Rte_IWriteRef_RE_ComTx_PP_ComPwrModFb_CAN4_VIU_COM_0x431_ComPwrModFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_ErrChrgInhbReqS_CAN1_VIU_VIU1_0x101_ErrChrgInhbReqS_CAN1_VIU_VIU1_0x101(iWrite225);

	retIWriteRef225 = Rte_IWriteRef_RE_ComTx_PP_ErrChrgInhbReqS_CAN1_VIU_VIU1_0x101_ErrChrgInhbReqS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_VCU2InAccpedalposition2_CAN2_VIU_MCU_0x520_VCU2InAccpedalposition2_CAN2_VIU_MCU_0x520(iWrite226);

	retIWriteRef226 = Rte_IWriteRef_RE_ComTx_PP_VCU2InAccpedalposition2_CAN2_VIU_MCU_0x520_VCU2InAccpedalposition2_CAN2_VIU_MCU_0x520();

	Rte_IWrite_RE_ComTx_PP_GearFb_CAN4_VIU_TBOX_0x402_GearFb_CAN4_VIU_TBOX_0x402(iWrite227);

	retIWriteRef227 = Rte_IWriteRef_RE_ComTx_PP_GearFb_CAN4_VIU_TBOX_0x402_GearFb_CAN4_VIU_TBOX_0x402();

	Rte_IWrite_RE_ComTx_PP_CAN1McuId153CanStsVcu_CAN2_VIU_VIU_0x702_CAN1McuId153CanStsVcu_CAN2_VIU_VIU_0x702(iWrite228);

	retIWriteRef228 = Rte_IWriteRef_RE_ComTx_PP_CAN1McuId153CanStsVcu_CAN2_VIU_VIU_0x702_CAN1McuId153CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_VcuPwrSysStsNrS_CAN1_VIU_VIU1_0x101_VcuPwrSysStsNrS_CAN1_VIU_VIU1_0x101(iWrite229);

	retIWriteRef229 = Rte_IWriteRef_RE_ComTx_PP_VcuPwrSysStsNrS_CAN1_VIU_VIU1_0x101_VcuPwrSysStsNrS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_ComOperModFb_CAN4_VIU_COM_0x431_ComOperModFb_CAN4_VIU_COM_0x431(iWrite230);

	retIWriteRef230 = Rte_IWriteRef_RE_ComTx_PP_ComOperModFb_CAN4_VIU_COM_0x431_ComOperModFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_VcuMcuCoolPumpRlyEna_CAN2_VIU_VIU_0x700_VcuMcuCoolPumpRlyEna_CAN2_VIU_VIU_0x700(iWrite231);

	retIWriteRef231 = Rte_IWriteRef_RE_ComTx_PP_VcuMcuCoolPumpRlyEna_CAN2_VIU_VIU_0x700_VcuMcuCoolPumpRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_VCUBcuOperModReq_CAN1_VIU_BCU_0x131_VCUBcuOperModReq_CAN1_VIU_BCU_0x131(iWrite232);

	retIWriteRef232 = Rte_IWriteRef_RE_ComTx_PP_VCUBcuOperModReq_CAN1_VIU_BCU_0x131_VCUBcuOperModReq_CAN1_VIU_BCU_0x131();

	Rte_IWrite_RE_ComTx_PP_VCU2MinPermTq_CAN2_VIU_MCU_0x121_VCU2MinPermTq_CAN2_VIU_MCU_0x121(iWrite233);

	retIWriteRef233 = Rte_IWriteRef_RE_ComTx_PP_VCU2MinPermTq_CAN2_VIU_MCU_0x121_VCU2MinPermTq_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_Cntr322_CAN1_VIU_DCH_0x322_Cntr322_CAN1_VIU_DCH_0x322(iWrite234);

	retIWriteRef234 = Rte_IWriteRef_RE_ComTx_PP_Cntr322_CAN1_VIU_DCH_0x322_Cntr322_CAN1_VIU_DCH_0x322();

	Rte_IWrite_RE_ComTx_PP_BatTarCoolTemp_CAN1_VIU_TMS_0X513_BatTarCoolTemp_CAN1_VIU_TMS_0X513(iWrite235);

	retIWriteRef235 = Rte_IWriteRef_RE_ComTx_PP_BatTarCoolTemp_CAN1_VIU_TMS_0X513_BatTarCoolTemp_CAN1_VIU_TMS_0X513();

	Rte_IWrite_RE_ComTx_PP_VcuBcuChrgStsS_CAN1_VIU_VIU1_0x101_VcuBcuChrgStsS_CAN1_VIU_VIU1_0x101(iWrite236);

	retIWriteRef236 = Rte_IWriteRef_RE_ComTx_PP_VcuBcuChrgStsS_CAN1_VIU_VIU1_0x101_VcuBcuChrgStsS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_Test1FlgGripBrk_CAN1_VIU_MCU_0x521_Test1FlgGripBrk_CAN1_VIU_MCU_0x521(iWrite237);

	retIWriteRef237 = Rte_IWriteRef_RE_ComTx_PP_Test1FlgGripBrk_CAN1_VIU_MCU_0x521_Test1FlgGripBrk_CAN1_VIU_MCU_0x521();

	Rte_IWrite_RE_ComTx_PP_VCU2MCUSpdDischrg_CAN2_VIU_MCU_0x121_VCU2MCUSpdDischrg_CAN2_VIU_MCU_0x121(iWrite238);

	retIWriteRef238 = Rte_IWriteRef_RE_ComTx_PP_VCU2MCUSpdDischrg_CAN2_VIU_MCU_0x121_VCU2MCUSpdDischrg_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_LfPFb_CAN4_VIU_TBOX_0x403_LfPFb_CAN4_VIU_TBOX_0x403(iWrite239);

	retIWriteRef239 = Rte_IWriteRef_RE_ComTx_PP_LfPFb_CAN4_VIU_TBOX_0x403_LfPFb_CAN4_VIU_TBOX_0x403();

	Rte_IWrite_RE_ComTx_PP_ComEquipModFb_CAN4_VIU_COM_0x431_ComEquipModFb_CAN4_VIU_COM_0x431(iWrite240);

	retIWriteRef240 = Rte_IWriteRef_RE_ComTx_PP_ComEquipModFb_CAN4_VIU_COM_0x431_ComEquipModFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_ComAgPitchFb_CAN4_VIU_COM_0x436_ComAgPitchFb_CAN4_VIU_COM_0x436(iWrite241);

	retIWriteRef241 = Rte_IWriteRef_RE_ComTx_PP_ComAgPitchFb_CAN4_VIU_COM_0x436_ComAgPitchFb_CAN4_VIU_COM_0x436();

	Rte_IWrite_RE_ComTx_PP_EngCooltTFb2_CAN4_VIU_TBOX_0x408_EngCooltTFb2_CAN4_VIU_TBOX_0x408(iWrite242);

	retIWriteRef242 = Rte_IWriteRef_RE_ComTx_PP_EngCooltTFb2_CAN4_VIU_TBOX_0x408_EngCooltTFb2_CAN4_VIU_TBOX_0x408();

	Rte_IWrite_RE_ComTx_PP_VcuBcuChrgModS_CAN1_VIU_VIU1_0x101_VcuBcuChrgModS_CAN1_VIU_VIU1_0x101(iWrite243);

	retIWriteRef243 = Rte_IWriteRef_RE_ComTx_PP_VcuBcuChrgModS_CAN1_VIU_VIU1_0x101_VcuBcuChrgModS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_VCU1InAccpedalposition1_CAN1_VIU_MCU_0x520_VCU1InAccpedalposition1_CAN1_VIU_MCU_0x520(iWrite244);

	retIWriteRef244 = Rte_IWriteRef_RE_ComTx_PP_VCU1InAccpedalposition1_CAN1_VIU_MCU_0x520_VCU1InAccpedalposition1_CAN1_VIU_MCU_0x520();

	Rte_IWrite_RE_ComTx_PP_Batt1SocFb_CAN4_VIU_TBOX_0x401_Batt1SocFb_CAN4_VIU_TBOX_0x401(iWrite245);

	retIWriteRef245 = Rte_IWriteRef_RE_ComTx_PP_Batt1SocFb_CAN4_VIU_TBOX_0x401_Batt1SocFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_VcuDcdcRlyEna_CAN2_VIU_VIU_0x700_VcuDcdcRlyEna_CAN2_VIU_VIU_0x700(iWrite246);

	retIWriteRef246 = Rte_IWriteRef_RE_ComTx_PP_VcuDcdcRlyEna_CAN2_VIU_VIU_0x700_VcuDcdcRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_ComBatt2SocFb_CAN4_VIU_COM_0x432_ComBatt2SocFb_CAN4_VIU_COM_0x432(iWrite247);

	retIWriteRef247 = Rte_IWriteRef_RE_ComTx_PP_ComBatt2SocFb_CAN4_VIU_COM_0x432_ComBatt2SocFb_CAN4_VIU_COM_0x432();

	Rte_IWrite_RE_ComTx_PP_ErrLvPwrDwnReqS_CAN1_VIU_VIU1_0x101_ErrLvPwrDwnReqS_CAN1_VIU_VIU1_0x101(iWrite248);

	retIWriteRef248 = Rte_IWriteRef_RE_ComTx_PP_ErrLvPwrDwnReqS_CAN1_VIU_VIU1_0x101_ErrLvPwrDwnReqS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_EpbCtrlStsInfo_CAN2_VIU_VIU_0x702_EpbCtrlStsInfo_CAN2_VIU_VIU_0x702(iWrite249);

	retIWriteRef249 = Rte_IWriteRef_RE_ComTx_PP_EpbCtrlStsInfo_CAN2_VIU_VIU_0x702_EpbCtrlStsInfo_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_VCU2PtWhlLocn_CAN2_VIU_MCU_0x121_VCU2PtWhlLocn_CAN2_VIU_MCU_0x121(iWrite250);

	retIWriteRef250 = Rte_IWriteRef_RE_ComTx_PP_VCU2PtWhlLocn_CAN2_VIU_MCU_0x121_VCU2PtWhlLocn_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_IsgMcuTFb1_CAN4_VIU_TBOX_0x404_IsgMcuTFb1_CAN4_VIU_TBOX_0x404(iWrite251);

	retIWriteRef251 = Rte_IWriteRef_RE_ComTx_PP_IsgMcuTFb1_CAN4_VIU_TBOX_0x404_IsgMcuTFb1_CAN4_VIU_TBOX_0x404();

	Rte_IWrite_RE_ComTx_PP_VCU2ReqTq_CAN2_VIU_MCU_0x121_VCU2ReqTq_CAN2_VIU_MCU_0x121(iWrite252);

	retIWriteRef252 = Rte_IWriteRef_RE_ComTx_PP_VCU2ReqTq_CAN2_VIU_MCU_0x121_VCU2ReqTq_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_CAN2Acp353CanStsVcu_CAN2_VIU_VIU_0x702_CAN2Acp353CanStsVcu_CAN2_VIU_VIU_0x702(iWrite253);

	retIWriteRef253 = Rte_IWriteRef_RE_ComTx_PP_CAN2Acp353CanStsVcu_CAN2_VIU_VIU_0x702_CAN2Acp353CanStsVcu_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_EpbCtrlStsFbS_CAN1_VIU_VIU1_0x101_EpbCtrlStsFbS_CAN1_VIU_VIU1_0x101(iWrite254);

	retIWriteRef254 = Rte_IWriteRef_RE_ComTx_PP_EpbCtrlStsFbS_CAN1_VIU_VIU1_0x101_EpbCtrlStsFbS_CAN1_VIU_VIU1_0x101();

	Rte_IWrite_RE_ComTx_PP_ComPwrLocnFb_CAN4_VIU_COM_0x431_ComPwrLocnFb_CAN4_VIU_COM_0x431(iWrite255);

	retIWriteRef255 = Rte_IWriteRef_RE_ComTx_PP_ComPwrLocnFb_CAN4_VIU_COM_0x431_ComPwrLocnFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_VcuBattSwtSt_CAN2_VIU_VIU_0x702_VcuBattSwtSt_CAN2_VIU_VIU_0x702(iWrite256);

	retIWriteRef256 = Rte_IWriteRef_RE_ComTx_PP_VcuBattSwtSt_CAN2_VIU_VIU_0x702_VcuBattSwtSt_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_VcuPosRlyEna_CAN2_VIU_VIU_0x700_VcuPosRlyEna_CAN2_VIU_VIU_0x700(iWrite257);

	retIWriteRef257 = Rte_IWriteRef_RE_ComTx_PP_VcuPosRlyEna_CAN2_VIU_VIU_0x700_VcuPosRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_VCUFltLevel_CAN1_VIU_BCU_0x131_VCUFltLevel_CAN1_VIU_BCU_0x131(iWrite258);

	retIWriteRef258 = Rte_IWriteRef_RE_ComTx_PP_VCUFltLevel_CAN1_VIU_BCU_0x131_VCUFltLevel_CAN1_VIU_BCU_0x131();

	Rte_IWrite_RE_ComTx_PP_VcuPrechrgRlyEna_CAN2_VIU_VIU_0x700_VcuPrechrgRlyEna_CAN2_VIU_VIU_0x700(iWrite259);

	retIWriteRef259 = Rte_IWriteRef_RE_ComTx_PP_VcuPrechrgRlyEna_CAN2_VIU_VIU_0x700_VcuPrechrgRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_ComLvOnFb_CAN4_VIU_COM_0x431_ComLvOnFb_CAN4_VIU_COM_0x431(iWrite260);

	retIWriteRef260 = Rte_IWriteRef_RE_ComTx_PP_ComLvOnFb_CAN4_VIU_COM_0x431_ComLvOnFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_CAN2VCUID131CycCntr_CAN2_VIU_MCU_0x121_CAN2VCUID131CycCntr_CAN2_VIU_MCU_0x121(iWrite261);

	retIWriteRef261 = Rte_IWriteRef_RE_ComTx_PP_CAN2VCUID131CycCntr_CAN2_VIU_MCU_0x121_CAN2VCUID131CycCntr_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_Apu2PwrReq_CAN2_VIU_APU_0x217_Apu2PwrReq_CAN2_VIU_APU_0x217(iWrite262);

	retIWriteRef262 = Rte_IWriteRef_RE_ComTx_PP_Apu2PwrReq_CAN2_VIU_APU_0x217_Apu2PwrReq_CAN2_VIU_APU_0x217();

	Rte_IWrite_RE_ComTx_PP_CAN1Cntr212_CAN1_VIU_WBS_0x212_CAN1Cntr212_CAN1_VIU_WBS_0x212(iWrite263);

	retIWriteRef263 = Rte_IWriteRef_RE_ComTx_PP_CAN1Cntr212_CAN1_VIU_WBS_0x212_CAN1Cntr212_CAN1_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_VcuTurnLampSts_CAN2_VIU_VIU_0x700_VcuTurnLampSts_CAN2_VIU_VIU_0x700(iWrite264);

	retIWriteRef264 = Rte_IWriteRef_RE_ComTx_PP_VcuTurnLampSts_CAN2_VIU_VIU_0x700_VcuTurnLampSts_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_Prak1PressureLevel_CAN1_VIU_WBS_0x212_Prak1PressureLevel_CAN1_VIU_WBS_0x212(iWrite265);

	retIWriteRef265 = Rte_IWriteRef_RE_ComTx_PP_Prak1PressureLevel_CAN1_VIU_WBS_0x212_Prak1PressureLevel_CAN1_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_ComEngCooltTFb2_CAN4_VIU_COM_0x437_ComEngCooltTFb2_CAN4_VIU_COM_0x437(iWrite266);

	retIWriteRef266 = Rte_IWriteRef_RE_ComTx_PP_ComEngCooltTFb2_CAN4_VIU_COM_0x437_ComEngCooltTFb2_CAN4_VIU_COM_0x437();

	Rte_IWrite_RE_ComTx_PP_VcuMdcRadarRlyEna_CAN2_VIU_VIU_0x700_VcuMdcRadarRlyEna_CAN2_VIU_VIU_0x700(iWrite267);

	retIWriteRef267 = Rte_IWriteRef_RE_ComTx_PP_VcuMdcRadarRlyEna_CAN2_VIU_VIU_0x700_VcuMdcRadarRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_HvOnFb_CAN4_VIU_TBOX_0x401_HvOnFb_CAN4_VIU_TBOX_0x401(iWrite268);

	retIWriteRef268 = Rte_IWriteRef_RE_ComTx_PP_HvOnFb_CAN4_VIU_TBOX_0x401_HvOnFb_CAN4_VIU_TBOX_0x401();

	Rte_IWrite_RE_ComTx_PP_VCU1ElecMotOperMod_CAN1_VIU_MCU_0x121_VCU1ElecMotOperMod_CAN1_VIU_MCU_0x121(iWrite269);

	retIWriteRef269 = Rte_IWriteRef_RE_ComTx_PP_VCU1ElecMotOperMod_CAN1_VIU_MCU_0x121_VCU1ElecMotOperMod_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_VCU2MCUPwrDwn_CAN2_VIU_MCU_0x121_VCU2MCUPwrDwn_CAN2_VIU_MCU_0x121(iWrite270);

	retIWriteRef270 = Rte_IWriteRef_RE_ComTx_PP_VCU2MCUPwrDwn_CAN2_VIU_MCU_0x121_VCU2MCUPwrDwn_CAN2_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_ONIGNReady1_CAN1_VIU_WBS_0x212_ONIGNReady1_CAN1_VIU_WBS_0x212(iWrite271);

	retIWriteRef271 = Rte_IWriteRef_RE_ComTx_PP_ONIGNReady1_CAN1_VIU_WBS_0x212_ONIGNReady1_CAN1_VIU_WBS_0x212();

	Rte_IWrite_RE_ComTx_PP_ComBarrModFb_CAN4_VIU_COM_0x431_ComBarrModFb_CAN4_VIU_COM_0x431(iWrite272);

	retIWriteRef272 = Rte_IWriteRef_RE_ComTx_PP_ComBarrModFb_CAN4_VIU_COM_0x431_ComBarrModFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_VcuEPBCtrl_CAN2_VIU_VIU_0x700_VcuEPBCtrl_CAN2_VIU_VIU_0x700(iWrite273);

	retIWriteRef273 = Rte_IWriteRef_RE_ComTx_PP_VcuEPBCtrl_CAN2_VIU_VIU_0x700_VcuEPBCtrl_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_VcuAcpRlyEna_CAN2_VIU_VIU_0x700_VcuAcpRlyEna_CAN2_VIU_VIU_0x700(iWrite274);

	retIWriteRef274 = Rte_IWriteRef_RE_ComTx_PP_VcuAcpRlyEna_CAN2_VIU_VIU_0x700_VcuAcpRlyEna_CAN2_VIU_VIU_0x700();

	Rte_IWrite_RE_ComTx_PP_AgPitchFb_CAN4_VIU_TBOX_0x406_AgPitchFb_CAN4_VIU_TBOX_0x406(iWrite275);

	retIWriteRef275 = Rte_IWriteRef_RE_ComTx_PP_AgPitchFb_CAN4_VIU_TBOX_0x406_AgPitchFb_CAN4_VIU_TBOX_0x406();

	Rte_IWrite_RE_ComTx_PP_VCU1ReqTq_CAN1_VIU_MCU_0x121_VCU1ReqTq_CAN1_VIU_MCU_0x121(iWrite276);

	retIWriteRef276 = Rte_IWriteRef_RE_ComTx_PP_VCU1ReqTq_CAN1_VIU_MCU_0x121_VCU1ReqTq_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_VCU1ReqSpd_CAN1_VIU_MCU_0x121_VCU1ReqSpd_CAN1_VIU_MCU_0x121(iWrite277);

	retIWriteRef277 = Rte_IWriteRef_RE_ComTx_PP_VCU1ReqSpd_CAN1_VIU_MCU_0x121_VCU1ReqSpd_CAN1_VIU_MCU_0x121();

	Rte_IWrite_RE_ComTx_PP_VCUCycCntr_CAN1_VIU_BCU_0x131_VCUCycCntr_CAN1_VIU_BCU_0x131(iWrite278);

	retIWriteRef278 = Rte_IWriteRef_RE_ComTx_PP_VCUCycCntr_CAN1_VIU_BCU_0x131_VCUCycCntr_CAN1_VIU_BCU_0x131();

	Rte_IWrite_RE_ComTx_PP_ComEmgyStopOnFb_CAN4_VIU_COM_0x431_ComEmgyStopOnFb_CAN4_VIU_COM_0x431(iWrite279);

	retIWriteRef279 = Rte_IWriteRef_RE_ComTx_PP_ComEmgyStopOnFb_CAN4_VIU_COM_0x431_ComEmgyStopOnFb_CAN4_VIU_COM_0x431();

	Rte_IWrite_RE_ComTx_PP_ComImuSysCalModSts_CAN4_VIU_COM_0x432_ComImuSysCalModSts_CAN4_VIU_COM_0x432(iWrite280);

	retIWriteRef280 = Rte_IWriteRef_RE_ComTx_PP_ComImuSysCalModSts_CAN4_VIU_COM_0x432_ComImuSysCalModSts_CAN4_VIU_COM_0x432();

	Rte_IWrite_RE_ComTx_PP_IsgMotTFb1_CAN4_VIU_TBOX_0x404_IsgMotTFb1_CAN4_VIU_TBOX_0x404(iWrite281);

	retIWriteRef281 = Rte_IWriteRef_RE_ComTx_PP_IsgMotTFb1_CAN4_VIU_TBOX_0x404_IsgMotTFb1_CAN4_VIU_TBOX_0x404();

	Rte_IWrite_RE_ComTx_PP_DCLEnableCmd_CAN1_VIU_DCL_0x321_DCLEnableCmd_CAN1_VIU_DCL_0x321(iWrite282);

	retIWriteRef282 = Rte_IWriteRef_RE_ComTx_PP_DCLEnableCmd_CAN1_VIU_DCL_0x321_DCLEnableCmd_CAN1_VIU_DCL_0x321();

	Rte_IWrite_RE_ComTx_PP_LeBattStsFb_CAN4_VIU_TBOX_0x407_LeBattStsFb_CAN4_VIU_TBOX_0x407(iWrite283);

	retIWriteRef283 = Rte_IWriteRef_RE_ComTx_PP_LeBattStsFb_CAN4_VIU_TBOX_0x407_LeBattStsFb_CAN4_VIU_TBOX_0x407();

	Rte_IWrite_RE_ComTx_PP_VcuWhlCmbnMod_CAN2_VIU_VIU_0x702_VcuWhlCmbnMod_CAN2_VIU_VIU_0x702(iWrite284);

	retIWriteRef284 = Rte_IWriteRef_RE_ComTx_PP_VcuWhlCmbnMod_CAN2_VIU_VIU_0x702_VcuWhlCmbnMod_CAN2_VIU_VIU_0x702();

	Rte_IWrite_RE_ComTx_PP_ImuSysCalModSts_CAN4_VIU_TBOX_0x402_ImuSysCalModSts_CAN4_VIU_TBOX_0x402(iWrite285);

	retIWriteRef285 = Rte_IWriteRef_RE_ComTx_PP_ImuSysCalModSts_CAN4_VIU_TBOX_0x402_ImuSysCalModSts_CAN4_VIU_TBOX_0x402();

	/*  -------------------------------------- Trigger Interface ---------------------------------  */

	/*  -------------------------------------- Mode Management -----------------------------------  */
	e286 = Rte_Switch_PP_A2B_ApuCAN2StReq_ApuCAN2StReq( COM_DISABLE_NONE);
	e287 = Rte_Switch_PP_A2B_ApuCAN1StReq_ApuCAN1StReq( COM_DISABLE_NONE);
	e288 = Rte_Switch_PP_A2B_CANStReq_CANStReq( COM_DISABLE_NONE);

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

