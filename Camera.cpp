#include "Camera.h"
#include <iostream>
using namespace std;

Camera::Camera(const string& descriere, const vector<Intrebare>& intrebari, const Usa& usa, const Obiect& obiect)
    : descriere(descriere), intrebari(intrebari), usa(usa), obiect(obiect) {}

string Camera::getDescriere() const {
    return descriere;
}

void Camera::afiseazaIntrebari() const {
    cout << "Intrebari disponibile:" << endl;
    for (size_t i = 0; i < intrebari.size(); ++i) {
        cout << i + 1 << ". " << intrebari[i].getIntrebare() << endl;
    }
}

bool Camera::rezolvaPuzzle(const string& raspuns, Inventar& inventar) {
    for (const auto& intrebare : intrebari) {
        if (intrebare.verificaRaspuns(raspuns)) {
            cout << "Raspuns corect!" << endl;
            colecteazaObiect(inventar);
            return true;
        }
    }
    return false;
}

void Camera::colecteazaObiect(Inventar& inventar) {
    inventar.adaugaObiect(obiect);
    cout << "Ai colectat obiectul: " << obiect.getNume() << "!" << endl;
}

bool Camera::deschideUsa(Inventar& inventar) {
    return usa.deschideUsa(inventar);
}
