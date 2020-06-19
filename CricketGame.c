#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int m;
    int cpuScore=0, myScore=0, over=0;
    srand(time(0));
    printf("\t\t\t\t:)_:)_30 balls cRiCkEt mAtCh_:)_:)");
    printf("\n\t\t\t\tGame Characteristic & Rules:");
    printf("\n\t\t1)Actually it is a TARGET CHASING cricket game. So, Score of CPU will be generated automatically");
    printf("\n\t\t2)If you hit 0 or greater than 6, then it will be counted as DOT BALL(No Score). And also if your hitted score matches with random generated number, ");
    printf("\n\t\tit will be counted as DOT BALL(No Score)");
    printf("\n\t\t3)You will be happy to know that There is no WICKET. So, play it easily.");
    r:printf("\n\tChoose Difficulty: a)Press 1 for 'Easy'  b)Press 2 for 'Hard'\n");
    scanf("%d",&m);
    switch(m)
    {
    case 1:

    printf("\n\tCPU BATTING time:");
    for(int i=1;i<=30;i++){
        printf("\n\tBall no. %d",i);
    for (int i = 0; i<1; i++) {
        int num = (rand() % 6)+1;
        cpuScore=cpuScore+num;
        printf("\n\tRun: %d",num);
    }
    printf("\n");

    }
    printf("\n\tTotal Scores of CPU: %d",cpuScore);

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
                printf("\tNo Score\n");
                num2=0;
                input=0;
            }
            else
               myScore=myScore+input;
        }
        if(i==6 || i==12 || i==18 || i==24)
            printf("\nReminder:Now Your score is: %d. You need more %d runs to win",myScore,cpuScore-myScore+1);
        printf("\n");
        if(myScore>cpuScore)
        {
            printf("\n\tYour Total Scores : %d",myScore);
            printf("\n\tCONGRATULATION! You won the GAME!!!");
            break;
        }
    }

    if(cpuScore>myScore){
            printf("\n\tYour Total Scores : %d",myScore);
        printf("\n\tCPU wins!!! You have lost match by %d runs!! Better Luck Next Time!",cpuScore-myScore);
    }
    else if(cpuScore==myScore){
            printf("\n\tYour Total Scores : %d",myScore);
        printf("\n\tWhat a GAME!! Match Tied!");
    }
    break;

    case 2:

    printf("\n\tCPU BATTING time:");
    for(int i=1;i<=30;i++){
        printf("\n\tBall no. %d",i);
    for (int i = 0; i<1; i++) {
        int num = (rand() % 6)+1;
        cpuScore=cpuScore+num;
        printf("\n\tRun: %d",num);
    }
    printf("\n");

    }
    printf("\n\tTotal Scores of CPU: %d",cpuScore);

    printf("\n");

    printf("\n\tYour Target: %d",cpuScore+1);

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
            int num3= (rand() % 6)+1;
            if(input==num2 ||input==num3 || input==0 || input>6)
            {
                printf("\tNo Score\n");
                num2=0;
                input=0;
            }
            else
               myScore=myScore+input;
        }
        if(i==6 || i==12 || i==18 || i==24)
            printf("\nReminder:Now Your score is: %d. You need more %d runs to win",myScore,cpuScore-myScore+1);
        printf("\n");
        if(myScore>cpuScore)
        {
            printf("\n\tYour Total Scores : %d",myScore);
            printf("\n\tCONGRATULATION! You won the GAME!!!");
            break;
        }
    }

    if(cpuScore>myScore){
            printf("\n\tYour Total Scores : %d",myScore);
        printf("\n\tCPU wins!!! You have lost match by %d runs!! Better Luck Next Time!",cpuScore-myScore);
    }
    else if(cpuScore==myScore){
            printf("\n\tYour Total Scores : %d",myScore);
        printf("\n\tWhat a GAME!! Match Tied!");
    }
    break;

    default:
        printf("Wrong Key Pressed.");
        goto r;
}
}

        printf("\n\tCPU wins!!! You have lost match by %d runs!! Better Luck Next Time!",cpuScore-myScore);
    }
    else if(cpuScore==myScore){
            printf("\n\tYour Total Scores : %d",myScore);
        printf("\n\tWhat a GAME!! Match Tied!");
    }

}


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
        if(myScore>cpuScore)
        {
            printf("\n\tYour Total Scores : %d",myScore);
            printf("\n\tCONGRATULATION! You won the GAME!!!");
            break;
        }
    }

    if(cpuScore>myScore){
            printf("\n\tYour Total Scores : %d",myScore);
        printf("\n\tCPU wins!!! You have lost match by %d runs!! Better Luck Next Time!",cpuScore-myScore);
    }
    else if(cpuScore==myScore){
            printf("\n\tYour Total Scores : %d",myScore);
        printf("\n\tWhat a GAME!! Match Tied!");
    }
}
