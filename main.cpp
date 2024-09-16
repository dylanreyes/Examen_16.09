#include <iostream>
#include "vol.h"

int main() {
    // Ubicació 1: Aeroport de Barcelona-El Prat
    double lat1 = 41.2974;
    double lon1 = 2.0833;

    // Ubicació 2: Aeroport de Madrid-Barajas
    double lat2 = 40.4719;
    double lon2 = -3.5626;

    // Velocitat constant d'un avió (per exemple, 900 km/h)
    double velocitat = 900.0;

    double tempsVol = calcularTempsVol(lat1, lon1, lat2, lon2, velocitat);

    std::cout << "El temps estimat de vol entre l'Aeroport de Barcelona-El Prat i "
              << "l'Aeroport de Madrid-Barajas és de: " 
              << tempsVol << " hores." << std::endl;

    return 0;
}
