#ifndef PERSONAJ_H
#define PERSONAJ_H

#include <string>
using namespace std;

class Personaj {
private:
    string nume;
    int energie;

public:
    Personaj(const string& nume, int energie = 100);

    void reduceEnergie(int valoare);
    bool esteObosit() const;
    string getNume() const;
    int getEnergie() const;
};

#endif // PERSONAJ_H
