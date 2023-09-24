#include <iostream>
#include <cstdlib>
#include "CoinToss.h"
#include <ctime>

CoinToss::CoinToss() : Thrown(2) {}

void CoinToss::thrownOneCoin() {
    this-> coinThrown = giveAnumber();
}

int CoinToss::giveOneCoinThrownResult() {
    return this-> coinThrown;
}
