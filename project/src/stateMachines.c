#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "switches.h"

void state_advance() {
    switch (switch_state_changed) {
        case 1:
            toggle_red();
            break;
        case 2:
            toggle_green();
            break;
        case 3:
            toggle_both();
            break;
        case 4:
            toggle_both_off();
            break;
    }
}
