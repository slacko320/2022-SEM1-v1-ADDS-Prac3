// Crescendo.h
#include "Computer.h"

#ifndef CRESCENDO_H_
#define CRESCENDO_H_

// Derived class, Crescendo moves in the following order: Paper, Scissors, Rock.
class Crescendo : public Computer
{
    public:
    virtual char makeMove();
    void resetMoveOrder();

    private:
    int moveOrder = 1;
};

#endif /* CRESCENDO_H_ */
