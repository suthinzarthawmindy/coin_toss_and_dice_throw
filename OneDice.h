#ifndef ONE_DICE_H
#define ONE_DICE_H

#include "thrown.h"

class OneDice : public Thrown {
public:
    OneDice();
    void thrownOneDice();
    int giveOneThrownResult();
    void setOneDice (int d);
private:
    int oneDiceThrown;

};

#endif /* ONE_DICE_H */
