// This is a Referee.h file

#include "Human.h"
#include "Computer.h"

#ifndef REFEREE_H_
#define REFEREE_H_

    // Referee Class
class Referee
{
    public:
    // A constructor for Referee class
    Referee();

    // Public method for Referee class
    // This method returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)
    char refGame(Player* player1, Player* player2);
};
#endif /* REFEREE_H_ */
