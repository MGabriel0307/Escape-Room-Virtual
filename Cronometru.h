#ifndef CRONOMETRU_H
#define CRONOMETRU_H

#include <iostream>
using namespace std;

class Cronometru {
private:
    int timp; // in secunde

public:
    Cronometru(int timpInitial = 60);
    void pornesteCronometru();
    void scadeTimp(int secunde);
    void adaugaTimp(int secunde);
    int getTimpRamas() const;
    bool timpExpirat() const;
};

#endif // CRONOMETRU_H
