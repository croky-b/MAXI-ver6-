//
// =======================================================================================================
// SOUND
// =======================================================================================================
//




void triggerSound()
{
  if (Init)
  {

    Long_blast.Volume = LONG_VOL ;
    Short_blast.Volume = SHORT_VOL ;
    Bell.Volume = BELL_VOL ;
    Ancre.Volume = ANCOR_VOL ;
    Ambient.Volume = AMBIENT_VOL ;
    Seagull.Volume = SEAGULL_VOL ;
    Gun.Volume = GUN_VOL ;
    AAGun.Volume = AAGUN_VOL;
    Ring.Volume = ALARM2_VOL;
    Alarm.Volume = ALARM1_VOL;
    eleven1.Volume = ELEVEN1_VOL;
    eleven2.Volume = ELEVEN2_VOL;
    eleven3.Volume = ELEVEN3_VOL;
    eleven4.Volume = ELEVEN4_VOL;
    eleven5.Volume = ELEVEN5_VOL;
    eleven6.Volume = ELEVEN6_VOL;
    eleven7.Volume = ELEVEN7_VOL;
    eleven8.Volume = ELEVEN8_VOL;
    twelve1.Volume = TWELVE1_VOL;
    twelve2.Volume = TWELVE2_VOL;
    twelve3.Volume = TWELVE3_VOL;

    //
    // =======================================================================================================
    // STANDARD SOUND
    // =======================================================================================================
    //

    if (Seq6SoundPart1OnOff) {

#ifdef SEQ6_PART1_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }
      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ6_PART1_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ6_PART1_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ6_PART1_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ6_PART1_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ6_PART1_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ6_PART1_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ6_PART1_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ6_PART1_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }


    if (Seq6SoundPart2OnOff) {

#ifdef SEQ6_PART2_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }
      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ6_PART2_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;

#endif

#ifdef SEQ6_PART2_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ6_PART2_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ6_PART2_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ6_PART2_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ6_PART2_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ6_PART2_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ6_PART2_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq6SoundPart3OnOff) {

#ifdef SEQ6_PART3_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ6_PART3_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }
      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ6_PART3_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ6_PART3_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ6_PART3_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ6_PART3_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ6_PART3_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ6_PART3_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ6_PART3_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq6SoundPart4OnOff) {

#ifdef SEQ6_PART4_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }
#endif

#ifdef SEQ6_PART4_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }
#endif

#ifdef SEQ6_PART4_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ6_PART4_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ6_PART4_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ6_PART4_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ6_PART4_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ6_PART4_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ6_PART4_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq7SoundPart1OnOff) {

#ifdef SEQ7_PART1_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ7_PART1_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ7_PART1_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ7_PART1_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ7_PART1_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ7_PART1_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ7_PART1_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ7_PART1_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ7_PART1_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }


    if (Seq7SoundPart2OnOff) {

#ifdef SEQ7_PART2_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ7_PART2_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ7_PART2_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ7_PART2_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ7_PART2_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ7_PART2_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ7_PART2_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ7_PART2_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ7_PART2_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq7SoundPart3OnOff) {

#ifdef SEQ7_PART3_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ7_PART3_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ7_PART3_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ7_PART3_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ7_PART3_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ7_PART3_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ7_PART3_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ7_PART3_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ7_PART3_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq7SoundPart4OnOff) {

#ifdef SEQ7_PART4_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ7_PART4_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ7_PART4_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ7_PART4_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ7_PART4_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ7_PART4_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ7_PART4_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ7_PART4_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ7_PART4_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }


    if (Seq1SoundPart1OnOff) {

#ifdef SEQ1_PART1_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }
      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ1_PART2_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ1_PART1_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ1_PART1_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ1_PART1_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ1_PART1_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ1_PART1_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ1_PART1_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ1_PART1_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }


    if (Seq1SoundPart2OnOff) {

#ifdef SEQ1_PART2_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }
      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ1_PART2_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;

#endif

#ifdef SEQ1_PART2_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ1_PART2_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ1_PART2_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ1_PART2_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ1_PART2_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ1_PART2_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ1_PART2_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq1SoundPart3OnOff) {

#ifdef SEQ1_PART3_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ1_PART3_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }
      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ1_PART3_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ1_PART3_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ1_PART3_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ1_PART3_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ1_PART3_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ1_PART3_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ1_PART3_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq1SoundPart4OnOff) {

#ifdef SEQ1_PART4_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }
#endif

#ifdef SEQ1_PART4_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }
#endif

#ifdef SEQ1_PART4_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ1_PART4_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ1_PART4_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ1_PART4_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ1_PART4_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ1_PART4_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ1_PART4_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq2SoundPart1OnOff) {

#ifdef SEQ2_PART1_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ2_PART2_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ2_PART1_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ2_PART1_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ2_PART1_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ2_PART1_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ2_PART1_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ2_PART1_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ2_PART1_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }


    if (Seq2SoundPart2OnOff) {

#ifdef SEQ2_PART2_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ2_PART2_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ2_PART2_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ2_PART2_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ2_PART2_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ2_PART2_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ2_PART2_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ2_PART2_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ2_PART2_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq2SoundPart3OnOff) {

#ifdef SEQ2_PART3_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ2_PART3_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ2_PART3_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ2_PART3_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ2_PART3_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ2_PART3_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ2_PART3_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ2_PART3_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ2_PART3_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq2SoundPart4OnOff) {

#ifdef SEQ2_PART4_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ2_PART4_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ2_PART4_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ2_PART4_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ2_PART4_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ2_PART4_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ2_PART4_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ2_PART4_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ2_PART4_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }
    if (Seq60SoundPart1OnOff) {

#ifdef SEQ6B_PART1_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }
      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ6B_PART1_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ6B_PART1_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ6B_PART1_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ6B_PART1_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ6B_PART1_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ6B_PART1_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ6B_PART1_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ6B_PART1_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }


    if (Seq60SoundPart2OnOff) {

#ifdef SEQ6B_PART2_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }
      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ6B_PART2_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;

#endif

#ifdef SEQ6B_PART2_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ6B_PART2_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ6B_PART2_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ6B_PART2_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ6B_PART2_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ6B_PART2_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ6B_PART2_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq60SoundPart3OnOff) {

#ifdef SEQ6B_PART3_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ6B_PART3_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }
      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ6B_PART3_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ6B_PART3_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ6B_PART3_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ6B_PART3_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ6B_PART3_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ6B_PART3_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ6B_PART3_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq60SoundPart4OnOff) {

#ifdef SEQ6B_PART4_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }
#endif

#ifdef SEQ6B_PART4_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }
#endif

#ifdef SEQ6B_PART4_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ6B_PART4_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ6B_PART4_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ6B_PART4_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ6B_PART4_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ6B_PART4_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ6B_PART4_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq70SoundPart1OnOff) {

#ifdef SEQ7B_PART1_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ7B_PART1_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ7B_PART1_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ7B_PART1_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ7B_PART1_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ7B_PART1_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ7B_PART1_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ7B_PART1_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ7B_PART1_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }


    if (Seq70SoundPart2OnOff) {

#ifdef SEQ7B_PART2_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ7B_PART2_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ7B_PART2_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ7B_PART2_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ7B_PART2_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ7B_PART2_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ7B_PART2_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ7B_PART2_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ7B_PART2_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq70SoundPart3OnOff) {

#ifdef SEQ7B_PART3_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ7B_PART3_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ7B_PART3_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ7B_PART3_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ7B_PART3_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ7B_PART3_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ7B_PART3_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ7B_PART3_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ7B_PART3_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq70SoundPart4OnOff) {

#ifdef SEQ7B_PART4_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ7B_PART4_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ7B_PART4_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ7B_PART4_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ7B_PART4_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ7B_PART4_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ7B_PART4_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ7B_PART4_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ7B_PART4_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }


    if (Seq10SoundPart1OnOff) {

#ifdef SEQ1B_PART1_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }
      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ1B_PART2_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ1B_PART1_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ1B_PART1_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ1B_PART1_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ1B_PART1_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ1B_PART1_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ1B_PART1_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ1B_PART1_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }


    if (Seq10SoundPart2OnOff) {

#ifdef SEQ1B_PART2_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }
      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ1B_PART2_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;

#endif

#ifdef SEQ1B_PART2_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ1B_PART2_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ1B_PART2_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ1B_PART2_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ1B_PART2_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ1B_PART2_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ1B_PART2_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq10SoundPart3OnOff) {

#ifdef SEQ1B_PART3_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ1B_PART3_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }
      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ1B_PART3_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ1B_PART3_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ1B_PART3_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ1B_PART3_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ1B_PART3_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ1B_PART3_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ1B_PART3_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq10SoundPart4OnOff) {

#ifdef SEQ1B_PART4_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }
#endif

#ifdef SEQ1B_PART4_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }
#endif

#ifdef SEQ1B_PART4_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ1B_PART4_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ1B_PART4_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ1B_PART4_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ1B_PART4_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ1B_PART4_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ1B_PART4_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq20SoundPart1OnOff) {

#ifdef SEQ2B_PART1_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ2B_PART2_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ2B_PART1_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ2B_PART1_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ2B_PART1_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ2B_PART1_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ2B_PART1_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ2B_PART1_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ2B_PART1_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }


    if (Seq20SoundPart2OnOff) {

#ifdef SEQ2B_PART2_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ2B_PART2_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ2B_PART2_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ2B_PART2_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ2B_PART2_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ2B_PART2_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ2B_PART2_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ2B_PART2_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ2B_PART2_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq20SoundPart3OnOff) {

#ifdef SEQ2B_PART3_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ2B_PART3_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ2B_PART3_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ2B_PART3_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ2B_PART3_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ2B_PART3_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ2B_PART3_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ2B_PART3_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ2B_PART3_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

    if (Seq20SoundPart4OnOff) {

#ifdef SEQ2B_PART4_GUN

      if (Gun.Playing == false) {

        DacAudio.Play(&Gun, true);
      }

      if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
        cannonFlash = true;
      }

      else cannonFlash = false;
#endif

#ifdef SEQ2B_PART4_AAGUN

      if (AAGun.Playing == false) {

        DacAudio.Play(&AAGun, true);
      }

      if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
        machinGunFlash = true;
      }

      else machinGunFlash = false;
#endif

#ifdef SEQ2B_PART4_BELL

      if (Bell.Playing == false) {

        DacAudio.Play(&Bell, true);
      }
#endif

#ifdef SEQ2B_PART4_SHORT

      if (Short_blast.Playing == false) {

        DacAudio.Play(&Short_blast, true);
      }
#endif

#ifdef SEQ2B_PART4_LONG

      if (Long_blast.Playing == false) {

        DacAudio.Play(&Long_blast, true);
      }
#endif

#ifdef SEQ2B_PART4_ALARM

      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }
#endif

#ifdef SEQ2B_PART4_TWELVE1

      if (twelve1.Playing == false) {

        DacAudio.Play(&twelve1, true);
      }
#endif

#ifdef SEQ2B_PART4_TWELVE2

      if (twelve2.Playing == false) {

        DacAudio.Play(&twelve2, true);
      }
#endif

#ifdef SEQ2B_PART4_TWELVE3

      if (twelve3.Playing == false) {

        DacAudio.Play(&twelve3, true);
      }
#endif
    }

#ifdef ACTION1_ENABLE

if (Fishing_Sound){
  
#ifdef ACTION1_MULTI

if (action1Switch==1){

#ifdef ACTION1_SOUND

#ifdef ACTION1B_ALARM

     alarm_teensy = false;
#endif

#ifdef ACTION1B_RING

     ring_teensy = false;
    
#endif

#ifdef ACTION1C_ALARM

     alarm_teensy = false;
#endif

#ifdef ACTION1C_RING

     ring_teensy = false;
    
#endif

#endif
  
}

if (action1Switch==2){

#ifdef ACTION1B_ALARM

     alarm_teensy = true;
    if (Alarm.Playing == false) {
      DacAudio.Play(&Alarm, true);
    }
#endif


#ifdef ACTION1B_RING

     ring_teensy = true;
    if (Ring.Playing == false) {
      DacAudio.Play(&Ring, true);
    }
#endif

  
}

if (action1Switch==3){


#ifdef ACTION1_SWITCH_NO_REV
#ifdef ACTION1B_ALARM

     alarm_teensy = false;
#endif

#ifdef ACTION1B_RING

     ring_teensy = false;
#endif

#endif 


#ifdef ACTION1C_ALARM
     alarm_teensy = true;
    if (Alarm.Playing == false) {
      DacAudio.Play(&Alarm, true);
    }
#endif


#ifdef ACTION1C_RING

     ring_teensy = true;
    if (Ring.Playing == false) {
      DacAudio.Play(&Ring, true);
    }
#endif
  
}

if (action1Switch==4){

#ifdef ACTION1C_ALARM

     alarm_teensy = false;
#endif

#ifdef ACTION1C_RING

     ring_teensy = false;
    
#endif



  
}

if (action1Switch==5){

#ifdef ACTION1B_ALARM
     alarm_teensy = false;
#endif

#ifdef ACTION1B_RING

     ring_teensy = false;
    
#endif

#ifdef ACTION1C_ALARM

     alarm_teensy = false;
#endif

#ifdef ACTION1C_RING

     ring_teensy = false;
    
#endif
  
}
  }

else {

#ifdef ACTION1_SOUND

#ifdef ACTION1B_ALARM

     alarm_teensy = false;
#endif

#ifdef ACTION1B_RING

     ring_teensy = false;
    
#endif

#endif
  
}


  
#endif
#endif 



   
#ifdef ANCHORSOUND
    Ancre.Volume = 50;

    if (Mouillage && !AncreBas ) {
      AncreStop = false;

      if ( Ancre.Playing == true && Ancre.TimeElapsed > 10000) {
        AncreBas = true;
      }
      if (Ancre.Playing == false) {
        DacAudio.Play(&Ancre, true);
      }
    }


    else if (!Mouillage && AncreBas ) {
      AncreStop = false;

      if ( Ancre.Playing == true && Ancre.TimeElapsed > 10000) {
        AncreBas = false;
      }
      if (Ancre.Playing == false) {
        DacAudio.Play(&Ancre, true);
      }
    }


    if (Ancre.Playing == false) {
      AncreStop = true;
    }


    if (!AncreBas && Ancre.Playing == true && Ancre.TimeElapsed > 8000 && Ancre.TimeElapsed < 10500) {
      if (AnchorSpeedDown > 1500) {
        AnchorSpeedDown -= 2;
        if (AnchorSpeedDown < 1500 ) {
          AnchorSpeedDown = 1500;
        }
      }
      if (AnchorSpeedDown < 1500) {
        AnchorSpeedDown += 2;
        if (AnchorSpeedDown > 1500 ) {
          AnchorSpeedDown = 1500;
        }
      }
    }

    if (AncreBas && Ancre.Playing == true && Ancre.TimeElapsed > 8000 && Ancre.TimeElapsed < 10500) {

      if (AnchorSpeedUp < 1500) {
        AnchorSpeedUp += 2;
        if ( AnchorSpeedUp > 1500 ) {
          AnchorSpeedUp = 1500;
        }
      }

      if (AnchorSpeedUp > 1500) {
        AnchorSpeedUp -= 2;
        if ( AnchorSpeedUp < 1500 ) {
          AnchorSpeedUp = 1500;
        }
      }


    }

#endif



#ifdef ACTION3_ENABLE
    if (Fog)
    {

      if (engineOn && !Fishing && !Mouillage) {

        //Son Long toutes les 2min
#if not defined PILOTBOAT
        if (millis() - FogSoundMillis > 120000) {
          FogSoundMillis = millis();
          Sequence6.RemoveAllPlayItems();
          sequence6();
          DacAudio.Play(&Sequence6, true);
        }

#else
        //4 son courts
        if (millis() - FogSoundMillis > 120000) {
          FogSoundMillis = millis();
          Sequence15.RemoveAllPlayItems();
          sequence15();
          DacAudio.Play(&Sequence15, true);

        }
#endif

      }

      // Sons Long et 2 courts toutes les 2min
      if (engineOn && Fishing) {
        // Bateau remorqu?? 1 Son long 3 courts
#if defined OTHERBOAT
        if (millis() - FogSoundMillis > 120000) {
          FogSoundMillis = millis();
          Sequence16.RemoveAllPlayItems();
          sequence16();
          DacAudio.Play(&Sequence16, true);
        }
        // 4 sons courts toutes les 2min
#elif PILOTBOAT
        if (millis() - FogSoundMillis > 120000) {
          FogSoundMillis = millis();
          Sequence15.RemoveAllPlayItems();
          sequence15();
          DacAudio.Play(&Sequence15, true);
        }
        // Sons Long et 2 courts toutes les 2min
#else
        if (millis() - FogSoundMillis > 120000) {
          FogSoundMillis = millis();
          Sequence8.RemoveAllPlayItems();
          sequence8();
          DacAudio.Play(&Sequence8, true);
        }
#endif
      }


      //2 sons Long toutes les 2min
      if (!engineOn && !Fishing && !Mouillage) {
        if (millis() - FogSoundMillis > 120000) {
          FogSoundMillis = millis();
          Sequence7.RemoveAllPlayItems();
          sequence7();
          DacAudio.Play(&Sequence7, true);
        }
      }
      //cloche tout le minute
      if (!engineOn && Mouillage) {
        if (millis() - BellMillis > 60000) {

          BellMillis = millis();
#ifdef INTER
          Sequence10.RemoveAllPlayItems();
          sequence10();
          DacAudio.Play(&Sequence10, true);
#endif

#ifdef SHORT

          Sequence14.RemoveAllPlayItems();
          sequence14();
          DacAudio.Play(&Sequence14, true);
#endif

        }
      }

    }
#endif


#ifdef ACTION4_ENABLE

    if ( engineOn) {

      if (Manoeuvre &&  !Avertissement) {

        /// marche arriere 3 Sons bref
        if (CH3.momentaryPos() == 1) {
          manoeuvre_Rev = true;
          if (Sequence5.Playing == false) {
            Sequence5.RemoveAllPlayItems();
            sequence5();
            DacAudio.Play(&Sequence5, true);
          }
        }
        else manoeuvre_Rev = false;

        /// Vire a gauche deux sons court
        if (CHAct4.momentaryPos() == 1)
        {
          manoeuvre_L = true;
          if (Sequence3.Playing == false) {
            Sequence3.RemoveAllPlayItems();
            sequence3();
            DacAudio.Play(&Sequence3, true);
          }


        }
        else manoeuvre_L = false;

        /// Vire a droite 1 son court
        if (CHAct4.momentaryPos() == 3)
        {
          manoeuvre_R = true;
          if (Sequence4.Playing == false) {

            Sequence4.RemoveAllPlayItems();
            sequence4();
            DacAudio.Play(&Sequence4, true);
          }

        }

        else  manoeuvre_R = false;



      }
    }

#endif

#ifdef ACTION5_ENABLE

    if ( engineOn) {


      if (Avertissement && !Manoeuvre) {

        if ((Short_blast.TimeElapsed > 5 && Short_blast.TimeElapsed < 1200 ) || (Long_blast.TimeElapsed > 5 && Long_blast.TimeElapsed < 3600 ))
        {
          Manoeuvre_Led = true;
        }

        else {
          Manoeuvre_Led = false;
        }

        /// Depasse par la gauche 2 Long 2 court

        if (CHAct5turn.momentaryPos() == 1)
        { avertissement_L = true;
          if (Sequence1.Playing == false) {
            Sequence1.RemoveAllPlayItems();
            sequence1();
            DacAudio.Play(&Sequence1, true);
          }

        }

        else avertissement_L = false;


        
        /// Depasse par la droite  deux long 1 court
        if (CHAct5turn.momentaryPos() == 3)
        {
          avertissement_R = true;
          if (Sequence2.Playing == false) {
            Sequence2.RemoveAllPlayItems();
            sequence2();
            DacAudio.Play(&Sequence2, true);
          }

        }

        else  avertissement_R = false;

        /// Acceptation Long court long court
        if (CHAct5confirm.momentaryPos() == 3)
        { avertissement_OK = true;
          if (Sequence13.Playing == false) {
            Sequence13.RemoveAllPlayItems();
            sequence13();
            DacAudio.Play(&Sequence13, true);
          }

        }

        else avertissement_OK = false;


      }
    }

#endif




    //
    // =======================================================================================================
    // SPECIAL SOUND
    // =======================================================================================================
    //

#ifdef ACTION8_ENABLE
#if defined RINGALARM

    if (Ring_Sound) {
      ring_teensy = true;
      if (Ring.Playing == false) {

        DacAudio.Play(&Ring, true);
      }
    }

    else ring_teensy = false;

    if (Alarm_Sound) {

      alarm_teensy = true;
      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }

      if (Ring.Playing == false) {
        DacAudio.Play(&Ring, true);
      }
    }

    else alarm_teensy = false;

#else
    if (Alarm_Sound) {

      alarm_teensy = true;
      if (Alarm.Playing == false) {

        DacAudio.Play(&Alarm, true);
      }

    }

    else alarm_teensy = false;

#endif

#endif

#ifdef ACTION6_ENABLE
    if (MachineGunSound ) {
      AAgun_teensy = true;
      if (Sequence12.Playing == false) {
        Sequence12.RemoveAllPlayItems();
        sequence12();
        DacAudio.Play(&Sequence12, true);
      }
    }

    else AAgun_teensy = false;


    if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
      machinGunFlash = true;
    }

    else machinGunFlash = false;

#endif

#ifdef ACTION7_ENABLE

    if (GunSound2 ) {

      gun_teensy = true;

      if (Sequence11.Playing == false) {
        Sequence11.RemoveAllPlayItems();

        sequence11();

        DacAudio.Play(&Sequence11, true);
      }

    }

    else  gun_teensy = false ;

    if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
      cannonFlash = true;
    }

    else cannonFlash = false;

#endif


#ifdef ACTION11A_ENABLE

    #if defined ACTION11A_UP_MULTISWITCH
      if ( Act11A_UP) {
    
    #else 
      if (Action11A.momentaryPos()== 3 ||Action11A.Pos()== 3) {
    #endif

   
        act11A_H_On = true;

#ifdef ACTION11A_HIGH_GUN
        gun_teensy = true;
#endif
#ifdef ACTION11A_HIGH_ALARM
        alarm_teensy = true;
#endif
#ifdef ACTION11A_HIGH_RING
        ring_teensy = true;
#endif

#ifdef ACTION11A_HIGH_SHORT
        short_teensy = true;
#endif
#ifdef ACTION11A_HIGH_LONG
        long_teensy = true;
#endif

#ifdef ACTION11A_HIGH_AAGUN
        AAgun_teensy = true;
#endif

#ifdef ACTION11A_HIGH_PERSO_1
        eleven1_teensy = true;
#endif

#ifdef ACTION11A_HIGH_PERSO_2

        eleven2_teensy = true;

#endif

#ifdef ACTION11A_HIGH_PERSO_3



        eleven3_teensy = true;

#endif

#ifdef ACTION11A_HIGH_PERSO_4



        eleven4_teensy = true;

#endif

#ifdef ACTION11A_HIGH_PERSO_5



        eleven5_teensy = true;

#endif

#ifdef ACTION11A_HIGH_PERSO_6


        eleven1_teensy = true;

#endif

#ifdef ACTION11A_HIGH_PERSO_7


        eleven7_teensy = true;

#endif

#ifdef ACTION11A_HIGH_PERSO_8


        eleven8_teensy = true;

#endif

#ifdef ACTION11A_HIGH_SEAGULL

        seagull_teensy = true;

#endif

#ifdef ACTION11A_HIGH_AMBIENT


        ambient_teensy = true;

#endif

  }

else {

  act11A_H_On = false;

#ifdef ACTION11A_HIGH_GUN
        gun_teensy = false;
#endif
#ifdef ACTION11A_HIGH_ALARM
        alarm_teensy = false;
#endif
#ifdef ACTION11A_HIGH_RING
        ring_teensy = false;
#endif

#ifdef ACTION11A_HIGH_SHORT
        short_teensy = false;
#endif
#ifdef ACTION11A_HIGH_LONG
        long_teensy = false;
#endif

#ifdef ACTION11A_HIGH_AAGUN
        AAgun_teensy = false;
#endif

  
#ifdef ACTION11A_HIGH_PERSO_1

  eleven1_teensy = false;
#endif

#ifdef ACTION11A_HIGH_PERSO_2
  eleven2_teensy = false;
#endif

#ifdef ACTION11A_HIGH_PERSO_3

  eleven3_teensy = false;

#endif

#ifdef ACTION11A_HIGH_PERSO_4

  eleven4_teensy = false;

#endif

#ifdef ACTION11A_HIGH_PERSO_5


  eleven5_teensy = false;

#endif

#ifdef ACTION11A_HIGH_PERSO_6


  eleven6_teensy = false;

#endif

#ifdef ACTION11A_HIGH_PERSO_7

  eleven7_teensy = false;

#endif

#ifdef ACTION11A_HIGH_PERSO_8

  eleven8_teensy = false;

#endif

#ifdef ACTION11A_HIGH_SEAGULL

  seagull_teensy = false;

#endif

#ifdef ACTION11A_HIGH_AMBIENT

  ambient_teensy = false;

#endif

}





    #if defined ACTION11A_DOWN_MULTISWITCH
      if ( Act11A_DOWN) {
    
    #else 
      if (Action11A.momentaryPos()== 1 ||Action11A.Pos()== 1) {
    #endif



    act11A_L_On = true;

#ifdef ACTION11A_LOW_GUN
        gun_teensy = true;
#endif
#ifdef ACTION11A_LOW_ALARM
        alarm_teensy = true;
#endif
#ifdef ACTION11A_LOW_RING
        ring_teensy = true;
#endif

#ifdef ACTION11A_LOW_SHORT
        short_teensy = true;
#endif
#ifdef ACTION11A_HIGH_LONG
        long_teensy = true;
#endif
#ifdef ACTION11A_LOW_AAGUN
        AAgun_teensy = true;
#endif
    
#ifdef ACTION11A_LOW_PERSO_1


    eleven1_teensy = true;
#endif

#ifdef ACTION11A_LOW_PERSO_2


    eleven2_teensy = true;

#endif

#ifdef ACTION11A_LOW_PERSO_3


    eleven3_teensy = true;

#endif

#ifdef ACTION11A_LOW_PERSO_4


    eleven4_teensy = true;

#endif

#ifdef ACTION11A_LOW_PERSO_5



    eleven5_teensy = true;

#endif

#ifdef ACTION11A_LOW_PERSO_6


    eleven1_teensy = true;

#endif

#ifdef ACTION11A_LOW_PERSO_7


    eleven7_teensy = true;

#endif

#ifdef ACTION11A_LOW_PERSO_8


    eleven8_teensy = true;

#endif

#ifdef ACTION11A_LOW_SEAGULL

    seagull_teensy = true;

#endif

#ifdef ACTION11A_LOW_AMBIENT

    ambient_teensy = true;

#endif

  }

  else {

    act11A_L_On = false;

#ifdef ACTION11A_LOW_GUN
        gun_teensy = false;
#endif
#ifdef ACTION11A_LOW_ALARM
        alarm_teensy = false;
#endif
#ifdef ACTION11A_LOW_RING
        ring_teensy = false;
#endif

#ifdef ACTION11A_LOW_SHORT
        short_teensy = false;
#endif
#ifdef ACTION11A_LOW_LONG
        long_teensy = false;
#endif
#ifdef ACTION11A_LOW_AAGUN
        AAgun_teensy = false;
#endif    

#ifdef ACTION11A_LOW_PERSO_1

    eleven1_teensy = false;
#endif

#ifdef ACTION11A_LOW_PERSO_2
    eleven2_teensy = false;
#endif

#ifdef ACTION11A_LOW_PERSO_3

    eleven3_teensy = false;

#endif

#ifdef ACTION11A_LOW_PERSO_4

    eleven4_teensy = false;

#endif

#ifdef ACTION11A_LOW_PERSO_5


    eleven5_teensy = false;

#endif

#ifdef ACTION11A_LOW_PERSO_6


    eleven1_teensy = false;

#endif

#ifdef ACTION11A_LOW_PERSO_7

    eleven7_teensy = false;

#endif

#ifdef ACTION11A_LOW_PERSO_8

    eleven7_teensy = false;

#endif

#ifdef ACTION11A_LOW_SEAGULL

    seagull_teensy = false;

#endif

#ifdef ACTION11A_LOW_AMBIENT

    ambient_teensy = false;

#endif

  }

#endif


  ////////////////////////////////////////////////

#ifdef ACTION11B_ENABLE

#ifdef ACTION11B_UP_MULTISWITCH
  if (Act11B_UP ) {
#else
  if (Action11B.momentaryPos() == 3 || Action11B.Pos() == 3) {
#endif


    act11B_H_On = true;

#ifdef ACTION11B_HIGH_GUN
        gun_teensy = true;
#endif
#ifdef ACTION11B_HIGH_ALARM
        alarm_teensy = true;
#endif
#ifdef ACTION11B_HIGH_RING
        ring_teensy = true;
#endif

#ifdef ACTION11B_HIGH_SHORT
        short_teensy = true;
#endif
#ifdef ACTION11B_HIGH_LONG
        long_teensy = true;
#endif

#ifdef ACTION11B_HIGH_AAGUN
        AAgun_teensy = true;
#endif    

#ifdef ACTION11B_HIGH_PERSO_1

    eleven1_teensy = true;
#endif

#ifdef ACTION11B_HIGH_PERSO_2


    eleven2_teensy = true;

#endif

#ifdef ACTION11B_HIGH_PERSO_3


    eleven3_teensy = true;

#endif

#ifdef ACTION11B_HIGH_PERSO_4


    eleven4_teensy = true;

#endif

#ifdef ACTION11B_HIGH_PERSO_5


    eleven5_teensy = true;

#endif

#ifdef ACTION11B_HIGH_PERSO_6


    eleven1_teensy = true;

#endif

#ifdef ACTION11B_HIGH_PERSO_7

    eleven7_teensy = true;

#endif

#ifdef ACTION11B_HIGH_PERSO_8

    eleven8_teensy = true;

#endif

#ifdef ACTION11B_HIGH_SEAGULL

    seagull_teensy = true;

#endif

#ifdef ACTION11B_HIGH_AMBIENT

    ambient_teensy = true;

#endif

  }

  else {


    act11B_H_On = false;


#ifdef ACTION11B_HIGH_GUN
        gun_teensy = false;
#endif
#ifdef ACTION11B_HIGH_ALARM
        alarm_teensy = false;
#endif
#ifdef ACTION11B_HIGH_RING
        ring_teensy = false;
#endif

#ifdef ACTION11B_HIGH_SHORT
        short_teensy = false;
#endif
#ifdef ACTION11B_HIGH_LONG
        long_teensy = false;
#endif

#ifdef ACTION11B_HIGH_AAGUN
        AAgun_teensy = false;
#endif    
#ifdef ACTION11B_HIGH_PERSO_1

    eleven1_teensy = false;
#endif

#ifdef ACTION11B_HIGH_PERSO_2
    eleven2_teensy = false;
#endif

#ifdef ACTION11B_HIGH_PERSO_3

    eleven3_teensy = false;

#endif

#ifdef ACTION11B_HIGH_PERSO_4

    eleven4_teensy = false;

#endif

#ifdef ACTION11B_HIGH_PERSO_5


    eleven5_teensy = false;

#endif

#ifdef ACTION11B_HIGH_PERSO_6


    eleven6_teensy = false;

#endif

#ifdef ACTION11B_HIGH_PERSO_7

    eleven7_teensy = false;

#endif

#ifdef ACTION11B_HIGH_PERSO_8

    eleven8_teensy = false;

#endif

#ifdef ACTION11B_HIGH_SEAGULL

    seagull_teensy = false;

#endif

#ifdef ACTION11B_HIGH_AMBIENT

    ambient_teensy = false;

#endif

  }


#ifdef ACTION11B_DOWN_MULTISWITCH
  if (Act11B_DOWN ) {
#else
  if (Action11B.momentaryPos() == 1 || Action11B.Pos() == 1) {
#endif

    act11B_L_On = true;


#ifdef ACTION11B_LOW_GUN
        gun_teensy = true;
#endif
#ifdef ACTION11B_LOW_ALARM
        alarm_teensy = true;
#endif
#ifdef ACTION11B_LOW_RING
        ring_teensy = true;
#endif

#ifdef ACTION11B_LOW_SHORT
        short_teensy = true;
#endif
#ifdef ACTION11B_LOW_LONG
        long_teensy = true;
#endif


#ifdef ACTION11B_LOW_AAGUN
        AAgun_teensy = true;
#endif
    
#ifdef ACTION11B_LOW_PERSO_1

    eleven1_teensy = true;
#endif

#ifdef ACTION11B_LOW_PERSO_2


    eleven2_teensy = true;

#endif

#ifdef ACTION11B_LOW_PERSO_3


    eleven3_teensy = true;

#endif

#ifdef ACTION11B_LOW_PERSO_4


    eleven4_teensy = true;

#endif

#ifdef ACTION11B_LOW_PERSO_5



    eleven5_teensy = true;

#endif

#ifdef ACTION11B_LOW_PERSO_6


    eleven1_teensy = true;

#endif

#ifdef ACTION11B_LOW_PERSO_7

    eleven7_teensy = true;

#endif

#ifdef ACTION11B_LOW_PERSO_8

    eleven8_teensy = true;

#endif

#ifdef ACTION11B_LOW_SEAGULL

    seagull_teensy = true;

#endif

#ifdef ACTION11B_LOW_AMBIENT

    ambient_teensy = true;

#endif

  }

  else {

    act11B_L_On = false;



#ifdef ACTION11B_LOW_GUN
        gun_teensy = false;
#endif
#ifdef ACTION11B_LOW_ALARM
        alarm_teensy = false;
#endif
#ifdef ACTION11B_LOW_RING
        ring_teensy = false;
#endif

#ifdef ACTION11B_LOW_SHORT
        short_teensy = false;
#endif
#ifdef ACTION11B_LOW_LONG
        long_teensy = false;
#endif

#ifdef ACTION11B_LOW_AAGUN
        AAgun_teensy = false;
#endif    
#ifdef ACTION11B_LOW_PERSO_1

    eleven1_teensy = false;
#endif

#ifdef ACTION11B_LOW_PERSO_2
    eleven2_teensy = false;
#endif

#ifdef ACTION11B_LOW_PERSO_3

    eleven3_teensy = false;

#endif

#ifdef ACTION11B_LOW_PERSO_4

    eleven4_teensy = false;

#endif

#ifdef ACTION11B_LOW_PERSO_5


    eleven5_teensy = false;

#endif

#ifdef ACTION11B_LOW_PERSO_6


    eleven6_teensy = false;

#endif

#ifdef ACTION11B_LOW_PERSO_7

    eleven7_teensy = false;

#endif

#ifdef ACTION11B_LOW_PERSO_8

    eleven8_teensy = false;

#endif

#ifdef ACTION11B_LOW_SEAGULL

    seagull_teensy = false;

#endif

#ifdef ACTION11B_LOW_AMBIENT

    ambient_teensy = false;

#endif

  }

#endif
  //////////////////////////////////////////////////////////////



#ifdef ACTION11C_UP_MULTISWITCH
  if (Act11C_UP) {
#else
  if ( Action11C.momentaryPos() == 3 || Action11C.Pos() == 3) {
#endif


    act11C_H_On = true;


#ifdef ACTION11C_HIGH_GUN
        gun_teensy = true;
#endif
#ifdef ACTION11C_HIGH_ALARM
        alarm_teensy = true;
#endif
#ifdef ACTION11C_HIGH_RING
        ring_teensy = true;
#endif

#ifdef ACTION11C_HIGH_SHORT
        short_teensy = true;
#endif
#ifdef ACTION11C_HIGH_LONG
        long_teensy = true;
#endif


#ifdef ACTION11C_HIGH_AAGUN
        AAgun_teensy = true;
#endif
    
#ifdef ACTION11C_HIGH_PERSO_1

    eleven1_teensy = true;
#endif

#ifdef ACTION11C_HIGH_PERSO_2


    eleven2_teensy = true;

#endif

#ifdef ACTION11C_HIGH_PERSO_3


    eleven3_teensy = true;

#endif

#ifdef ACTION11C_HIGH_PERSO_4


    eleven4_teensy = true;

#endif

#ifdef ACTION11C_HIGH_PERSO_5


    eleven5_teensy = true;

#endif

#ifdef ACTION11C_HIGH_PERSO_6


    eleven1_teensy = true;

#endif

#ifdef ACTION11C_HIGH_PERSO_7

    eleven7_teensy = true;

#endif

#ifdef ACTION11C_HIGH_PERSO_8

    eleven8_teensy = true;

#endif

#ifdef ACTION11C_HIGH_SEAGULL

    seagull_teensy = true;

#endif

#ifdef ACTION11C_HIGH_AMBIENT

    ambient_teensy = true;

#endif

  }

  else {


    act11C_H_On = false;



#ifdef ACTION11C_HIGH_GUN
        gun_teensy = false;
#endif
#ifdef ACTION11C_HIGH_ALARM
        alarm_teensy = false;
#endif
#ifdef ACTION11C_HIGH_RING
        ring_teensy = false;
#endif

#ifdef ACTION11C_HIGH_SHORT
        short_teensy = false;
#endif
#ifdef ACTION11C_HIGH_LONG
        long_teensy = false;
#endif



#ifdef ACTION11C_HIGH_AAGUN
        AAgun_teensy = false;
#endif
    
#ifdef ACTION11C_HIGH_PERSO_1

    eleven1_teensy = false;
#endif

#ifdef ACTION11C_HIGH_PERSO_2
    eleven2_teensy = false;
#endif

#ifdef ACTION11C_HIGH_PERSO_3

    eleven3_teensy = false;

#endif

#ifdef ACTION11C_HIGH_PERSO_4

    eleven4_teensy = false;

#endif

#ifdef ACTION11C_HIGH_PERSO_5


    eleven5_teensy = false;

#endif

#ifdef ACTION11C_HIGH_PERSO_6


    eleven6_teensy = false;

#endif

#ifdef ACTION11C_HIGH_PERSO_7

    eleven7_teensy = false;

#endif

#ifdef ACTION11C_HIGH_PERSO_8

    eleven8_teensy = false;

#endif

#ifdef ACTION11C_HIGH_SEAGULL

    seagull_teensy = false;

#endif

#ifdef ACTION11C_HIGH_AMBIENT

    ambient_teensy = false;

#endif

  }


#ifdef ACTION11C_DOWN_MULTISWITCH
  if (Act11C_DOWN ) {
#else
  if ( Action11C.momentaryPos() == 1 || Action11C.Pos() == 1) {
#endif

    act11C_L_On = true;



#ifdef ACTION11C_LOW_GUN
        gun_teensy = true;
#endif
#ifdef ACTION11C_LOW_ALARM
        alarm_teensy = true;
#endif
#ifdef ACTION11C_LOW_RING
        ring_teensy = true;
#endif

#ifdef ACTION11C_LOW_SHORT
        short_teensy = true;
#endif
#ifdef ACTION11C_LOW_LONG
        long_teensy = true;
#endif    

 #ifdef ACTION11C_LOW_AAGUN
        AAgun_teensy = true;
#endif   

#ifdef ACTION11C_LOW_PERSO_1
    eleven1_teensy = true;
#endif

#ifdef ACTION11C_LOW_PERSO_2


    eleven2_teensy = true;

#endif

#ifdef ACTION11C_LOW_PERSO_3


    eleven3_teensy = true;

#endif

#ifdef ACTION11C_LOW_PERSO_4


    eleven4_teensy = true;

#endif

#ifdef ACTION11C_LOW_PERSO_5


    eleven5_teensy = true;

#endif

#ifdef ACTION11C_LOW_PERSO_6


    eleven1_teensy = true;

#endif

#ifdef ACTION11C_LOW_PERSO_7


    eleven7_teensy = true;

#endif

#ifdef ACTION11C_LOW_PERSO_8

    eleven8_teensy = true;

#endif

#ifdef ACTION11C_LOW_SEAGULL

    seagull_teensy = true;

#endif

#ifdef ACTION11C_LOW_AMBIENT

    ambient_teensy = true;

#endif

  }

  else {


    act11C_L_On = false;



#ifdef ACTION11C_LOW_GUN
        gun_teensy = false;
#endif
#ifdef ACTION11C_LOW_ALARM
        alarm_teensy = false;
#endif
#ifdef ACTION11C_LOW_RING
        ring_teensy = false;
#endif

#ifdef ACTION11C_LOW_SHORT
        short_teensy = false;
#endif
#ifdef ACTION11C_LOW_LONG
        long_teensy = false;
#endif



#ifdef ACTION11C_LOW_AAGUN
        AAgun_teensy = false;
#endif 
    
#ifdef ACTION11C_LOW_PERSO_1

    eleven1_teensy = false;
#endif

#ifdef ACTION11C_LOW_PERSO_2
    eleven2_teensy = false;
#endif

#ifdef ACTION11C_LOW_PERSO_3

    eleven3_teensy = false;

#endif

#ifdef ACTION11C_LOW_PERSO_4

    eleven4_teensy = false;

#endif

#ifdef ACTION11C_LOW_PERSO_5


    eleven5_teensy = false;

#endif

#ifdef ACTION11C_LOW_PERSO_6


    eleven6_teensy = false;

#endif

#ifdef ACTION11C_LOW_PERSO_7

    eleven7_teensy = false;

#endif

#ifdef ACTION11C_LOW_PERSO_8

    eleven8_teensy = false;

#endif

#ifdef ACTION11C_LOW_SEAGULL

    seagull_teensy = false;

#endif

#ifdef ACTION11C_LOW_AMBIENT

    ambient_teensy = false;

#endif

  }


  ////////////////////////////////////////////////////////////

#ifdef ACTION11D_ENABLE

#ifdef ACTION11D_UP_MULTISWITCH
  if (Act11D_UP) {
#else
  if ( Action11D.momentaryPos() == 3 || Action11D.Pos() == 3) {
#endif


    act11D_H_On = true;


#ifdef ACTION11D_HIGH_GUN
        gun_teensy = true;
#endif
#ifdef ACTION11D_HIGH_ALARM
        alarm_teensy = true;
#endif
#ifdef ACTION11D_HIGH_RING
        ring_teensy = true;
#endif

#ifdef ACTION11D_HIGH_SHORT
        short_teensy = true;
#endif
#ifdef ACTION11D_HIGH_LONG
        long_teensy = true;
#endif



#ifdef ACTION11D_HIGH_AAGUN
        AAgun_teensy = true;
#endif 
    
#ifdef ACTION11D_HIGH_PERSO_1

    eleven1_teensy = true;
#endif

#ifdef ACTION11D_HIGH_PERSO_2



    eleven2_teensy = true;

#endif

#ifdef ACTION11D_HIGH_PERSO_3



    eleven3_teensy = true;

#endif

#ifdef ACTION11D_HIGH_PERSO_4


    eleven4_teensy = true;

#endif

#ifdef ACTION11D_HIGH_PERSO_5


    eleven5_teensy = true;

#endif

#ifdef ACTION11D_HIGH_PERSO_6


    eleven1_teensy = true;

#endif

#ifdef ACTION11D_HIGH_PERSO_7

    eleven7_teensy = true;

#endif

#ifdef ACTION11D_HIGH_PERSO_8

    eleven8_teensy = true;

#endif

#ifdef ACTION11D_HIGH_SEAGULL

    seagull_teensy = true;

#endif

#ifdef ACTION11D_HIGH_AMBIENT

    ambient_teensy = true;

#endif

  }

  else {

    act11D_H_On = false;




#ifdef ACTION11D_HIGH_GUN
        gun_teensy = false;
#endif
#ifdef ACTION11D_HIGH_ALARM
        alarm_teensy = false;
#endif
#ifdef ACTION11D_HIGH_RING
        ring_teensy = false;
#endif

#ifdef ACTION11D_HIGH_SHORT
        short_teensy = false;
#endif
#ifdef ACTION11D_HIGH_LONG
        long_teensy = false;
#endif



#ifdef ACTION11D_HIGH_AAGUN
        AAgun_teensy = false;
#endif 
    
#ifdef ACTION11D_HIGH_PERSO_1

    eleven1_teensy = false;
#endif

#ifdef ACTION11D_HIGH_PERSO_2
    eleven2_teensy = false;
#endif

#ifdef ACTION11D_HIGH_PERSO_3

    eleven3_teensy = false;

#endif

#ifdef ACTION11D_HIGH_PERSO_4

    eleven4_teensy = false;

#endif

#ifdef ACTION11D_HIGH_PERSO_5


    eleven5_teensy = false;

#endif

#ifdef ACTION11D_HIGH_PERSO_6


    eleven6_teensy = false;

#endif

#ifdef ACTION11D_HIGH_PERSO_7

    eleven7_teensy = false;

#endif

#ifdef ACTION11D_HIGH_PERSO_8

    eleven8_teensy = false;

#endif

#ifdef ACTION11D_HIGH_SEAGULL

    seagull_teensy = false;

#endif

#ifdef ACTION11D_HIGH_AMBIENT

    ambient_teensy = false;

#endif

  }


#ifdef ACTION11D_DOWN_MULTISWITCH
  if (Act11D_DOWN ) {
#else
  if (Action11D.momentaryPos() == 1 || Action11D.Pos() == 1) {
#endif

    act11D_L_On = true;


#ifdef ACTION11D_LOW_GUN
        gun_teensy = true;
#endif
#ifdef ACTION11D_LOW_ALARM
        alarm_teensy = true;
#endif
#ifdef ACTION11D_LOW_RING
        ring_teensy = true;
#endif

#ifdef ACTION11D_LOW_SHORT
        short_teensy = true;
#endif
#ifdef ACTION11D_LOW_LONG
        long_teensy = true;
#endif



#ifdef  ACTION11D_LOW_AAGUN
        AAgun_teensy = true;
#endif 
    
#ifdef ACTION11D_LOW_PERSO_1

    eleven1_teensy = true;
#endif

#ifdef ACTION11D_LOW_PERSO_2


    eleven2_teensy = true;

#endif

#ifdef ACTION11D_LOW_PERSO_3


    eleven3_teensy = true;

#endif

#ifdef ACTION11D_LOW_PERSO_4


    eleven4_teensy = true;

#endif

#ifdef ACTION11D_LOW_PERSO_5


    eleven5_teensy = true;

#endif

#ifdef ACTION11D_LOW_PERSO_6


    eleven1_teensy = true;

#endif

#ifdef ACTION11D_LOW_PERSO_7

    eleven7_teensy = true;

#endif

#ifdef ACTION11D_LOW_PERSO_8

    eleven8_teensy = true;

#endif

#ifdef ACTION11D_LOW_SEAGULL


    seagull_teensy = true;

#endif

#ifdef ACTION11D_LOW_AMBIENT

    ambient_teensy = true;

#endif

  }

  else {

    act11D_L_On = false;



#ifdef ACTION11D_LOW_GUN
        gun_teensy = false;
#endif
#ifdef ACTION11D_LOW_ALARM
        alarm_teensy = false;
#endif
#ifdef ACTION11D_LOW_RING
        ring_teensy = false;
#endif

#ifdef ACTION11D_LOW_SHORT
        short_teensy = false;
#endif
#ifdef ACTION11D_LOW_LONG
        long_teensy = false;
#endif



#ifdef  ACTION11D_LOW_AAGUN
        AAgun_teensy = false;
#endif 
    
#ifdef ACTION11D_LOW_PERSO_1

    eleven1_teensy = false;
#endif

#ifdef ACTION11D_LOW_PERSO_2
    eleven2_teensy = false;
#endif

#ifdef ACTION11D_LOW_PERSO_3

    eleven3_teensy = false;

#endif

#ifdef ACTION11D_LOW_PERSO_4

    eleven4_teensy = false;

#endif

#ifdef ACTION11D_LOW_PERSO_5


    eleven5_teensy = false;

#endif

#ifdef ACTION11D_LOW_PERSO_6


    eleven6_teensy = false;

#endif

#ifdef ACTION11D_LOW_PERSO_7

    eleven7_teensy = false;

#endif

#ifdef ACTION11D_LOW_PERSO_8

    eleven8_teensy = false;

#endif

#ifdef ACTION11D_LOW_SEAGULL

    seagull_teensy = false;

#endif

#ifdef ACTION11D_LOW_AMBIENT

    ambient_teensy = false;

#endif

  }

#endif

#ifdef ACTION11A_ENABLE

#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#ifdef ACTION11A_UP_MULTISWITCH
  if (Act11A_UP) {
#else
  if (Action11A.Pos() == 3) {
#endif
#else
#ifdef ACTION11A_UP_MULTISWITCH
  if (Act11A_UP) {
#else
  if (Action11A.momentaryPos() == 3) {
#endif
#endif

#ifdef ACTION11A_HIGH_AAGUN
#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    AAGun.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (AAGun.Playing == false) {
      DacAudio.Play(&AAGun, true);
    }
#endif

#ifdef ACTION11A_HIGH_GUN
#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    Gun.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (Gun.Playing == false) {
      DacAudio.Play(&Gun, true);
    }
#endif

#ifdef ACTION11A_HIGH_ALARM
#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    Alarm.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (Alarm.Playing == false) {
      DacAudio.Play(&Alarm, true);
    }
#endif


#ifdef ACTION11A_HIGH_RING
#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    Ring.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (Ring.Playing == false) {
      DacAudio.Play(&Ring, true);
    }
#endif


#ifdef ACTION11A_HIGH_SHORT
#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    Short_blast.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (Short_blast.Playing == false) {
      DacAudio.Play(&Short_blast, true);
    }
#endif


#ifdef ACTION11A_HIGH_SHORT
#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    Long_blast.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (Long_blast.Playing == false) {
      DacAudio.Play(&Long_blast, true);
    }
#endif

#ifdef ACTION11A_HIGH_PERSO_1
#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    eleven1.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (eleven1.Playing == false) {
      DacAudio.Play(&eleven1, true);
    }
#endif

#ifdef ACTION11A_HIGH_PERSO_2

#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    eleven2.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (eleven2.Playing == false) {
      DacAudio.Play(&eleven2, true);
    }

#endif

#ifdef ACTION11A_HIGH_PERSO_3

#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    eleven3.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (eleven3.Playing == false) {
      DacAudio.Play(&eleven3, true);
    }

#endif

#ifdef ACTION11A_HIGH_PERSO_4

#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    eleven4.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (eleven4.Playing == false) {
      DacAudio.Play(&eleven4, true);
    }

#endif

#ifdef ACTION11A_HIGH_PERSO_5

#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    eleven5.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (eleven5.Playing == false) {
      DacAudio.Play(&eleven5, true);
    }

#endif

#ifdef ACTION11A_HIGH_PERSO_6

#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    eleven6.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (eleven6.Playing == false) {
      DacAudio.Play(&eleven6, true);
    }

#endif

#ifdef ACTION11A_HIGH_PERSO_7
#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    eleven7.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (eleven7.Playing == false) {
      DacAudio.Play(&eleven7, true);
    }

#endif

#ifdef ACTION11A_HIGH_PERSO_8
#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    eleven8.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (eleven8.Playing == false) {
      DacAudio.Play(&eleven8, true);
    }

#endif

#ifdef ACTION11A_HIGH_SEAGULL
#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    Seagull.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (Seagull.Playing == false) {
      DacAudio.Play(&Seagull, true);
    }

#endif

#ifdef ACTION11A_HIGH_AMBIENT
#ifdef ACTION11A_HIGH_REPEAT_FOREVER

#else
    Ambient.Repeat = ACTION11A_HIGH_REPEAT;
#endif
    if (Ambient.Playing == false) {
      DacAudio.Play(&Ambient, true);
    }

#endif

  }

