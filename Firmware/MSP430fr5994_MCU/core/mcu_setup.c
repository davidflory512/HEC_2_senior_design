#include "mcu_setup.h"

#ifdef COMPILE_TRANSMITTER
short BUILDING_TRANSMITTER = 1;
#endif
#ifndef COMPILE_TRANSMITTER
short BUILDING_TRANSMITTER = 0;
#endif

short mc_setup(){
    WDTCTL = WDTPW | WDTHOLD; // stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5; // power mode 5 control register 0 locks LPM5 bit

    short RUN_MCU_TESTS = 0;

    if ( BUILDING_TRANSMITTER == 1 ) {
        buildTransmitter();
   } else {
        buildReceiver();
   };

    if ( RUN_MCU_TESTS == 1 ){
        return runTests(BUILDING_TRANSMITTER);
    };

    set_button_interrupts(BUILDING_TRANSMITTER);
//    setUpLCD();
//    GetVoltage();
    main_clock_interrupt();
//    set_button_interrupts();  /// <-- Requires a test-board suite before reimplementing & a method to check for test board

/// TO-DO: We need to integrate interrupts by grade / priority levels.

    return 0;
}

