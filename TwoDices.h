#ifndef TWO_DICES_H
#define TWO_DICES_H

#include "OneDice.h"

class TwoDices : public OneDice {
public:
    TwoDices();
    void thrownTwoDices();
    int giveFirstThrownResult();
    int giveSecondThrownResult();

private:
    int secondThrown;
    int firstThrown;
};

#endif /* TWO_DICES_H */