#ifdef ACTION11A_LOW_REPEAT_FOREVER

#ifdef ACTION11A_DOWN_MULTISWITCH
  if (Act11A_DOWN) {
#else
  if (Action11A.Pos() == 1) {
#endif
#else
#ifdef ACTION11A_DOWN_MULTISWITCH
  if (Act11A_DOWN) {
#else
  if (Action11A.momentaryPos() == 1) {
#endif
#endif



#ifdef ACTION11A_LOW_AAGUN
#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    AAGun.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (AAGun.Playing == false) {
      DacAudio.Play(&AAGun, true);
    }
#endif

#ifdef ACTION11A_LOW_GUN
#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    Gun.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (Gun.Playing == false) {
      DacAudio.Play(&Gun, true);
    }
#endif

#ifdef ACTION11A_LOW_ALARM
#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    Alarm.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (Alarm.Playing == false) {
      DacAudio.Play(&Alarm, true);
    }
#endif


#ifdef ACTION11A_LOW_RING
#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    Ring.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (Ring.Playing == false) {
      DacAudio.Play(&Ring, true);
    }
#endif


#ifdef ACTION11A_LOW_SHORT
#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    Short_blast.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (Short_blast.Playing == false) {
      DacAudio.Play(&Short_blast, true);
    }
#endif


