#include "Inventar.h"
#include <iostream>
using namespace std;

void Inventar::adaugaObiect(const Obiect& obiect) {
    obiecte.push_back(obiect);
}

bool Inventar::areObiect(const string& nume) const {
    for (const auto& obiect : obiecte) {
        if (obiect.getNume() == nume) {
            return true;
        }
    }
    return false;
}

void Inventar::afiseazaInventar() const {
    cout << "Obiecte în inventar:\n";
    for (const auto& obiect : obiecte) {
        cout << "- " << obiect.getNume() << ": " << obiect.getDescriere() << endl;
    }
}
