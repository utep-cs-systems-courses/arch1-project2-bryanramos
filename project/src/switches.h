#ifndef switches_included
#define switches_included

#define SW1 BIT0

#define SWITCHES SW1

void switch_init();
void switch_interrupt_handler();

extern char switch_state_down, switch_state_changed, tempo;

#endif
 