#ifdef ACTION11A_LOW_SHORT
#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    Long_blast.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (Long_blast.Playing == false) {
      DacAudio.Play(&Long_blast, true);
    }
#endif


#ifdef ACTION11A_LOW_PERSO_1
#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    eleven1.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (eleven1.Playing == false) {
      DacAudio.Play(&eleven1, true);
    }
#endif

#ifdef ACTION11A_LOW_PERSO_2

#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    eleven2.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (eleven2.Playing == false) {
      DacAudio.Play(&eleven2, true);
    }

#endif

#ifdef ACTION11A_LOW_PERSO_3

#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    eleven3.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (eleven3.Playing == false) {
      DacAudio.Play(&eleven3, true);
    }

#endif

#ifdef ACTION11A_LOW_PERSO_4

#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    eleven4.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (eleven4.Playing == false) {
      DacAudio.Play(&eleven4, true);
    }

#endif

#ifdef ACTION11A_LOW_PERSO_5

#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    eleven5.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (eleven5.Playing == false) {
      DacAudio.Play(&eleven5, true);
    }

#endif

#ifdef ACTION11A_LOW_PERSO_6

#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    eleven6.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (eleven6.Playing == false) {
      DacAudio.Play(&eleven6, true);
    }

#endif

#ifdef ACTION11A_LOW_PERSO_7
#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    eleven7.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (eleven7.Playing == false) {
      DacAudio.Play(&eleven7, true);
    }

