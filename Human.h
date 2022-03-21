// This is a Human.h file

#include "Player.h"

#ifndef HUMAN_H_
#define HUMAN_H_

// A Human Class
class Human : public Player
{

    public:
    // A constructor for Human class
    Human();

    // A public method for Human class
    virtual char makeMove();
};
#endif /* HUMAN_H_ */
