#include "XT_DAC_Audio.h"

//______________________________________________________________________________
//-------------------------------VOLUME----------------------------------
//_______________________________________________________________________________

#define ANCOR_VOL 127 
#define SHORT_VOL 127 
#define LONG_VOL 127 
#define GUN_VOL 127 
#define AAGUN_VOL 127 
#define LONG_VOL 127 
#define ALARM1_VOL 127 
#define ALARM2_VOL 127 
#define BELL_VOL 127 
#define SEAGULL_VOL 127 
#define AMBIENT_VOL 127 
#define TWELVE1_VOL 127 
#define TWELVE2_VOL 127 
#define TWELVE3_VOL 127 
#define ELEVEN1_VOL 127 
#define ELEVEN2_VOL 127 
#define ELEVEN3_VOL 127 
#define ELEVEN4_VOL 127 
#define ELEVEN5_VOL 127 
#define ELEVEN6_VOL 127 
#define ELEVEN7_VOL 127 
#define ELEVEN8_VOL 127 
//______________________________________________________________________________
//-------------------------------COMMUNICATION----------------------------------
//_______________________________________________________________________________

#define NUM_OF_CHL 8 
#define NUM_OF_AVG 1  
#define SBUS_COMMUNICATION
boolean sbusInverted = false;
#define MULTISWITCH_TYPE1
#define MULTI_1_CH 16
#define UP1_MIN 1550
#define UP1_MAX 1650
#define UP2_MIN 1650
#define UP2_MAX 1780
#define UP3_MIN 1780
#define UP3_MAX 1900
#define UP4_MIN 1900
#define UP4_MAX 2100
#define NEUTRAL 1485
#define DOWN1_MIN 1300
#define DOWN1_MAX 1485
#define DOWN2_MIN 1200
#define DOWN2_MAX 1300
#define DOWN3_MIN 1100
#define DOWN3_MAX 1200
#define DOWN4_MIN 900
#define DOWN4_MAX 1100


//______________________________________________________________________________
//---------------------------------ENGINE SOUND CONFIG -------------------------
//_______________________________________________________________________________

volatile int engineIdleVolumePercentage = 40;
volatile int fullThrottleVolumePercentage = 100;
volatile int engineRevVolumePercentage = 50;
volatile const uint16_t revSwitchPoint = 150;
volatile const uint16_t slowSwitchPoint = 50;
volatile const uint16_t idleEndPoint = 400;
volatile const uint16_t idleVolumeProportionPercentage = 80;
#include "sounds/boat/Small_Diesel_Start.h"
#include "sounds/boat/smal diesel idle.h"
#define ENGINE_STOP
#include "sounds/boat/Small_Diesel_Stop.h"
volatile int startVolumePercentage = 100;
volatile int idleVolumePercentage = 100;
volatile int stopVolumePercentage = 100;
volatile int starterVolumePercentage = 100;
volatile int starterStopVolumePercentage = 100;
volatile int slowVolumePercentage  = 100;
volatile int revVolumePercentage = 100;
uint32_t MAX_RPM_PERCENTAGE =250;
uint32_t MAX_REV_RPM_PERCENTAGE =200;
const int8_t acc =1;
const int8_t dec =1;

//______________________________________________________________________________
//------------------------------MIXING CONFIG------------------------------------
//_______________________________________________________________________________

const uint16_t valreverse = 1250;

const uint8_t linearPercentage = 35;
const uint8_t modPercentage = 50;

const uint8_t linearPercentageRev = 25;
const uint8_t modPercentageRev = 50;

const boolean STERRING_MOD = false;
const boolean LINEAR = false;
const boolean LINEAR_REV = false;
const boolean ESC_INV = true;
#define MODE_FORWARD_1
#define MODE_BACKWARD_1

//______________________________________________________________________________
//---------------------------------CHANNEL CONFIG--------------------------------
//_______________________________________________________________________________


const int16_t esc1PulseSpan = 500;
const int16_t esc2PulseSpan = 500;
const int16_t esc3PulseSpan = 500;

const uint16_t pulseNeutral = 30;
const uint16_t pulseSpan = 500;