#endif

#ifdef ACTION11A_LOW_PERSO_8
#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    eleven8.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (eleven8.Playing == false) {
      DacAudio.Play(&eleven8, true);
    }

#endif

#ifdef ACTION11A_LOW_SEAGULL
#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    Seagull.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (Seagull.Playing == false) {
      DacAudio.Play(&Seagull, true);
    }

#endif

#ifdef ACTION11A_LOW_AMBIENT
#ifdef ACTION11A_LOW_REPEAT_FOREVER

#else
    Ambient.Repeat = ACTION11A_LOW_REPEAT;
#endif
    if (Ambient.Playing == false) {
      DacAudio.Play(&Ambient, true);
    }

#endif

  }
#endif

#ifdef ACTION11B_ENABLE

#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#ifdef ACTION11B_UP_MULTISWITCH
  if (Act11B_UP) {
#else
  if (Action11B.Pos() == 3) {
#endif
#else
#ifdef ACTION11B_UP_MULTISWITCH
  if (Act11B_UP) {
#else
  if (Action11B.momentaryPos() == 3) {
#endif
#endif




#ifdef ACTION11B_HIGH_AAGUN
#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    AAGun.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (AAGun.Playing == false) {
      DacAudio.Play(&AAGun, true);
    }
#endif

#ifdef ACTION11B_HIGH_GUN
#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    Gun.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (Gun.Playing == false) {
      DacAudio.Play(&Gun, true);
    }
#endif

#ifdef ACTION11B_HIGH_ALARM
#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    Alarm.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (Alarm.Playing == false) {
      DacAudio.Play(&Alarm, true);
    }
#endif


#ifdef ACTION11B_HIGH_RING
#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    Ring.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (Ring.Playing == false) {
      DacAudio.Play(&Ring, true);
    }
