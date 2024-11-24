/*
Consider a situation where a user needs to analyze a set of numbers they input into
a system. Imagine a data entry operator who inputs 25 different numbers via the
keyboard. The goal is to develop a C program that processes these numbers to
determine specific characteristics: how many of the numbers are positive, how
many are negative, how many are even, and how many are odd.
*/

#include<stdio.h>

void main()
{
//Created by 24CE012_Tirth_Bhatt
    int num[10]; //declaring arrays and variables
    int k,pos=0,neg=0,odd=0,even=0;

    printf("\nCreated by 24CE012_Tirth_Bhatt");
    printf("\nEnter 10 Integers:\n");

    for(k=0; k<10; k++)
    {
        scanf("%d",&num[k]); //inputting numbers

        if(num[k]%2==0)
        even++;
        else  //testing for even or odd number
        odd++;

        if(num[k]>0)
        pos++;
        else  //testing for positive or negative
        neg++;
    }

    printf("\nThere are %d odd integers",odd);
    printf("\nThere are %d even integers",even);
    //printing results
    printf("\nThere are %d pos integers",pos);
    printf("\nThere are %d neg integers\n\n",neg);
//Created by 24CE012_Tirth_Bhatt
}
