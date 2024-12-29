#ifndef CRONOMETRU_H
#define CRONOMETRU_H

#include <chrono>
using namespace std;
using namespace chrono;

class Cronometru {
private:
    steady_clock::time_point start;
    int durata; // secunde

public:
    Cronometru(int durata);
    void startCronometru();
    bool esteTimpulExpirat() const;
};

#endif // CRONOMETRU_H
