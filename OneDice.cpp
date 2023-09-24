
#include <iostream>
#include <cstdlib>
#include "OneDice.h"
#include <ctime>

OneDice::OneDice() : Thrown(6) {}

void OneDice::thrownOneDice() {
    this-> oneDiceThrown = giveAnumber();
}

int OneDice::giveOneThrownResult() {
    return this-> oneDiceThrown;
}

    void OneDice::setOneDice (int d) {
        oneDiceThrown = d;
    }
   