#endif


#ifdef ACTION11B_HIGH_SHORT
#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    Short_blast.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (Short_blast.Playing == false) {
      DacAudio.Play(&Short_blast, true);
    }
#endif


#ifdef ACTION11B_HIGH_SHORT
#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    Long_blast.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (Long_blast.Playing == false) {
      DacAudio.Play(&Long_blast, true);
    }
#endif

#ifdef ACTION11B_HIGH_PERSO_1
#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    eleven1.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (eleven1.Playing == false) {
      DacAudio.Play(&eleven1, true);
    }
#endif

#ifdef ACTION11B_HIGH_PERSO_2

#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    eleven2.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (eleven2.Playing == false) {
      DacAudio.Play(&eleven2, true);
    }

#endif

#ifdef ACTION11B_HIGH_PERSO_3

#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    eleven3.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (eleven3.Playing == false) {
      DacAudio.Play(&eleven3, true);
    }

#endif

#ifdef ACTION11B_HIGH_PERSO_4

#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    eleven4.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (eleven4.Playing == false) {
      DacAudio.Play(&eleven4, true);
    }

#endif

#ifdef ACTION11B_HIGH_PERSO_5

#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    eleven5.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (eleven5.Playing == false) {
      DacAudio.Play(&eleven5, true);
    }

