#ifndef INVENTAR_H
#define INVENTAR_H

#include "Obiect.h"
#include <vector>
#include <string>
using namespace std;

class Inventar {
private:
    vector<Obiect> obiecte;

public:
    void adaugaObiect(const Obiect& obiect);
    bool contineObiect(const string& nume) const;
    void afiseazaInventar() const;
};

#endif // INVENTAR_H
