#ifndef __MC_MSP430_H
#define __MC_MSP430_H
#include <msp430fr5994.h>
#endif

#ifndef __MC_CLKINT_H
#include "Interrupts/clock_interrupt.h"
#endif

#ifndef __MC_BUTINT_H
#include "Interrupts/button_interrupt.h"
#endif

#ifndef __MC_SETUP_H
#define __MC_SETUP_H

short mc_setup();

#endif