#endif

#ifdef ACTION11B_HIGH_PERSO_6

#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    eleven6.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (eleven6.Playing == false) {
      DacAudio.Play(&eleven6, true);
    }

#endif

#ifdef ACTION11B_HIGH_PERSO_7
#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    eleven7.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (eleven7.Playing == false) {
      DacAudio.Play(&eleven7, true);
    }

#endif

#ifdef ACTION11B_HIGH_PERSO_8
#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    eleven8.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (eleven8.Playing == false) {
      DacAudio.Play(&eleven8, true);
    }

#endif

#ifdef ACTION11B_HIGH_SEAGULL
#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    Seagull.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (Seagull.Playing == false) {
      DacAudio.Play(&Seagull, true);
    }

#endif

#ifdef ACTION11B_HIGH_AMBIENT
#ifdef ACTION11B_HIGH_REPEAT_FOREVER

#else
    Ambient.Repeat = ACTION11B_HIGH_REPEAT;
#endif
    if (Ambient.Playing == false) {
      DacAudio.Play(&Ambient, true);
    }

#endif

  }

#ifdef ACTION11B_LOW_REPEAT_FOREVER

#ifdef ACTION11B_DOWN_MULTISWITCH
  if (Act11B_DOWN) {
#else
  if (Action11B.Pos() == 1) {
#endif
#else
#ifdef ACTION11B_DOWN_MULTISWITCH
  if (Act11B_DOWN) {
#else
  if (Action11B.momentaryPos() == 1) {
#endif
#endif



#ifdef ACTION11B_LOW_AAGUN
#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    AAGun.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (AAGun.Playing == false) {
      DacAudio.Play(&AAGun, true);
    }
#endif

#ifdef ACTION11B_LOW_GUN
#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    Gun.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (Gun.Playing == false) {
      DacAudio.Play(&Gun, true);
    }
#endif

#ifdef ACTION11B_LOW_ALARM
#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    Alarm.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (Alarm.Playing == false) {
      DacAudio.Play(&Alarm, true);
    }
#endif


#ifdef ACTION11B_LOW_RING
#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    Ring.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (Ring.Playing == false) {
      DacAudio.Play(&Ring, true);
    }
