// Player
// Player is a Parent class for both Human and Computer classes

#ifndef PLAYER_H_
#define PLAYER_H_

class Player
{
    public:
    virtual char makeMove() = 0;
    virtual void resetMoveOrder()
    {
        // do nothing
    }
};

#endif /* PLAYER_H_ */
