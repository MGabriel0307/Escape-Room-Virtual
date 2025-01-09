#include "Personaj.h"
#include<iostream>

Personaj::Personaj(const string& nume, int energie)
    : nume(nume), energie(energie) {}

void Personaj::reduceEnergie(int valoare) {
    energie -= valoare;
    if (energie < 0) energie = 0;
}

bool Personaj::esteObosit() const {
    return energie <= 0;a
}

string Personaj::getNume() const {
    return nume;
}

int Personaj::getEnergie() const {
    return energie;
}
void Personaj::afis() {
    std::cout << "Energie este " << " "<< energie << endl;
    
}