#endif


#ifdef ACTION11B_LOW_SHORT
#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    Short_blast.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (Short_blast.Playing == false) {
      DacAudio.Play(&Short_blast, true);
    }
#endif


#ifdef ACTION11B_LOW_SHORT
#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    Long_blast.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (Long_blast.Playing == false) {
      DacAudio.Play(&Long_blast, true);
    }
#endif

#ifdef ACTION11B_LOW_PERSO_1
#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    eleven1.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (eleven1.Playing == false) {
      DacAudio.Play(&eleven1, true);
    }
#endif

#ifdef ACTION11B_LOW_PERSO_2

#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    eleven2.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (eleven2.Playing == false) {
      DacAudio.Play(&eleven2, true);
    }

#endif

#ifdef ACTION11B_LOW_PERSO_3

#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    eleven3.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (eleven3.Playing == false) {
      DacAudio.Play(&eleven3, true);
    }

#endif

#ifdef ACTION11B_LOW_PERSO_4

#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    eleven4.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (eleven4.Playing == false) {
      DacAudio.Play(&eleven4, true);
    }

#endif

#ifdef ACTION11B_LOW_PERSO_5

#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    eleven5.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (eleven5.Playing == false) {
      DacAudio.Play(&eleven5, true);
    }

#endif

#ifdef ACTION11B_LOW_PERSO_6

#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    eleven6.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (eleven6.Playing == false) {
      DacAudio.Play(&eleven6, true);
    }

#endif

#ifdef ACTION11B_LOW_PERSO_7
#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    eleven7.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (eleven7.Playing == false) {
      DacAudio.Play(&eleven7, true);
    }

#endif

#ifdef ACTION11B_LOW_PERSO_8
#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    eleven8.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (eleven8.Playing == false) {
      DacAudio.Play(&eleven8, true);
    }

#endif

#ifdef ACTION11B_LOW_SEAGULL
#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    Seagull.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (Seagull.Playing == false) {
      DacAudio.Play(&Seagull, true);
    }

#endif

#ifdef ACTION11B_LOW_AMBIENT
#ifdef ACTION11B_LOW_REPEAT_FOREVER

#else
    Ambient.Repeat = ACTION11B_LOW_REPEAT;
#endif
    if (Ambient.Playing == false) {
      DacAudio.Play(&Ambient, true);
    }

#endif

  }
#endif

#ifdef ACTION11C_ENABLE

#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#ifdef ACTION11C_UP_MULTISWITCH
  if (Act11C_UP) {
#else
  if (Action11C.Pos() == 3) {
#endif
#else
#ifdef ACTION11C_UP_MULTISWITCH
  if (Act11C_UP) {
#else
  if (Action11C.momentaryPos() == 3) {
#endif
#endif



#ifdef ACTION11C_HIGH_AAGUN
#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    AAGun.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (AAGun.Playing == false) {
      DacAudio.Play(&AAGun, true);
    }
#endif

#ifdef ACTION11C_HIGH_GUN
#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    Gun.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (Gun.Playing == false) {
      DacAudio.Play(&Gun, true);
    }
#endif

#ifdef ACTION11C_HIGH_ALARM
#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    Alarm.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (Alarm.Playing == false) {
      DacAudio.Play(&Alarm, true);
    }
#endif


#ifdef ACTION11C_HIGH_RING
#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    Ring.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (Ring.Playing == false) {
      DacAudio.Play(&Ring, true);
    }
#endif


#ifdef ACTION11C_HIGH_SHORT
#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    Short_blast.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (Short_blast.Playing == false) {
      DacAudio.Play(&Short_blast, true);
    }
#endif


#ifdef ACTION11C_HIGH_SHORT
#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    Long_blast.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (Long_blast.Playing == false) {
      DacAudio.Play(&Long_blast, true);
    }
#endif



#ifdef ACTION11C_HIGH_PERSO_1
#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    eleven1.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (eleven1.Playing == false) {
      DacAudio.Play(&eleven1, true);
    }
#endif

#ifdef ACTION11C_HIGH_PERSO_2

#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    eleven2.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (eleven2.Playing == false) {
      DacAudio.Play(&eleven2, true);
    }

#endif

#ifdef ACTION11C_HIGH_PERSO_3

#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    eleven3.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (eleven3.Playing == false) {
      DacAudio.Play(&eleven3, true);
    }

#endif

#ifdef ACTION11C_HIGH_PERSO_4

#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    eleven4.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (eleven4.Playing == false) {
      DacAudio.Play(&eleven4, true);
    }

#endif

#ifdef ACTION11C_HIGH_PERSO_5

#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    eleven5.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (eleven5.Playing == false) {
      DacAudio.Play(&eleven5, true);
    }

#endif

#ifdef ACTION11C_HIGH_PERSO_6

#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    eleven6.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (eleven6.Playing == false) {
      DacAudio.Play(&eleven6, true);
    }

#endif

#ifdef ACTION11C_HIGH_PERSO_7
#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    eleven7.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (eleven7.Playing == false) {
      DacAudio.Play(&eleven7, true);
    }

#endif

#ifdef ACTION11C_HIGH_PERSO_8
#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    eleven8.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (eleven8.Playing == false) {
      DacAudio.Play(&eleven8, true);
    }

#endif

#ifdef ACTION11C_HIGH_SEAGULL
#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    Seagull.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (Seagull.Playing == false) {
      DacAudio.Play(&Seagull, true);
    }

#endif

#ifdef ACTION11C_HIGH_AMBIENT
#ifdef ACTION11C_HIGH_REPEAT_FOREVER

#else
    Ambient.Repeat = ACTION11C_HIGH_REPEAT;
#endif
    if (Ambient.Playing == false) {
      DacAudio.Play(&Ambient, true);
    }

#endif

  }


#ifdef ACTION11C_LOW_REPEAT_FOREVER

#ifdef ACTION11C_DOWN_MULTISWITCH
  if (Act11C_DOWN) {
#else
  if (Action11C.Pos() == 1) {
#endif
#else
#ifdef ACTION11C_DOWN_MULTISWITCH
  if (Act11C_DOWN) {
#else
  if (Action11C.momentaryPos() == 1) {
#endif
#endif



#ifdef ACTION11C_LOW_AAGUN
#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    AAGun.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (AAGun.Playing == false) {
      DacAudio.Play(&AAGun, true);
    }
#endif

#ifdef ACTION11C_LOW_GUN
#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    Gun.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (Gun.Playing == false) {
      DacAudio.Play(&Gun, true);
    }
#endif

#ifdef ACTION11C_LOW_ALARM
#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    Alarm.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (Alarm.Playing == false) {
      DacAudio.Play(&Alarm, true);
    }
#endif


#ifdef ACTION11C_LOW_RING
#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    Ring.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (Ring.Playing == false) {
      DacAudio.Play(&Ring, true);
    }
#endif


#ifdef ACTION11C_LOW_SHORT
#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    Short_blast.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (Short_blast.Playing == false) {
      DacAudio.Play(&Short_blast, true);
    }
#endif


#ifdef ACTION11C_LOW_SHORT
#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    Long_blast.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (Long_blast.Playing == false) {
      DacAudio.Play(&Long_blast, true);
    }
#endif


#ifdef ACTION11C_LOW_PERSO_1
#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    eleven1.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (eleven1.Playing == false) {
      DacAudio.Play(&eleven1, true);
    }
#endif

#ifdef ACTION11C_LOW_PERSO_2

#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    eleven2.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (eleven2.Playing == false) {
      DacAudio.Play(&eleven2, true);
    }

#endif

#ifdef ACTION11C_LOW_PERSO_3

#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    eleven3.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (eleven3.Playing == false) {
      DacAudio.Play(&eleven3, true);
    }

#endif

#ifdef ACTION11C_LOW_PERSO_4

#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    eleven4.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (eleven4.Playing == false) {
      DacAudio.Play(&eleven4, true);
    }

#endif

#ifdef ACTION11C_LOW_PERSO_5

#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    eleven5.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (eleven5.Playing == false) {
      DacAudio.Play(&eleven5, true);
    }

#endif

#ifdef ACTION11C_LOW_PERSO_6

#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    eleven6.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (eleven6.Playing == false) {
      DacAudio.Play(&eleven6, true);
    }

#endif

#ifdef ACTION11C_LOW_PERSO_7
#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    eleven7.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (eleven7.Playing == false) {
      DacAudio.Play(&eleven7, true);
    }

#endif

#ifdef ACTION11C_LOW_PERSO_8
#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    eleven8.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (eleven8.Playing == false) {
      DacAudio.Play(&eleven8, true);
    }

#endif

#ifdef ACTION11C_LOW_SEAGULL
#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    Seagull.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (Seagull.Playing == false) {
      DacAudio.Play(&Seagull, true);
    }

#endif

#ifdef ACTION11C_LOW_AMBIENT
#ifdef ACTION11C_LOW_REPEAT_FOREVER

#else
    Ambient.Repeat = ACTION11C_LOW_REPEAT;
#endif
    if (Ambient.Playing == false) {
      DacAudio.Play(&Ambient, true);
    }

#endif

  }
#endif

#ifdef ACTION11D_ENABLE

