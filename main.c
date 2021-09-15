#include <stdio.h>
#include <stdlib.h>
#include "level.h"
#include "utilities.h"
#include "game.h"

int main()
{   int myChoice;
    myChoice = printMenu();

    //The game
    gameLoop(myChoice);
    return 0;
}
