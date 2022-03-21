// Tournament.h

#include "Referee.h"
#include <array>

#ifndef TOURNAMENT_H_
#define TOURNAMENT_H_

    // Tournament Class
class Tournament
{
    public:
    Player * run(std::array<Player *, 8>  competitors);

};
#endif /* TOURNAMENT_H_ */
