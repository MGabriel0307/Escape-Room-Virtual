#include <iostream>
#include "Camera.h"
#include "Cronometru.h"
#include "Personaj.h"
#include "Inventar.h"
using namespace std;

int main() {
    // Ini?ializare joc
    Personaj jucator("Gabriel");
    Inventar inventar;

    Camera camera1(
        "Camera 1 - O camer? �ntunecat? cu pere?i plini de scrisuri.",
        Intrebare("Care este capitala Fran?ei?", "Paris"),
        Usa(true, "cheie1"),
        Obiect("cheie1", "O cheie veche ?i ruginit?.")
    );

    Camera camera2(
        "Camera 2 - O camer? luminoas? cu un cuf?r mare �n mijloc.",
        Intrebare("C�t face 5 x 6?", "30"),
        Usa(false, ""),
        Obiect("clepsidr?", "O clepsidr? aurie.")
    );

    // Jocul �ncepe
    cout << "Bun venit, " << jucator.getNume() << "!\n";

    // Camera 1
    cout << camera1.getDescriere() << endl;
    cout << "�ntrebare: " << camera1.getDescriere() << endl;

    string raspuns;
    cout << "R?spuns: ";
    getline(cin, raspuns);

    if (camera1.rezolvaPuzzle(raspuns, inventar)) {
        if (camera1.deschideUsa(inventar)) {
            cout << "Ai trecut �n camera urm?toare!\n";
        }
    }
    else {
        cout << "Nu po?i avansa f?r? s? r?spunzi corect.\n";
        return 0;
    }

    // Camera 2
    cout << camera2.getDescriere() << endl;
    cout << "�ntrebare: " << camera2.getDescriere() << endl;

    cout << "R?spuns: ";
    getline(cin, raspuns);

    if (camera2.rezolvaPuzzle(raspuns, inventar)) {
        cout << "Felicit?ri! Ai rezolvat toate camerele!\n";
    }

    return 0;
}
