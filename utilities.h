/* **** Printing ***** */

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
            printf("Le jeu se joue a deux. Vous avez un nombre n d'allumettes.\nA tour de role, chacun des deux joueurs enlève entre 1 et 3 joueurs selon ce qu'il souhaite. Le perdant est celui qui doit enlever la derniere allumette.\nAttention, il existe 3 niveaux de difficulte en version humain vs ordi.\nLe 1er est plutot simple a battre, donc pour les debutants. Mais le dernier...\nContactez moi si vous avez reussi (screenshot evidemment^^), mon email est dans les credits.");
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
