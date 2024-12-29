#include "Obiect.h"

Obiect::Obiect(const string& nume, const string& descriere)
    : nume(nume), descriere(descriere) {}

string Obiect::getNume() const {
    return nume;
}

string Obiect::getDescriere() const {
    return descriere;
}
