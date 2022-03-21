// Crescendo.h
#include "Computer.h"

#ifndef CRESCENDO_H_
#define CRESCENDO_H_

// Crescendo Class
class Crescendo : public Computer
{
    public:
    virtual char makeMove();
    void resetMoveOrder();

    private:
    int moveOrder = 1;
};
#endif /* CRESCENDO_H_ */
