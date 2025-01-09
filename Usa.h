#ifndef USA_H
#define USA_H

#include "Inventar.h"
#include <string>
using namespace std;

class Usa {
private:
    bool incuiata;
    string cheieNecesar;

public:
    Usa(bool incuiata, const string& cheieNecesar);

    bool deschideUsa(Inventar& inventar);
};

#endif // USA_H
