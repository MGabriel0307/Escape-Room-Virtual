#ifndef CAMERA_H
#define CAMERA_H

#include "Intrebare.h"
#include "Usa.h"
#include "Obiect.h"
#include <string>
using namespace std;

class Camera {
private:
    string descriere;
    Intrebare intrebare;
    Usa usa;
    Obiect obiect;

public:
    Camera(const string& descriere, const Intrebare& intrebare, const Usa& usa, const Obiect& obiect);

    string getDescriere() const;
    bool rezolvaPuzzle(const string& raspuns, Inventar& inventar);
    void colecteazaObiect(Inventar& inventar);
    bool deschideUsa(Inventar& inventar);
};

#endif // CAMERA_H
