#include "Camera.h"
#include <iostream>
using namespace std;

Camera::Camera(const string& descriere, const Intrebare& intrebare, const Usa& usa, const Obiect& obiect)
    : descriere(descriere), intrebare(intrebare), usa(usa), obiect(obiect) {}

string Camera::getDescriere() const {
    return descriere;
}

bool Camera::rezolvaPuzzle(const string& raspuns, Inventar& inventar) {
    if (intrebare.verificaRaspuns(raspuns)) {
        cout << "Răspuns corect!\n";
        colecteazaObiect(inventar);
        return true;
    }
    cout << "Răspuns greșit!\n";
    return false;
}

void Camera::colecteazaObiect(Inventar& inventar) {
    inventar.adaugaObiect(obiect);
    cout << "Ai colectat obiectul: " << obiect.getNume() << "!\n";
}

bool Camera::deschideUsa(Inventar& inventar) {
    return usa.deschideUsa(inventar);
}
