#ifndef __MC_MSP430_H
#define __MC_MSP430_H
#include <msp430fr5994.h>
#endif

#ifndef __MC_BUTINT_H
#define __MC_BUTINT_H

void set_button_interrupts();

#endif

//#define BIT_REFERENCE = BIT2 | BIT3 | BIT4 | BIT7
#define BIT_REFERENCE 0b10011100

/// TODO: Redefine BIT_REFERENCE to explicitly include button interrupt in variable name