#ifndef USA_H
#define USA_H

#include "Inventar.h"
using namespace std;

class Usa {
private:
    bool incuiata;
    string cheiaNecesara;

public:
    Usa(bool incuiata, const string& cheiaNecesara);
    bool deschideUsa(Inventar& inventar);
};

#endif // USA_H
