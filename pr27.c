/*
Imagine a situation where two values need to be swapped within a banking system, 
such as updating balances between two accounts after a transaction. Make use of 
pointer as function arguments for swapping function.
*/

#include<stdio.h>

//call by address
void swapbal(double *b1, double *b2)
{ //funcction definition
    double temp;
    temp = *b1;
    *b1 = *b2;
    *b2 = temp;
} //function swaps value using pointers

void main()
{
//Created by 24CE012_Tirth_Bhatt
    double accbal1, accbal2;

    printf("\nCreated by 24CE012_Tirth_Bhatt");
    printf("\nEnter balance of Acc 1:  ");
    scanf("%lf",&accbal1);

    printf("Enter balance of Acc 2:  ");
    scanf("%lf",&accbal2);

    printf("\nBefore Swapping:\n");
    printf("Acc1: %.2lf\nAcc2: %.2lf\n",accbal1,accbal2);

    swapbal(&accbal1, &accbal2); //function call

    printf("\nAfter Swapping:\n");
    printf("Acc1: %.2lf\nAcc2: %.2lf\n\n",accbal1,accbal2);
//Created by 24CE012_Tirth_Bhatt
}
