/*
Develop a countdown timer, that allows user to set a starting number of seconds
and then count down to zero, displaying each second as it decrements. After the
countdown completes write ''Countdown completed!''
*/

#include<stdio.h>
#include<unistd.h>
void main() {
//Created by 24CE012_Tirth_Bhatt
    int start,i;  //declaring variables
    do{
        printf("\nCountdown Timer");// printing heading
        printf("\nCreated by 24CE012_Tirth_Bhatt");

        printf("\nPlease enter the number from which to start the countdown:\n");
        scanf("%d",&start);  //scanning starting point of timer
        
        if(start<0)
        {printf("\nError! Please enter a valid number");}
    }while(start<0); //error handling

    printf("\nCountdown Start");
    do
    {   sleep(1);  //sleep() delays output by  given milliseconds
        printf("\n%d",start);
        start--;  //printing countdown timer using do while loop
    }
    while(start>=0);
    
    printf("\nCountdown Complete!!");
    printf("\nCreated by 24CE012_Tirth_Bhatt\n\n");
//Created by 24CE012_Tirth_Bhatt
}
