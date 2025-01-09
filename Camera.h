#ifndef CAMERA_H
#define CAMERA_H

#include "Intrebare.h"
#include "Usa.h"
#include "Obiect.h"
#include <string>
#include <vector>
using namespace std;

class Camera {
private:
    string descriere;
    vector<Intrebare> intrebari;
    Usa usa;
    Obiect obiect;

public:
    Camera(const string& descriere, const vector<Intrebare>& intrebari, const Usa& usa, const Obiect& obiect);

    string getDescriere() const;
    void afiseazaIntrebari() const;
    bool rezolvaPuzzle(const string& raspuns, Inventar& inventar);
    void colecteazaObiect(Inventar& inventar);
    bool deschideUsa(Inventar& inventar);
};

#endif // CAMERA_H
