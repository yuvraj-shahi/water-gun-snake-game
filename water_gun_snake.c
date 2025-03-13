#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int player, computer;
    char name[3][20] = {"snake", "water", "gun"};
    char ch[10];
    

    re:printf("Choose the no 0 for snake, 1 for water and 2 for gun:\n");
    scanf("%d", &player);
    
    if (player > 2 || player < 0)
    {
        printf("You choose wrong number\n");
        goto re;
    }

    //for computer selection.
    srand(time(0));
    int randno;
    randno =( rand()% (2+1));
    computer = randno;
    printf("YOu choose %d(%s) and computer choose %d(%s) \n", player, name[player] ,computer, name[computer] );
    if (player == 0 && computer == 1 || player == 2 && computer == 0 || player == 1 && computer == 2)
    {
        
        printf("Congratulations, you won this game!\n");
    }

    else if (computer == 0 && player == 1 || computer == 2 && player == 0 || computer == 1 && player == 2)
    {
        printf("sorry! you lose this game.\n");
    }
    else if (player == 0 && computer == 0 || player == 1 && computer == 1 || player == 2 && computer == 2)
    {
        printf("match tie so choose again:\n");
        goto re;
    }
    printf("Would you like play again?\n");
    scanf("%s", ch);

    if (strcmp(ch, "yes") == 0)
    goto re;
    else 
    exit(1);
    return 0;
}