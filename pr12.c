/*
A company organizes events on even days, from day 1 to day 100.
The management wants to calculate the total budget allocated for these events.
Each even day costs 200 Rs. Write a C program to compute the total budget
allocated for all even-day events.
*/

#include<stdio.h>
void main()
{//Created by 24CE012_Tirth_Bhatt
    int day,budget=0;  //declaring variables
    printf("\nBudget Calculator");
    printf("\nCreated by 24CE012_Tirth_Bhatt\n");

    for(day=1;day<=100;day+=2)
    {  //adding cost of each even day to total budget
        budget+=200;}
    //printing total cost
    printf("Total budget from day 1 to day 100 is Rs.%d\n\n",budget);
//Created by 24CE012_Tirth_Bhatt
}

