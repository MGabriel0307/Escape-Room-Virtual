#include "Intrebare.h"

Intrebare::Intrebare(const string& intrebare, const string& raspunsCorect)
    : intrebare(intrebare), raspunsCorect(raspunsCorect) {}

bool Intrebare::verificaRaspuns(const string& raspuns) const {
    return raspuns == raspunsCorect;
}

string Intrebare::getIntrebare() const {
    return intrebare;
}
