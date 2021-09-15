#include <stdio.h>
#include <stdlib.h>


/* Function : Computer AI()
** Topic : Give a number of matches of the computer, computer always winning
** Return : Number of matches of the computer
*/
int computerAI(int _numberOfMatches)
{
    int temp = _numberOfMatches % 4;

    switch(temp)
    {
    case 1 :
        return rand() % 3 +1;
    case 0 :
        return 3;
    case 2 :
        return 1;
    case 3 :
        return 2;
    }

}

/* Function : printingNumberOfMatches()
** Topic : Give a print of the number of matches
*/
void printingNumberOfMatches(int _numberOfMatches)
{
    for(int i = 0; i <= _numberOfMatches-1; i++)
    {
        printf("| ");
    }
    printf("\n");
}

/* Function : humanVsSuperPowerComputer()
** Topic : Gameloop of human vs super power computer, player give a number of matches and computer give number of matches which allows it to always win
*/
void humanVsSuperPowerComputer()
{
    //variable declaration game loop
    int const NUMBEROFMATCHES = 30;
    int numberOfMatches = 30;
    int scoreOfplayer1 = 0;
    int scoreOfComputer = 0;
    int numberOfMatchesChosen;
    int exit = 0;

    printf("\n\n\n********** Humain VS Ordi Super Puissant ****************\n\n\n");

    while(exit == 0)
    {

        /*Player turn*/
        printf("It's player time !\n\n");
        printf("How many matches do you want ?");
        scanf("%d", &numberOfMatchesChosen);
        printf("numberOfMatches : %d\n\n", numberOfMatchesChosen);

        //Condition number of matches between 1 and 3
        while (numberOfMatchesChosen > 3 || numberOfMatchesChosen < 1)
        {
            printf("Number of matches will be between 1 and 3.\n");
            printf("How many matches do you want ?");
            scanf("%d", &numberOfMatchesChosen);
            printf("Number of matches : %d\n\n", numberOfMatchesChosen);
        }

        scoreOfplayer1 += numberOfMatchesChosen;
        numberOfMatches -= numberOfMatchesChosen;
        printf("Player's score : %d\n\n", scoreOfplayer1);
        printf("Number of matches : %d\n\n", numberOfMatches);

        //Condition if number of matches is always > 0
        if(numberOfMatches <= 0)
        {
            exit = 1;
            printf("Player 1 you lose !");
            break;
        }

        /*Computer turn*/
        printf("It's computer time !\n\n");

        numberOfMatchesChosen = computerAI(numberOfMatches);
        printf("Computer's number of matches is %d\n", numberOfMatchesChosen);

        scoreOfComputer += numberOfMatchesChosen;
        numberOfMatches -= numberOfMatchesChosen;
        printf("Computer's score : %d\n\n", scoreOfComputer);
        printf("Number of matches : %d\n\n", numberOfMatches);

        if(numberOfMatches <= 0)
        {
            exit = 1;
            printf("Computer you lose !");
            break;
        }
    }

}

/* Function : humanVsComputer()
** Topic : Player gives a number of matches to delete than it's computer turn, the number of matches of the computer to delete is generated randomly
** Each game, the number of matches is verifying, it will be < 30
*/
void humanVsComputer()
{
    //variable declaration game loop
    int const NUMBEROFMATCHES = 30;
    int numberOfMatches = 30;
    int scoreOfplayer1 = 0;
    int scoreOfComputer = 0;
    int numberOfMatchesChosen;
    int exit = 0;

    printf("\n\n\n********** Humain VS Ordi ****************\n\n\n");

    while(exit == 0)
    {
        /*Player 1*/
        printf("It's player time !\n\n");

        //Printing the number of matches
        printingNumberOfMatches(numberOfMatches);
        printf("How many matches do you want ?");
        scanf("%d", &numberOfMatchesChosen);
        printf("numberOfMatches : %d\n\n", numberOfMatchesChosen);

        //Condition number of matches between 1 and 3
        while (numberOfMatchesChosen > 3 || numberOfMatchesChosen < 1)
        {
            printf("Number of matches will be between 1 and 3.\n");
            printf("How many matches do you want ?");
            scanf("%d", &numberOfMatchesChosen);
            printf("Number of matches : %d\n\n", numberOfMatchesChosen);
        }

        scoreOfplayer1 += numberOfMatchesChosen;
        numberOfMatches -= numberOfMatchesChosen;
        printf("Player's score : %d\n\n", scoreOfplayer1);
        printf("Number of matches : %d\n\n", numberOfMatches);

        //Condition if number of matches is always > 0
        if(numberOfMatches <= 0)
        {
            exit = 1;
            printf("Player 1 you lose !");
            break;
        }

        /*Computer*/
        printf("It's computer time !\n\n");

        //Printing the number of matches
        numberOfMatchesChosen = rand() % (3 + 1 - 1) + 1;
        printf("Computer's number of matches is %d\n", numberOfMatchesChosen);

        scoreOfComputer += numberOfMatchesChosen;
        numberOfMatches -= numberOfMatchesChosen;
        printf("Computer's score : %d\n\n", scoreOfComputer);
        printf("Number of matches : %d\n\n", numberOfMatches);

        if(numberOfMatches <= 0)
        {
            exit = 1;
            printf("Computer you lose !");
            break;
        }
    }
}

