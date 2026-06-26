/* Deze code is bedoeld om de wisselopdracht uit te kunnen voeren tijdens de wedstrijd.
Wanneer de knop op de module wordt ingedrukt, signaleert hij naar de AGV dat die kan gaan rijden.
 */
/// INCLUDES ///
#include <avr/io.h>
#include "initialisatie.h"

/// MAIN ///
int main(void)
{
    initialisatie_communicatie();
    initialisatie_knopje();

    while(1) {
        if ((KNOP_PIN & (1 << KNOP)) == 0) { // Knopje ingedrukt
            NEXT_MOD_PORT |= (1<< NEXT_MOD); // Signaleer naar AGV
        }
    }
    return 0;
}
