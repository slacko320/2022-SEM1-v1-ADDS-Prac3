// Tournament.cpp

#include "Tournament.h"

Player* Tournament::run(std::array<Player *, 8>  competitors)
{
    Referee ref1;
    int p1Score = 0;
    int p2Score = 0;
    int remainingPlayers = 8;
    Player* quarterWinners[4];

    for(int i=0; i<5; i++) {
        if( ref1.refGame(competitors[0], competitors[1]) == 'W') {
            p1Score ++;
        } else if( ref1.refGame(competitors[0], competitors[1]) == 'L') {
            p2Score ++;
        } else {
            // No scores for both players.   
        };
    }

    if(p1Score >= p2Score) {
        quarterWinners[0] = competitors[0];
    }
    p1Score = 0;
    p2Score = 0;

    for(int i=0; i<8; i++) {
        competitors[i] -> resetMoveOrder();
    }

    for(int i=0; i<5; i++) {
        if( ref1.refGame(competitors[2], competitors[3]) == 'W') {
            p1Score ++;
        } else if( ref1.refGame(competitors[2], competitors[3]) == 'L') {
            p2Score ++;
        } else {
            // No scores for both players.   
        };
    }

    if(p1Score >= p2Score) {
        quarterWinners[0] = competitors[0];
    }
    p1Score = 0;
    p2Score = 0;

    for(int i=0; i<8; i++) {
        competitors[i] -> resetMoveOrder();
    }

    for(int i=0; i<5; i++) {
        if( ref1.refGame(competitors[4], competitors[5]) == 'W') {
            p1Score ++;
        } else if( ref1.refGame(competitors[4], competitors[5]) == 'L') {
            p2Score ++;
        } else {
            // No scores for both players.   
        };
    }

    if(p1Score >= p2Score) {
        quarterWinners[0] = competitors[0];
    }
    p1Score = 0;
    p2Score = 0;

    for(int i=0; i<8; i++) {
        competitors[i] -> resetMoveOrder();
    }

    for(int i=0; i<5; i++) {
        if( ref1.refGame(competitors[6], competitors[7]) == 'W') {
            p1Score ++;
        } else if( ref1.refGame(competitors[6], competitors[7]) == 'L') {
            p2Score ++;
        } else {
            // No scores for both players.   
        };
    }        

    if(p1Score >= p2Score) {
        quarterWinners[0] = competitors[0];
    }
    p1Score = 0;
    p2Score = 0;

    for(int i=0; i<8; i++) {
        competitors[i] -> resetMoveOrder();
    }

    // Semi-Final

   for(int i=0; i<5; i++) {
        if( ref1.refGame(competitors[0], competitors[1]) == 'W') {
            p1Score ++;
        } else if( ref1.refGame(competitors[0], competitors[1]) == 'L') {
            p2Score ++;
        } else {
            // No scores for both players.   
        };
    }

    if(p1Score >= p2Score) {
        quarterWinners[0] = competitors[0];
    }
    p1Score = 0;
    p2Score = 0;

    for(int i=0; i<8; i++) {
        competitors[i] -> resetMoveOrder();
    }

    for(int i=0; i<5; i++) {
        if( ref1.refGame(competitors[2], competitors[3]) == 'W') {
            p1Score ++;
        } else if( ref1.refGame(competitors[2], competitors[3]) == 'L') {
            p2Score ++;
        } else {
            // No scores for both players.   
        };
    }

    if(p1Score >= p2Score) {
        quarterWinners[0] = competitors[0];
    }
    p1Score = 0;
    p2Score = 0;

    for(int i=0; i<8; i++) {
        competitors[i] -> resetMoveOrder();
    }

    // Final

}