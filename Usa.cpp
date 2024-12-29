#include "Usa.h"
#include <iostream>
using namespace std;

Usa::Usa(bool incuiata, const string& cheiaNecesara)
    : incuiata(incuiata), cheiaNecesara(cheiaNecesara) {}

bool Usa::deschideUsa(Inventar& inventar) {
    if (!incuiata) {
        cout << "Ușa este deja descuiată.\n";
        return true;
    }
    if (inventar.areObiect(cheiaNecesara)) {
        cout << "Ai folosit cheia: " << cheiaNecesara << ". Ușa s-a descuiat!\n";
        incuiata = false;
        return true;
    }
    cout << "Ușa este încuiată. Ai nevoie de cheia: " << cheiaNecesara << ".\n";
    return false;
}
