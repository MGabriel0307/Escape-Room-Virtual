#ifndef OBIECT_H
#define OBIECT_H

#include <string>
using namespace std;

class Obiect {
private:
    string nume;
    string descriere;

public:
    Obiect(const string& nume, const string& descriere);
    string getNume() const;
    string getDescriere() const;
};

#endif // OBIECT_H

