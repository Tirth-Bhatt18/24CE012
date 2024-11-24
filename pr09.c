/*
Determine the grade of a student based on their marks using the conditional
(ternary) operator. Take student’s marks as input and display the corresponding
grade as output according to the following criteria:
Marks >= 90: Grade A
Marks >= 80 and < 90: Grade B
Marks >= 70 and < 80: Grade C
Marks >= 60 and < 70: Grade D
Marks < 60: Grade F
Validate the input by ensuring user is entering marks between 0-100, else declare
that the entered input is invalid.
*/

#include<stdio.h>
#include<conio.h>

void main()
{
//Created by 24CE012_Tirth_Bhatt
    int marks;  //declaring variable

    printf("\nGrade Calculator");  //printing heading
    printf("\nCreated by 24CE012_Tirth_Bhatt");

    do
    {   printf("\nPlease enter your Marks between 0 and 100:\n");
        scanf("%d",&marks);  //scanning marks

        marks<0?printf("Invalid Input\n"):marks<60?printf("Your Grade is F"):
        marks<70?printf("Your Grade is D"):marks<80?printf("Your Grade is C"):
        marks<90?printf("Your Grade is B"):marks<=100?printf("Your Grade is A"):
        printf("Invalid Input");  //determining marks using ternary operator
    }while(marks<0 || marks>100);
    printf("\n\n");
//Created by 24CE012_Tirth_Bhatt   
}
