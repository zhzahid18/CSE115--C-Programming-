#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int m,sum=0, myScore=0;
    srand(time(0));
    printf("\t\t\t\t:)_:)_30 balls cRiCkEt mAtCh_:)_:)");
    printf("\n\t\t\t\tGame Characteristic & Rules:");
    printf("\n\t\t1)Actually it is a TARGET CHASING cricket game. So, Score of CPU will be generated automatically");
    printf("\n\t\t2)If you hit 0 or greater than 6, then it will be counted as DOT BALL(No Score). And also if your hitted score matches with random generated number, ");
    printf("\n\t\tit will be counted as DOT BALL(No Score)");
    printf("\n\t\t3)You will be happy to know that There is no WICKET. So, play it easily.");
    printf("\n\tCPU BATTING time:");
    for(int i=1;i<=30;i++){
        printf("\n\tBall no. %d",i);
    for (int i = 0; i<1; i++) {
        int num = (rand() % 6)+1;
        sum=sum+num;
        printf("\n\tRun: %d",num);
    }
    printf("\n");

    }
    printf("\n\tTotal Scores of CPU: %d",sum);

    printf("\n");

    printf("\n\tYour BATTING time! Now face the CHALLENGE, My Dear!\n");

    for(int i=1;i<=30;i++)
    {
        printf("\n\tCPU delivers ball %d",i);
        for(int i=0;i<1;i++)
        {
            int input;
            printf("\n\tHit to score: ");
            scanf("%d",&input);
            int num2= (rand() % 6)+1;
            if(input==num2 || input==0 || input>6)
            {
                printf("\tNo Score");
                num2=0;
                input=0;
            }
            else
               myScore=myScore+input;
        }
        printf("\n");
        if(myScore>sum)
        {
            printf("\n\tYour Total Scores : %d",myScore);
            printf("\n\tCONGRATULATION! You won the GAME!!!");
            break;
        }
    }

    printf("\n\tYour Total Scores : %d",myScore);

    if(sum>myScore)
        printf("\n\tCPU wins!!! You lose the GAME!! Better Next Time!");
    else if(sum==myScore)
        printf("\n\tWhat a GAME!! Match Tied!");

}
