#include "Usa.h"
#include <iostream>
using namespace std;

Usa::Usa(bool incuiata, const string& cheieNecesar)
    : incuiata(incuiata), cheieNecesar(cheieNecesar) {}

bool Usa::deschideUsa(Inventar& inventar) {
    if (!incuiata) {
        cout << "Usa este deja deschisa!\n";
        return true;
    }
    if (inventar.contineObiect(cheieNecesar)) {
        cout << "Usa s-a deschis cu succes!\n";
        incuiata = false;
        return true;
    }
    cout << "Usa este incuiata. Ai nevoie de cheia: " << cheieNecesar << endl;
    return false;
}
