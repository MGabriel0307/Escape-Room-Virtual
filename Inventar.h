#ifndef INVENTAR_H
#define INVENTAR_H

#include "Obiect.h"
#include <vector>
using namespace std;

class Inventar {
private:
    vector<Obiect> obiecte;

public:
    void adaugaObiect(const Obiect& obiect);
    bool areObiect(const string& nume) const;
    void afiseazaInventar() const;
};

#endif // INVENTAR_H
