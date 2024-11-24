/*
Develop a C program that simulates a matchstick game between the user and the
computer. The objective of the game is to avoid picking the last matchstick. The
program should ensure that the computer always wins by strategically picking
matchsticks. The game starts with 21 matchsticks. The user and the computer take
turns to pick 1, 2, 3, or 4 matchsticks. The player forced to pick the last matchstick
loses the game.
Rules:
1. The game starts with 21 matchsticks.
2. The user is asked to pick 1, 2, 3, or 4 matchsticks.
3. After the user picks, the computer makes its pick.
4. The player who is forced to pick the last matchstick loses the game
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
//Created by 24CE012_Tirth_Bhatt
    int m,user,end;

    printf("\nMATCHSTICK GAME\n\nRules:\n1. The game starts with 21 matchsticks.\n");
    printf("2. The user is asked to pick 1, 2, 3, or 4 matchsticks.\n");
    printf("3. After the user picks, the computer makes its pick.\n");
    printf("4. The player who is forced to pick the last matchstick loses the game");
    printf("\nCreated by 24CE012_Tirth_Bhatt\n");

    do
    {   for(m=21;m!=1;m-=5)
        {   do{     
                //user always picks the first lot of matchsticks
                printf("\nYour turn\nEnter the amount of matchsticks to pick: ");
                scanf("%d",&user);
                if(user<1 || user>4)
                printf("Please enter number between 1 and 4\n");
                else {
                    //computer always picks such no of sticks that a total of 5 sticks are picked
                    printf("\nComputer picks %d matchsticks\n%d matcksticks are left\n",5-user,m-5);
                }
            }while(user<1 || user>4); //error handling
        }   //so after 4 turns, total 20 sticks are picked and only one left
        
        printf("\nComputer WINS!\n\n");
        printf("Enter 0 to Exit and 1 to Play Again:  ");
        scanf("%d",&end);
        
    }while(end==1);
    printf("End!\n\n");
//Created by 24CE012_Tirth_Bhatt
}
