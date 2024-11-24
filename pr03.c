/*
State Bank of India wants to calculate the simple interest on savings accounts. The
bank offers a principal amount of ₹50,000 at an annual interest rate of 5.5% for a
time period of 3 years. Write a program to calculate and display the simple interest.
*/

#include<stdio.h>

void main()
{
    //Created by 24CE012_Tirth_Bhatt
    float principal =50000.0, rate =5.5, time =3.0;  //declaring variables

    float interest = principal*rate*time/100;  //calculating interest

    printf("\nSimple Interest Calculator");

    printf("\nCreated by 24CE012_Tirth_Bhatt");

    printf("\nThe simple interest on Rs. %.2f principal for %.0f years",principal,time);
    printf("\nat %.2f percent interest rate is Rs. %.2f\n\n",rate,interest);
    //printing interest
    //Created by 24CE012_Tirth_Bhatt
}