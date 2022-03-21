// This is a Referee.cpp file

#include <iostream>
#include "Referee.h"
using namespace std;

Referee::Referee()
{
}

// returns the outcome for player1: 'W', 'L' or 'T' (Win, Lose, Tie)
char Referee::refGame(Player* player1, Player* player2)
{
    char P1Move = player1->makeMove();
    char P2Move = player2->makeMove();
    
    if((P1Move == 'R' && P2Move == 'R') || (P1Move == 'P' && P2Move == 'P') || (P1Move == 'S' && P2Move == 'S'))
    {
        return 'T';
    }
    else if((P1Move == 'R' && P2Move == 'P') || (P1Move == 'P' && P2Move == 'S') || (P1Move == 'S' && P2Move == 'R'))
    {
        return 'L';
    }
    else if((P1Move == 'R' && P2Move == 'S') || (P1Move == 'P' && P2Move == 'R') || (P1Move == 'S' && P2Move == 'P'))
    {
        return 'W';
    }
    else
    {
        cout << "Referee failed to return result." << endl;
        return '?';
    }
}
