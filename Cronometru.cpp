#include "Cronometru.h"
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;

Cronometru::Cronometru(int timpInitial) : timp(timpInitial) {}

void Cronometru::pornesteCronometru() {
    auto start = steady_clock::now();
    while (timp > 0) {
        this_thread::sleep_for(seconds(1));
        auto end = steady_clock::now();
        int elapsed = duration_cast<seconds>(end - start).count();
        timp -= elapsed;
        start = end;

        if (timp <= 0) {
            timp = 0;
            cout << "Timpul a expirat!\n";
            break;
        }
        cout << "Timp ramas: " << timp << " secunde\n";
    }
}

void Cronometru::scadeTimp(int secunde) {
    timp -= secunde;
    if (timp < 0) timp = 0;
}

void Cronometru::adaugaTimp(int secunde) {
    timp += secunde;
}

int Cronometru::getTimpRamas() const {
    return timp;
}

bool Cronometru::timpExpirat() const {
    return timp <= 0;
}
