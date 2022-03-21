// Bureaucrat.h file
#include "Computer.h"

#ifndef BUREAUCRAT_H_
#define BUREAUCRAT_H_

// Derived class, Bureaucrat always chooses Paper
class Bureaucrat : public Computer
{
    public:
    virtual char makeMove();
};
#endif /* BUREAUCRAT_H_ */