const uint8_t thrustCh = 3;
const uint8_t ElCh= 2;
const uint8_t AilCh = 1; 
const uint8_t steeringCh = 4; 
const boolean STERRING_DIR = false;
const boolean CH1_ENABLE = true;   
const boolean CH2_ENABLE = true;   
const boolean CH3_ENABLE = true;   
const boolean CH4_ENABLE = true;   
const boolean CH5_ENABLE = false;   
const boolean CH6_ENABLE = false;   
const boolean CH7_ENABLE = false;   
const boolean CH8_ENABLE = false;   
const boolean CH9_ENABLE = false;   
const boolean CH10_ENABLE = false;   
const boolean CH11_ENABLE = false;   
const boolean CH12_ENABLE = false;   
const boolean CH13_ENABLE = false;   
const boolean CH14_ENABLE = false;   
const boolean CH15_ENABLE = false;   
const boolean CH16_ENABLE = false;   

//______________________________________________________________________________
//---------------------------------ENGINE ON/OFF---------------------------------
//_______________________________________________________________________________

const boolean engineManualOnOff = true;
const uint8_t chManualOnOff = 12;
const uint32_t enginetimeoff = 15000;
const uint32_t lightstimeoff = 10000;
const uint32_t motortimeoff = 15000;

//______________________________________________________________________________
//-------------------------------VOLUME CONTROL----------------------------------
//_______________________________________________________________________________

#define VOLUME_CONTROLE
const uint16_t MIN_VOLUME =50;
const uint16_t INTER_VOLUME =100;
const uint16_t MAX_VOLUME =150;
#define VOLUMECH 0

const uint8_t StartSound = 0; 
#include "sounds/boat/AuxSound/Start.h"
XT_Wav_Class Start(Start_Data);
//______________________________________________________________________________
//---------------------------------ACTION1---------------------------------------
//_______________________________________________________________________________

#define ONTIME_1 250
#define OFFTIME_1 250
#define ACTION1_ENABLE
#define ACTION1_SOUND
#define ACTION1B_RING
#define ACTION1C_ALARM
#define ACTION1CH 6
#define ACTION1ON 3
#define ACTION1OFF 2
#define ACTION1NA 1
#define ACTION1_MULTI
#define ACTION1_SWITCH_NO_REV
#define ACTION1_SWITCH1 1
#define ACTION1_SWITCH2 2
#define ACTION1_SWITCH3 3
#define ACTION1_SWITCH4 96
#define ACTION1_SWITCH5 99
#define ACTION1_END_SWITCH 4
/*
#define ACTION1_ENABLE
#define MULTI_ACTION_1
#define ACTION1ON 1
#define ACTION1OFF 0
#define ACTION1NA 
#define MULTI3_UP_MOM
#define ACT1_MULTISWITCH_UP1
*/
//______________________________________________________________________________
//---------------------------------ACTION2---------------------------------------
//_______________________________________________________________________________
#include "sounds/boat/AuxSound/ancre.h"
XT_Wav_Class Ancre(Ancre_Data);
#define ANCOR_SPEED_UP  1250
#define ANCOR_SPEED_DOWN  1750

//______________________________________________________________________________
//---------------------------------ACTION3---------------------------------------
//_______________________________________________________________________________
#include "sounds/boat/AuxSound/Bell.h"
XT_Wav_Class Bell(Bel_Data);
#include "sounds/boat/AuxSound/Short_blast2.h"
XT_Wav_Class Short_blast(Short_Data);
#include "sounds/boat/AuxSound/Long_blast2.h"
XT_Wav_Class Long_blast(LongB_Data);

//______________________________________________________________________________
//---------------------------------ACTION4---------------------------------------
//_______________________________________________________________________________

//______________________________________________________________________________
//---------------------------------ACTION5---------------------------------------
//_______________________________________________________________________________

//______________________________________________________________________________
//---------------------------------ACTION6---------------------------------------
//_______________________________________________________________________________
#define SEQ6_DURATION 1000
#define SEQ6B_DURATION 1000
#include "sounds/boat/AuxSound/AAGun_Large.h"
XT_Wav_Class AAGun(AAGun_Data);

//______________________________________________________________________________
//---------------------------------ACTION7---------------------------------------
//_______________________________________________________________________________
#define SEQ7_DURATION 1000
#define SEQ7B_DURATION 1000
#include "sounds/boat/AuxSound/Gun.h"
XT_Wav_Class Gun(Gun_Data);