/* Function : humanVsComputer()
** Topic : Player 1 gives a number of matches to delete than it's Player2 turn
** The game is over when a player give a number of matches > at the number of matches remaining
*/
void humanVSHuman()
{
    //variable declaration game loop
    int const NUMBEROFMATCHES = 30;
    int numberOfMatches = 30;
    int scoreOfplayer1 = 0;
    int scoreOfplayer2 = 0;
    int numberOfMatchesChosen;
    int exit = 0;

    printf("\n\n\n********** Humain VS Humain ****************\n\n\n");
    while(exit == 0)
    {
        /*Player 1*/
        printf("It's player1 time !\n\n");

        //Printing of the number of matches
        printingNumberOfMatches(numberOfMatches);

        printf("How many matches do you want ?");
        scanf("%d", &numberOfMatchesChosen);
        printf("numberOfMatches : %d\n\n", numberOfMatchesChosen);

        while (numberOfMatchesChosen > 3 || numberOfMatchesChosen < 1)
        {
            printf("Number of matches will be between 1 and 3.\n");
            printf("How many matches do you want ?");
            scanf("%d", &numberOfMatchesChosen);
            printf("numberOfMatches : %d\n\n", numberOfMatchesChosen);
        }


        scoreOfplayer1 += numberOfMatchesChosen;
        numberOfMatches -= numberOfMatchesChosen;
        printf("scoreOfPlayer1 : %d\n\n", scoreOfplayer1);
        printf("numberOfMatches : %d\n\n", numberOfMatches);

        if(numberOfMatches <= 0)
        {
            exit = 1;
            printf("Player 1 you lose !");
            break;
        }

        /*Player 2*/
        printf("It's player2 time !\n\n");
        //Printing of the number of matches
        printingNumberOfMatches(numberOfMatches);

        printf("How many matches do you want ?");
        scanf("%d", &numberOfMatchesChosen);

        while (numberOfMatchesChosen > 3 || numberOfMatchesChosen < 1)
        {
            printf("Number of matches will be between 1 and 3.\n");
            printf("How many matches do you want ?");
            scanf("%d", &numberOfMatchesChosen);
            printf("numberOfMatches : %d\n\n", numberOfMatchesChosen);
        }

        scoreOfplayer2 += numberOfMatchesChosen;
        numberOfMatches -= numberOfMatchesChosen;
        printf("scoreOfPlayer2 : %d\n\n", scoreOfplayer2);
        printf("numberOfMatches : %d\n\n", numberOfMatches);

        if(numberOfMatches <= 0)
        {
            exit = 1;
            printf("Player 2 you lose !");
            break;
        }
    }
}

/* Function : printMenu()
** Topic : Printing of the menu, player is choses between option
** Return : The choice of the player
*/
int printMenu()
{
    int myChoice;
    for(int i = 0; i < 6; i++)
    {
        printf("*");
    }
    printf("\n*  Jeu des allumettes  *\n");
    for(int i = 0; i < 6; i++)
    {
        printf("*");
    }
    printf("Vous allez avoir 3 menus.\n");


    printf("Vous choisirez d'abord si vous voulez voir les regles du jeu ou non, puis le nombre d'allumettes a utiliser, et enfin le nombre de joueurs.\n");

    printf("Que faire ?\n");

    printf("1 - Jouer \n2 - Voir les regles du jeu \n3 - Voir les credits\n4 - Quitter\n");

    printf("Votre choix : ");
    scanf("%d", &myChoice);

    switch(myChoice)
    {
        case 1 :
            printf("1 - Humain VS Humain\n2 - Humain VS Ordi\n3 - Humain VS Ordi Super Puissant\n4 - Quitter\n");
            printf("Votre choix : ");
            scanf("%d", &myChoice);
            return myChoice;
            break;
        case 2 :
            printf("\n\n\n**** Les regles du jeu ****\n\n\n");
            printf("Le but du jeu est simple...\n\n\n\n");
            printf("Le jeu se joue a deux. Vous avez un nombre n d'allumettes.\nA tour de role, chacun des deux joueurs enl�ve entre 1 et 3 joueurs selon ce qu'il souhaite. Le perdant est celui qui doit enlever la derniere allumette.\nAttention, il existe 3 niveaux de difficulte en version humain vs ordi.\nLe 1er est plutot simple a battre, donc pour les debutants. Mais le dernier...\nContactez moi si vous avez reussi (screenshot evidemment^^), mon email est dans les credits.");
            break;
        case 3 :
            printf("\n\n\n***** Les credits ******\n\n\n");
            printf("By Raphi & Flo");
            break;
        case 4 :
             printf("\n\n\n");
            printf("*************  Vous avez quitte le jeu  ****************");
            printf("\n\n\n");
            break;
    }
}

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


int main()
{   int myChoice;
    myChoice = printMenu();

    //The game
    gameLoop(myChoice);
    return 0;
}
