/* Function :  gameLoop()
** Topic : In terms of the choice of the player, this function executes a level of game
** Arg : The choice of the player
*/
void gameLoop(int _choice)
{
    switch(_choice)
    {
    case 1 :
          humanVSHuman();
        break;
    case 2 :
        humanVsComputer();
        break;
    case 3 :
        humanVsSuperPowerComputer();
        break;
    case 4 :
        printf("\n\n\n");
        printf("*************  Game is over  ****************");
        printf("\n\n\n");
        break;
    }
}
