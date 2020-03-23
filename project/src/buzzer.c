#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"

static int counterForSong1 = 0;

void buzzer_init()
{
    /* 
       Direct timer A output "TA0.1" to P2.6.  
        According to table 21 from data sheet:
          P2SEL2.6, P2SEL2.7, anmd P2SEL.7 must be zero
          P2SEL.6 must be 1
        Also: P2.6 direction must be output
    */
    timerAUpmode();		/* used to drive speaker */
    P2SEL2 &= ~(BIT6 | BIT7);
    P2SEL &= ~BIT7; 
    P2SEL |= BIT6;
    P2DIR = BIT6;		/* enable output to speaker (P2.6) */
}

void song1(){
  switch (counterForSong1) {
    case 0:
    case 1:
    case 2:
    case 3: 
        buzzer_set_period(750); 
        counterForSong1++; 
        break; 
    case 4: 
        buzzer_set_period(950); 
        counterForSong1++; 
        break;
    case 5: 
        buzzer_set_period(630);
        counterForSong1++;
        break; 
    case 6:
        buzzer_set_period(1260);
        counterForSong1 = 0;
        break;      
  }
}


void buzzer_set_period(short cycles) /* buzzer clock = 2MHz.  (period of 1k results in 2kHz tone) */
{
  CCR0 = cycles; 
  CCR1 = cycles >> 1;		/* one half cycle */
}


     
