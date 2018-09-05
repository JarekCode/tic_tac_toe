// Jaroslaw Glodowski

//------------------------------------
//	Define 
//------------------------------------
#define _CRT_SECURE_NO_WARNINGS

//------------------------------------
//	Include Libraries 
//------------------------------------
#include <time.h>
#include "game.h"
#include <string.h>

//------------------------------------
//	FUNCTION main
//------------------------------------

int main(int argc, char* argv[]) {
    //1. We set the seed for generating random numbers (in case the "Computer" acts as one of the players)
    srand((unsigned int) time(NULL));

    char* p1 = "abc";

    char* p2 = "Computer";

    //2. We call to the main function of the game
    //   1 = Intelligent Computer, 0 = Random Position Computer
    play_game(p1, p2, 1);

    //3. We finish the application returning 0
    return 0;
}
