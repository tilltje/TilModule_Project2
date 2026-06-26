#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "initialisatie.h"

void initialisatie_communicatie(void) {
    NEXT_MOD_DDR |= (1 << NEXT_MOD); // Output
    NEXT_MOD_PORT &= ~(1 << NEXT_MOD); // Laag zetten
}

void initialisatie_knopje(void) {
    KNOP_DDR &= ~(1 << KNOP); // Input
    KNOP_PORT |= (1 << KNOP); // Pull-up weerstand
}
