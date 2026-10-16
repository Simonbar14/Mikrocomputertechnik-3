#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

// 1. & 4. Globale Variablen deklarieren
int globalVar = 1;           // Beliebiger Wert
int globalVar2 = 42;         // Weiterer beliebiger Wert
int globalZero = 0;          // Nullwert
int globalUninit;            // Kein Wert zugewiesen

// 5. Globale Variablen mit static und const
static int globalStatic = 7; // Mit static
const int globalConst = 99;  // Mit const

int main(int argc, char **argv) {

    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    /* INSERT YOUR CODE HERE */
    fmt::print("globalVar:    Wert = {}, Adresse = {}\n", globalVar, fmt::ptr(&globalVar));
    fmt::print("globalVar2:   Wert = {}, Adresse = {}\n", globalVar2, fmt::ptr(&globalVar2));
    fmt::print("globalZero:   Wert = {}, Adresse = {}\n", globalZero, fmt::ptr(&globalZero));
    fmt::print("globalUninit: Wert = {}, Adresse = {}\n", globalUninit, fmt::ptr(&globalUninit));
    fmt::print("globalStatic: Wert = {}, Adresse = {}\n", globalStatic, fmt::ptr(&globalStatic));
    fmt::print("globalConst:  Wert = {}, Adresse = {}\n", globalConst, fmt::ptr(&globalConst));

    return 0; /* exit gracefully*/
}