#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#ifdef ACTION11D_UP_MULTISWITCH
  if (Act11D_UP) {
#else
  if (Action11D.Pos() == 3) {
#endif
#else
#ifdef ACTION11D_UP_MULTISWITCH
  if (Act11D_UP) {
#else
  if (Action11D.momentaryPos() == 3) {
#endif
#endif



#ifdef ACTION11D_HIGH_AAGUN
#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    AAGun.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (AAGun.Playing == false) {
      DacAudio.Play(&AAGun, true);
    }
#endif

#ifdef ACTION11D_HIGH_GUN
#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    Gun.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (Gun.Playing == false) {
      DacAudio.Play(&Gun, true);
    }
#endif

#ifdef ACTION11D_HIGH_ALARM
#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    Alarm.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (Alarm.Playing == false) {
      DacAudio.Play(&Alarm, true);
    }
#endif


#ifdef ACTION11D_HIGH_RING
#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    Ring.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (Ring.Playing == false) {
      DacAudio.Play(&Ring, true);
    }
#endif


#ifdef ACTION11D_HIGH_SHORT
#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    Short_blast.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (Short_blast.Playing == false) {
      DacAudio.Play(&Short_blast, true);
    }
#endif


#ifdef ACTION11D_HIGH_SHORT
#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    Long_blast.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (Long_blast.Playing == false) {
      DacAudio.Play(&Long_blast, true);
    }
#endif



#ifdef ACTION11D_HIGH_PERSO_1
#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    eleven1.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (eleven1.Playing == false) {
      DacAudio.Play(&eleven1, true);
    }
#endif

#ifdef ACTION11D_HIGH_PERSO_2

#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    eleven2.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (eleven2.Playing == false) {
      DacAudio.Play(&eleven2, true);
    }

#endif

#ifdef ACTION11D_HIGH_PERSO_3

#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    eleven3.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (eleven3.Playing == false) {
      DacAudio.Play(&eleven3, true);
    }

#endif

#ifdef ACTION11D_HIGH_PERSO_4

#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    eleven4.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (eleven4.Playing == false) {
      DacAudio.Play(&eleven4, true);
    }

#endif

#ifdef ACTION11D_HIGH_PERSO_5

#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    eleven5.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (eleven5.Playing == false) {
      DacAudio.Play(&eleven5, true);
    }

#endif

#ifdef ACTION11D_HIGH_PERSO_6

#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    eleven6.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (eleven6.Playing == false) {
      DacAudio.Play(&eleven6, true);
    }

#endif

#ifdef ACTION11D_HIGH_PERSO_7
#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    eleven7.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (eleven7.Playing == false) {
      DacAudio.Play(&eleven7, true);
    }

#endif

#ifdef ACTION11D_HIGH_PERSO_8
#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    eleven8.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (eleven8.Playing == false) {
      DacAudio.Play(&eleven8, true);
    }

#endif

#ifdef ACTION11D_HIGH_SEAGULL
#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    Seagull.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (Seagull.Playing == false) {
      DacAudio.Play(&Seagull, true);
    }

#endif

#ifdef ACTION11D_HIGH_AMBIENT
#ifdef ACTION11D_HIGH_REPEAT_FOREVER

#else
    Ambient.Repeat = ACTION11D_HIGH_REPEAT;
#endif
    if (Ambient.Playing == false) {
      DacAudio.Play(&Ambient, true);
    }

#endif

  }

#ifdef ACTION11D_LOW_REPEAT_FOREVER

#ifdef ACTION11D_DOWN_MULTISWITCH
  if (Act11D_DOWN) {
#else
  if (Action11D.Pos() == 1) {
#endif
#else
#ifdef ACTION11D_DOWN_MULTISWITCH
  if (Act11D_DOWN) {
#else
  if (Action11D.momentaryPos() == 1) {
#endif
#endif


#ifdef ACTION11D_LOW_AAGUN
#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    AAGun.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (AAGun.Playing == false) {
      DacAudio.Play(&AAGun, true);
    }
#endif

#ifdef ACTION11D_LOW_GUN
#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    Gun.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (Gun.Playing == false) {
      DacAudio.Play(&Gun, true);
    }
#endif

#ifdef ACTION11D_LOW_ALARM
#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    Alarm.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (Alarm.Playing == false) {
      DacAudio.Play(&Alarm, true);
    }
#endif


#ifdef ACTION11D_LOW_RING
#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    Ring.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (Ring.Playing == false) {
      DacAudio.Play(&Ring, true);
    }
#endif


#ifdef ACTION11D_LOW_SHORT
#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    Short_blast.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (Short_blast.Playing == false) {
      DacAudio.Play(&Short_blast, true);
    }
#endif


#ifdef ACTION11D_LOW_SHORT
#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    Long_blast.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (Long_blast.Playing == false) {
      DacAudio.Play(&Long_blast, true);
    }
#endif

#ifdef ACTION11D_LOW_PERSO_1
#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    eleven1.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (eleven1.Playing == false) {
      DacAudio.Play(&eleven1, true);
    }
#endif

#ifdef ACTION11D_LOW_PERSO_2

#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    eleven2.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (eleven2.Playing == false) {
      DacAudio.Play(&eleven2, true);
    }

#endif

#ifdef ACTION11D_LOW_PERSO_3

#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    eleven3.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (eleven3.Playing == false) {
      DacAudio.Play(&eleven3, true);
    }

#endif

#ifdef ACTION11D_LOW_PERSO_4

#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    eleven4.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (eleven4.Playing == false) {
      DacAudio.Play(&eleven4, true);
    }

#endif

#ifdef ACTION11D_LOW_PERSO_5

#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    eleven5.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (eleven5.Playing == false) {
      DacAudio.Play(&eleven5, true);
    }

#endif

#ifdef ACTION11D_LOW_PERSO_6

#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    eleven6.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (eleven6.Playing == false) {
      DacAudio.Play(&eleven6, true);
    }

#endif

#ifdef ACTION11D_LOW_PERSO_7
#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    eleven7.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (eleven7.Playing == false) {
      DacAudio.Play(&eleven7, true);
    }

#endif

#ifdef ACTION11D_LOW_PERSO_8
#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    eleven8.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (eleven8.Playing == false) {
      DacAudio.Play(&eleven8, true);
    }

#endif

#ifdef ACTION11D_LOW_SEAGULL
#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    Seagull.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (Seagull.Playing == false) {
      DacAudio.Play(&Seagull, true);
    }

#endif

#ifdef ACTION11D_LOW_AMBIENT
#ifdef ACTION11D_LOW_REPEAT_FOREVER

#else
    Ambient.Repeat = ACTION11D_LOW_REPEAT;
#endif
    if (Ambient.Playing == false) {
      DacAudio.Play(&Ambient, true);
    }

#endif

  }
#endif






#ifdef ACT12SERVOSWITCH

  if (MachineGunSound ) {
    AAgun_teensy = true;
    if (Sequence12.Playing == false) {
      Sequence12.RemoveAllPlayItems();
      sequence12();
      DacAudio.Play(&Sequence12, true);
    }
  }
  else AAgun_teensy = false;


  if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
    machinGunFlash = true;
  }

  else machinGunFlash = false;

 

  if (Act12Sound1 ) {

    twelve1_teensy = true;
    if (twelve1.Playing == false) {
      DacAudio.Play(&twelve1, true);
    }

  }


  if (Act12Sound2 ) {

    twelve2_teensy = true;
    if (twelve2.Playing == false) {
      DacAudio.Play(&twelve2, true);
    }

  }

  if (Act12Sound3 ) {

    twelve3_teensy = true;
    if (twelve3.Playing == false) {
      DacAudio.Play(&twelve3, true);
    }

  }

#endif


  } //fin init
}// fin triggersound



// Avertissement demande par babord
void sequence1() {



  Sequence1.AddPlayItem(&Long_blast);
  Sequence1.AddPlayItem(&Long_blast);
  Sequence1.AddPlayItem(&Short_blast);
  Sequence1.AddPlayItem(&Short_blast);

}

// Avertissement demande par tribord
void sequence2() {


  Sequence2.AddPlayItem(&Long_blast);
  Sequence2.AddPlayItem(&Long_blast);
  Sequence2.AddPlayItem(&Short_blast);

}
//manoeuvre babord
void sequence3() {

  Sequence3.AddPlayItem(&Short_blast);
  Sequence3.AddPlayItem(&Short_blast);

}
//manoeuvre tribord
void sequence4() {

  Sequence4.AddPlayItem(&Short_blast);

}

//manoeuvre battre en arriere
void sequence5() {

  Sequence5.AddPlayItem(&Short_blast);
  Sequence5.AddPlayItem(&Short_blast);
  Sequence5.AddPlayItem(&Short_blast);
}

// avec erre
void sequence6() {

  Sequence6.AddPlayItem(&Long_blast);

}
//sans erre
void sequence7() {

  Sequence7.AddPlayItem(&Long_blast);
  Sequence7.AddPlayItem(&Long_blast);
}
//navire privilegie
void sequence8() {

  Sequence8.AddPlayItem(&Long_blast);
  Sequence8.AddPlayItem(&Short_blast);
  Sequence8.AddPlayItem(&Short_blast);
}
//mouillage +20m
void sequence10() {

  Sequence10.AddPlayItem(&Bell);

}
//canon
void sequence11() {

  Sequence11.AddPlayItem(&Gun);

}
//mitraillette
void sequence12() {

  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);


}

// Avertissement acceptation
void sequence13() {


  Sequence13.AddPlayItem(&Long_blast);
  Sequence13.AddPlayItem(&Short_blast);
  Sequence13.AddPlayItem(&Long_blast);
  Sequence13.AddPlayItem(&Short_blast);

}
// mouillage -20m
void sequence14() {

  Sequence14.AddPlayItem(&Short_blast);
  Sequence14.AddPlayItem(&Long_blast);
  Sequence14.AddPlayItem(&Short_blast);

}
// pilot boat
void sequence15() {

  Sequence15.AddPlayItem(&Short_blast);
  Sequence15.AddPlayItem(&Short_blast);
  Sequence15.AddPlayItem(&Short_blast);
  Sequence15.AddPlayItem(&Short_blast);

}

// Remorqu??
void sequence16() {

  Sequence16.AddPlayItem(&Long_blast);
  Sequence16.AddPlayItem(&Short_blast);
  Sequence16.AddPlayItem(&Short_blast);
  Sequence16.AddPlayItem(&Short_blast);

}
