#ifndef COIN_TOSS_H
#define COIN_TOSS_H

#include "thrown.h"

class CoinToss : public Thrown {
public:
    CoinToss();
    void thrownOneCoin();
    int giveOneCoinThrownResult();

private:
    int coinThrown;
};

#endif /* COIN_TOSS_H */
