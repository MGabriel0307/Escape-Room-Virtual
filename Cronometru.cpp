#include "Cronometru.h"

Cronometru::Cronometru(int durata) : durata(durata) {}

void Cronometru::startCronometru() {
    start = steady_clock::now();
}

bool Cronometru::esteTimpulExpirat() const {
    auto acum = steady_clock::now();
    auto secundeTrecute = duration_cast<seconds>(acum - start).count();
    return secundeTrecute > durata;
}
