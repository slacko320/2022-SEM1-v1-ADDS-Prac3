#include "Computer.h"

#ifndef FISTFULLODOLLARS_H_
#define FISTFULLODOLLARS_H_

// Derived class, istfullODollars moves in the following order: Rock, Paper,Paper
class FistfullODollars : public Computer
{
    public:
    virtual char makeMove();
    void resetMoveOrder();

    private:
    int moveOrder = 1;
};
#endif /* FISTFULLODOLLARS_H_ */
