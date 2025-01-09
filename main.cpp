#include "Cronometru.h"
#include "Personaj.h"
#include "Camera.h"
#include <vector>
#include <iostream>
using namespace std;

void afiseazaMeniu() {
    cout << "\n--- Meniu ---\n";
    cout << "1. Verifica descrierea camerei\n";
    cout << "2. Afiseaza intrebarile\n";
    cout << "3. Raspunde la intrebare\n";
    cout << "4. Verifica inventarul\n";
    cout << "5. Verifica usa\n";
    cout << "6. Iesi din joc\n";
}

int main() {
    
    Personaj jucator("Gabriel");
    Inventar inventar;

    vector<Intrebare> intrebari = {
        Intrebare("In ce an a inceput al Doilea Razboi Mondial?", "1939"),
        Intrebare("Ce tara a fost invadata prima?", "Polonia"),
        Intrebare("Care erau principalele puteri ale Axei?", "Germania, Italia, Japonia"),
        Intrebare("Care natiune a atacat Pearl Harbor?", "Japonia"),
        Intrebare("Cum este cunoscuta debarcarea din Normandia?", "Ziua Z"),
        Intrebare("Cate milioane de evrei au fost ucisi in Holocaust?", "6"),
        Intrebare("In ce an a avut loc batalia de la Stalingrad?", "1943"),
        Intrebare("Ce tara a folosit bombe atomice in Al Doilea Razboi Mondial?", "SUA"),
        Intrebare("In ce an s-a incheiat Al Doilea Razboi Mondial?", "1945"),
        Intrebare("Cum se numeste procesul judiciar al liderilor nazisti?", "Nurnberg")
    };

    vector<Obiect> obiecte = {
        Obiect("cheie1", "O cheie veche si ruginita."),
        Obiect("cheie2", "O cheie misterioasa."),
        Obiect("cheie3", "O cheie aurie."),
        Obiect("cheie4", "O cheie stralucitoare."),
        Obiect("cheie5", "O cheie simpla."),
        Obiect("cheie6", "O cheie mare si grea."),
        Obiect("cheie7", "O cheie antica."),
        Obiect("cheie8", "O cheie moderna."),
        Obiect("cheie9", "O cheie de argint."),
        Obiect("trofeu", "Un trofeu al victoriei.")
    };

    vector<string> descrieri = {
        "Camera 1: Evenimentele care au declansat razboiul.",
        "Camera 2: Primele momente ale razboiului.",
        "Camera 3: Ascensiunea Puterilor Axei.",
        "Camera 4: Atacul surpriza asupra Pearl Harbor.",
        "Camera 5: Planificarea si executia Zilei Z.",
        "Camera 6: Ororile Holocaustului.",
        "Camera 7: Batalia de la Stalingrad.",
        "Camera 8: Deciziile finale din Pacific.",
        "Camera 9: Sfarsitul razboiului in Europa.",
        "Camera 10: Consecintele razboiului si justitia." };

    vector<Camera> camere;
    for (size_t i = 0; i < intrebari.size(); ++i) {
        camere.push_back(Camera(
            descrieri[i],
            { intrebari[i] },
            Usa(i < intrebari.size() - 1, "cheie" + to_string(i + 1)),
            obiecte[i]
        ));
    }

    int cameraCurenta = 0;
    bool jocInCurs = true;

    cout << "Bun venit, " << jucator.getNume() << "!\n";
    afiseazaMeniu();

    while (jocInCurs) {
        cout << "\nAlege o optiune: ";
        int optiune;
        cin >> optiune;
        cin.ignore();

        switch (optiune) {
        case 1: {
            cout << camere[cameraCurenta].getDescriere() << endl;
            break;
        }
        case 2: {
            camere[cameraCurenta].afiseazaIntrebari();
            break;
        }
        case 3: {
            cout << "Introdu raspunsul: ";
            string raspuns;
            getline(cin, raspuns);

            //Cronometru cronometru(30);
            //cronometru.pornesteCronometru();

            if (camere[cameraCurenta].rezolvaPuzzle(raspuns, inventar)) {
                cout << "Puzzle rezolvat cu succes!\n";
                if (cameraCurenta < camere.size() - 1) {
                    cameraCurenta++;
                    cout << "Ai trecut in camera urmatoare!\n";
                    afiseazaMeniu();
                }
                else {
                    cout << "Felicitari! Ai evadat din joc!\n";
                    jocInCurs = false;
                }
            }
            else {
                cout << "Raspuns gresit sau timpul a expirat!\n";
                jucator.reduceEnergie(jucator.getEnergie() * 0.2);
            }

            jucator.afis();
            break;
        }
        case 4: {
            inventar.afiseazaInventar();
            break;
        }
        case 5: {
            if (camere[cameraCurenta].deschideUsa(inventar)) {
                cout << "Usa s-a deschis cu succes!\n";
            }
            else {
                cout << "Nu poti deschide usa.\n";
            }
            break;
        }
        case 6: {
            cout << "Ai iesit din joc. La revedere!\n";
            jocInCurs = false;
            break;
        }
        default:
            cout << "Optiune invalida. Incearca din nou.\n";
            break;
        }
    }

    return 0;
}
