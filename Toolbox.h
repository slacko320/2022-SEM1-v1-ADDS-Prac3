// Toolbox.h

#include "Computer.h"

#ifndef TOOLBOX_H_
#define TOOLBOX_H_

// Derived class, Toolbox always chooses Scissors
class Toolbox : public Computer
{
    public:
    virtual char makeMove();
};
#endif /* TOOLBOX_H_ */
