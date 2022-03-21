// Tournament.cpp

#include "Tournament.h"

Player* Tournament::run(std::array<Player *, 8>  competitors)
{
    Referee ref1;
    int p1Score = 0;
    int p2Score = 0;
    char roundResult;
    Player* quarterWinners[4];
    Player* semiWinners[2];
    int num1 = 0;
    
    // Quarter-Finals
    for(int j=0; j<8; j=j+2) {
        for(int i=0; i<5; i++) {
            roundResult = ref1.refGame(competitors[j], competitors[j+1]);
            if( roundResult == 'W') {
                p1Score ++;
            } else if( roundResult == 'L') {
                p2Score ++;
            } else {
                // No scores for both players.   
            };
        }
        
        if(p1Score >= p2Score) {
            quarterWinners[num1] = competitors[j];
        } else {
            quarterWinners[num1] = competitors[j+1];
        }
        
        num1 ++;
        p1Score = 0;
        p2Score = 0;

        competitors[j]->resetMoveOrder();
        competitors[j+1]->resetMoveOrder();
    } 

    // Semi-Finals
    num1 = 0;
    for(int j=0; j<4; j=j+2) {
        for(int i=0; i<5; i++) {
            roundResult = ref1.refGame(quarterWinners[j], quarterWinners[j+1]);
            if( roundResult == 'W') {
                p1Score ++;
            } else if( roundResult == 'L') {
                p2Score ++;
            } else {
                // No scores for both players.   
            };
        }

        if(p1Score >= p2Score) {
            semiWinners[num1] = quarterWinners[j];
        } else {
            semiWinners[num1] = quarterWinners[j+1];
        }
        num1 ++;
        p1Score = 0;
        p2Score = 0;

        quarterWinners[j]->resetMoveOrder();
        quarterWinners[j+1]->resetMoveOrder();
    }

    // Final
    num1 = 0; 
    for(int i=0; i<5; i++) {
        roundResult = ref1.refGame(semiWinners[0], semiWinners[1]);
        if( roundResult == 'W') {
            p1Score ++;
        } else if( roundResult == 'L') {
            p2Score ++;
        } else {
            // No scores for both players.   
        };
    }

    if(p1Score >= p2Score) {
        return semiWinners[0];
    } else {
        return semiWinners[1];
    }
}