/*
 */

#include <avr/io.h>
#include "initialisatie.h"

int main(void)
{
    initialisatie_communicatie();
    initialisatie_knopje();

    while(1) {
        if ((PORTF & (1 << PF1)) == 0) {
            NEXT_MOD_PORT |= (1<< NEXT_MOD);
        }

    }



    return 0;
}
