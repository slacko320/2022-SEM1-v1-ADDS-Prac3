// RandomComputer.h

#include "Computer.h"

#ifndef RANDOMCOMPUTER_H_
#define RANDOMCOMPUTER_H_

// Derived class, RandomComputer makes random moves.
class RandomComputer : public Computer 
{
   public:
    RandomComputer();
    virtual char makeMove();
};
#endif /* RANDOMCOMPUTER_H_ */
