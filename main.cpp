#include <iostream>
#include "Referee.h"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main () {

    Computer Comp1;
    Human Player1;
    Referee Ref1;
    RandomComputer randomComp1;


//    cout << Ref1.refGame(Player1, Comp1) << endl;
    for(int i=0; i<10; i++) {
        cout << randomComp1.makeMove() << endl;
    }
    //Avalanche aval;
    //cout << aval.makeMove() << endl;
return 0;
}