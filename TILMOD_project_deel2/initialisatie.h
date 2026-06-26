#ifndef INITIALISATIE_H_INCLUDED
#define INITIALISATIE_H_INCLUDED

/// DEFINITIES ///
// Communicatiepin
#define NEXT_MOD            PG1 // Arduino Pin 40
#define NEXT_MOD_DDR        DDRG
#define NEXT_MOD_PORT       PORTG

// Knop
#define KNOP                PF1 // Arduino Pin A1
#define KNOP_DDR            DDRF
#define KNOP_PIN            PINF
#define KNOP_PORT           PORTF

/// FUNCTIES ///
void initialisatie_communicatie(void);
void initialisatie_knopje(void);

#endif // INITIALISATIE_H_INCLUDED
