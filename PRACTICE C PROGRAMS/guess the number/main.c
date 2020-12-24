#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{   int g;
    time_t t;
    srand((unsigned)time(&t));
    int random_number=rand()%21;
    printf("Welcome to GUESS THE NUMBER\n");
    for(int i=1;i<=5;++i)

    {
        printf("you have %i tr%s left\n",(6-i),i==5?"y":"ies");
        printf("Guess a number between 0 to 20:");
        scanf("%i",&g);
        if(g==random_number)
            {printf("YOU WON!!");
             return;
             }
        else if(g<random_number)
            printf("My number is more than this.\n",5-i);

        else
            printf("My number is less than this.\n",5-i);
    }

    printf("YOU LOST. CORRECT NUMBER WAS %i",random_number);

    return 0;
}
