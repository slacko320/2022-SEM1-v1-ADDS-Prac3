// PaperDoll.H
#include "Computer.h"

#ifndef PAPERDOLL_H_
#define PAPERDOLL_H_

// Derived class, PaperDoll moves in the following order: Paper, Scissors, Scissors.
class PaperDoll : public Computer
{
    public:
    virtual char makeMove();
    void resetMoveOrder();

    private:
    int moveOrder = 1;    
};
#endif /* PAPERDOLL_H_ */