//______________________________________________________________________________
//---------------------------------ACTION8---------------------------------------
//_______________________________________________________________________________
#include "sounds/boat/AuxSound/Alarm.h"
XT_Wav_Class Alarm(Alarm_Data);
#include "sounds/boat/AuxSound/Ring.h"
XT_Wav_Class Ring(Ring_Data);
#define ONTIME_8 250
#define OFFTIME_8 250


//______________________________________________________________________________
//---------------------------------ACTION9---------------------------------------
//_______________________________________________________________________________
#define ONTIME_9 250
#define OFFTIME_9 250

volatile boolean AutoLight =true;

//______________________________________________________________________________
//---------------------------------ACTION10---------------------------------------
//_______________________________________________________________________________
#define ONTIME_10 250
#define OFFTIME_10 250
//______________________________________________________________________________
//---------------------------------ACTION11---------------------------------------
//_______________________________________________________________________________
#include "sounds/boat/AuxSound/Eleven_Perso_1.h"
XT_Wav_Class eleven1(eleven1_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_2.h"
XT_Wav_Class eleven2(eleven2_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_3.h"
XT_Wav_Class eleven3(eleven3_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_4.h"
XT_Wav_Class eleven4(eleven4_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_5.h"
XT_Wav_Class eleven5(eleven5_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_6.h"
XT_Wav_Class eleven6(eleven6_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_7.h"
XT_Wav_Class eleven7(eleven7_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_8.h"
XT_Wav_Class eleven8(eleven8_Data);
#include "sounds/boat/AuxSound/Seagull.h"
XT_Wav_Class Seagull(Seagull_Data);
#include "sounds/boat/AuxSound/Ambient.h"
XT_Wav_Class Ambient(Ambient_Data);


#define ACTION11_ENABLE
#define ACTION11A_ENABLE
#define ACTION11ACH 0
#define ACTION11A_DOWN_MULTISWITCH
#define MULTI1_DOWN_MOM
#define ACT11A_DOWN_MULTISWITCH_DOWN1
#define ACTION11A_UP_MULTISWITCH
#define MULTI1_UP_MOM
#define ACT11A_UP_MULTISWITCH_UP1
#define ACTION11A_HIGH_PERSO_1
#define ACTION11A_HIGH_REPEAT 0
#define ACTION11A_LOW_PERSO_2
#define ACTION11A_LOW_REPEAT 0
#define ACTION11B_ENABLE
#define ACTION11BCH 0
#define ACTION11B_DOWN_MULTISWITCH
#define MULTI2_DOWN_MOM
#define ACT11B_DOWN_MULTISWITCH_DOWN2
#define ACTION11B_UP_MULTISWITCH
#define MULTI2_UP_MOM
#define ACT11B_UP_MULTISWITCH_UP2
#define ACTION11B_HIGH_PERSO_3
#define ACTION11B_HIGH_REPEAT 0
#define ACTION11B_LOW_AAGUN
#define ACTION11B_LOW_REPEAT 0
#define ACTION11C_ENABLE
#define ACTION11CCH 0
#define ACTION11C_DOWN_MULTISWITCH
#define MULTI3_DOWN_PERM
#define ACT11C_DOWN_MULTISWITCH_DOWN3
#define ACTION11C_UP_MULTISWITCH
#define MULTI3_UP_MOM
#define ACT11C_UP_MULTISWITCH_UP3
#define ACTION11C_HIGH_SEAGULL
#define ACTION11C_HIGH_REPEAT 0
#define ACTION11C_LOW_AMBIENT
#define ACTION11C_LOW_REPEAT_FOREVER

/*
#define ACTION11_ENABLE
#define ACTION11A_ENABLE
#define ACTION11ACH 0
#define ACTION11A_DOWN_MULTISWITCH
#define MULTI2_UP_MOM
#define ACT11A_DOWN_MULTISWITCH_UP2
#define ACTION11A_UP_MULTISWITCH
#define MULTI1_UP_MOM
#define ACT11A_UP_MULTISWITCH_UP1
#define ACTION11A_HIGH_AAGUN
#define ACTION11A_HIGH_REPEAT 0
#define ACTION11A_LOW_PERSO_2
#define ACTION11A_LOW_REPEAT 0
#define ACTION11B_ENABLE
#define ACTION11BCH 0
#define ACTION11B_DOWN_MULTISWITCH
#define MULTI4_UP_MOM
#define ACT11B_DOWN_MULTISWITCH_UP4
#define ACTION11B_UP_MULTISWITCH
#define MULTI3_UP_MOM
#define ACT11B_UP_MULTISWITCH_UP3
#define ACTION11B_HIGH_PERSO_3
#define ACTION11B_HIGH_REPEAT 0
#define ACTION11B_LOW_SEAGULL
#define ACTION11B_LOW_REPEAT 0
*/


/*
#define ACTION11_ENABLE
#define ACTION11A_ENABLE
#define ACTION11ACH 0
#define MULTI1_UP_PERM
#define ACT11A_DOWN_MULTISWITCH_UP1
#define MULTI1_DOWN_PERM
#define ACT11A_UP_MULTISWITCH_DOWN1

#define ACTION11B_ENABLE
#define ACTION11BCH 0
#define MULTI2_UP_PERM
#define ACT11B_DOWN_MULTISWITCH_UP2
#define MULTI2_DOWN_PERM
#define ACT11B_UP_MULTISWITCH_DOWN2
*/

/*
#define ACTION11_ENABLE
#define ACTION11A_ENABLE
#define ACTION11ACH 0
#define MULTI2_UP_PERM
#define ACT11A_DOWN_MULTISWITCH_UP2
#define MULTI1_UP_PERM
#define ACT11A_UP_MULTISWITCH_UP1


*/
//______________________________________________________________________________
//---------------------------------ACTION12---------------------------------------
//_______________________________________________________________________________
#include "sounds/boat/AuxSound/Twelve_Perso_1.h"
XT_Wav_Class twelve1(twelve1_Data);
#include "sounds/boat/AuxSound/Twelve_Perso_2.h"
XT_Wav_Class twelve2(twelve2_Data);
#include "sounds/boat/AuxSound/Twelve_Perso_3.h"
XT_Wav_Class twelve3(twelve3_Data);
#define SERVO_MIN 500
#define SERVO_MAX 2400
#define ACTION12_ENABLE
#define ACTION12CH 11
#define ACTION12ON 3
#define ACTION12NA 2
#define ACTION12OFF 1
#define ACTION_SERVO1 99
#define ACTION_SERVO2 99
#define ACTION_SERVO3 99
#define ACTION_SERVO4 99
#define ACTION_SERVO5 99
#define ACTION_SERVO6 99
#define ACT12_ACT1_SWITCH
int16_t SERVO_START[7] {1500,1450,1450,1450,1450,1450,1450}; 
//______________________________________________________________________________
//---------------------------------SEQUENCE---------------------------------------
//_______________________________________________________________________________
#define SEQ1_DURATION 1000
#define SEQ1B_DURATION 1000

#define ONTIME_SEQ1_PART1 250
#define OFFTIME_SEQ1_PART1 250
#define ONTIME_SEQ1_PART2 250
#define OFFTIME_SEQ1_PART2 250
#define ONTIME_SEQ1_PART3 250
#define OFFTIME_SEQ1_PART3 250
#define ONTIME_SEQ1_PART4 250
#define OFFTIME_SEQ1_PART4 250

#define ONTIME_SEQ1B_PART1 250
#define OFFTIME_SEQ1B_PART1 250
#define ONTIME_SEQ1B_PART2 250
#define OFFTIME_SEQ1B_PART2 250
#define ONTIME_SEQ1B_PART3 250
#define OFFTIME_SEQ1B_PART3 250
#define ONTIME_SEQ1B_PART4 250
#define OFFTIME_SEQ1B_PART4 250

#define SEQ2_DURATION 1000
#define SEQ2B_DURATION 1000

#define ONTIME_SEQ2_PART1 250
#define OFFTIME_SEQ2_PART1 250
#define ONTIME_SEQ2_PART2 250
#define OFFTIME_SEQ2_PART2 250
#define ONTIME_SEQ2_PART3 250
#define OFFTIME_SEQ2_PART3 250
#define ONTIME_SEQ2_PART4 250
#define OFFTIME_SEQ2_PART4 250

#define ONTIME_SEQ2B_PART1 250
#define OFFTIME_SEQ2B_PART1 250
#define ONTIME_SEQ2B_PART2 250
#define OFFTIME_SEQ2B_PART2 250
#define ONTIME_SEQ2B_PART3 250
#define OFFTIME_SEQ2B_PART3 250
#define ONTIME_SEQ2B_PART4 250
#define OFFTIME_SEQ2B_PART4 250
