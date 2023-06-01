
#include "SFML/Graphics.hpp"
#include <iostream>
#include "mainmenu.hpp"
#include "Game.hpp"
#include <time.h>


int main()
{
    srand(time((0)));//rand() what use?
    int mWindowWidth  = 1960;
    int mWindowHeight = 1100;
    Game game(mWindowWidth,mWindowHeight);
    game.run();
   
    
}
