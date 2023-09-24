#include <iostream>
#include <cstdlib>
#include "OneDice.h"
#include "TwoDices.h"
#include <ctime>

TwoDices::TwoDices() : OneDice() {}

void TwoDices::thrownTwoDices() {
    this-> setOneDice (giveAnumber()) ;
    this-> secondThrown = giveAnumber();
}


int TwoDices::giveFirstThrownResult(){
    return this-> giveOneThrownResult();
}

int TwoDices::giveSecondThrownResult() {
    return this-> secondThrown;
}
