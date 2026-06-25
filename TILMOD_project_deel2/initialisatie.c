#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "initialisatie.h"

void initialisatie_communicatie(void) {
    MODNUMMER_DDR |= (1 << MODNUMMER); // output
    NEXT_MOD_DDR |= (1 << NEXT_MOD);
    ACK_MOD_DDR |= (1 << ACK_MOD);
    LIJN_DDR &= ~(1 << LIJN); //input
    NEXT_AGV_DDR &= ~(1 << NEXT_AGV);
    ACK_AGV_DDR &= ~(1 << ACK_AGV);

    MODNUMMER_PORT &= ~(1 << MODNUMMER); //Laag zetten, want detectiemodule
    NEXT_MOD_PORT &= ~(1 << NEXT_MOD); // dit was modnummer, foutje
    ACK_MOD_PORT &= ~(1 << ACK_MOD);

    LIJN_PORT |= (1 << LIJN); // PULL-UPS ACTIVEREN
    NEXT_AGV_PORT |= (1 << NEXT_AGV);
    ACK_AGV_PORT |= (1 << ACK_AGV);

    /*// externe interrupt vanuit agv
    EIMSK |= (1 << INT0); // interrupt 0 (pin 21) aanzetten
    EICRA |= (1 << ISC01) | (1 << ISC00);

    TCCR3B &= ~(1 << CS32);
    TCCR3B |= (1 << CS31);
    TCCR3B &= ~(1 << CS30);*/
}

void initialisatie_knopje(void) {
    DDRF &= ~(1 << PF1);


}
