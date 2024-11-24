/*
The Finance Department needs a simple calculator program to perform basic
arithmetic operations for internal calculations. Given two fixed numbers write a
program to perform addition, subtraction, multiplication, and division based on
entered signs +, -, *, / respectively and display the appropriate result.
*/

#include<stdio.h>
void main()
{
//Created by 24CE012_Tirth_Bhatt
    char choice;  //declaring variables
    int end;
    double m,n;
    
    do
    {
    printf("\nSimple Calculator");
    printf("\nCreated by 24CE012_Tirth_Bhatt");

    printf("\nPlease enter Number 1:\t");  //inputting number 1
    scanf("%lf",&m);

    printf("Please enter Number 2:\t");  //inputting number 2
    scanf("%lf",&n);

    printf("Please enter the Operation to Perform\n+ for Addition, - for");
    printf(" Subtraction, * for Multiplication and / for Division:\n");
    fflush(stdin); //taking a character as input to determine which operation to perform
    scanf("%c",&choice);
    fflush(stdin); //fflush() function clears the rom to help in efficiency in taking input

    switch(choice) //determining which operaion to perform using switch case
    {
        case '+':
            printf("The Addition of %.2lf and %.2lf is %.2lf",m,n,m+n);
            break;  //calculation for addition case
            //Created by 24CE012_Tirth_Bhatt

        case '-':
            printf("The Subtraction of %.2lf from %.2lf is %.2lf",n,m,m-n);
            break;  //calculation for subtraction case

        case '/':
            if(n!=0)
            {
            printf("The Division of %.2lf by %.2lf is %.2lf",m,n,m/n);
            }
            else
            {
            printf("Error!Division by zero is not possible");
            }
            break;  //calculation for division case

        case '*':
            printf("The Multiplication of %.2lf and %.2lf is %.2lf",m,n,m*n);
            break;  //calculation for multiplication case

        default:
            printf("Invalid Input");
            break;  //default case is executed when no case is satisfied
    }

    printf("\nEnter 1 to Start Again and 0 to Exit:\t");
    scanf("%d",&end);

    }while(end==1);
    printf("End of program\n\n");
//Created by 24CE012_Tirth_Bhatt
}
