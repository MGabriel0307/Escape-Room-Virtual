#ifndef INTREBARE_H
#define INTREBARE_H

#include <string>
using namespace std;

class Intrebare {
private:
    string intrebare;
    string raspunsCorect;

public:
    Intrebare(const string& intrebare, const string& raspunsCorect);

    bool verificaRaspuns(const string& raspuns) const;
    string getIntrebare() const;
};

#endif // INTREBARE_H
