// This is Computer.h file

#include "Player.h"

#ifndef COMPUTER_H_
#define COMPUTER_H_

// Below is Computer Class
class Computer : public Player
{
    public:
    // A constructor for Computer Class
    Computer();

    // A method for Computer Class
    virtual char makeMove();
};
#endif /* COMPUTER_H_ */