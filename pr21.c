/*
Verify whether three given lengths can form a triangle. If they do, the program
should then calculate the area of the triangle using Heron's formula. The program
should use nested functions to accomplish this. Specifically, the program should:
1. Collect the lengths of the three sides of the triangle from the user.
2. Verify whether the given lengths can form a triangle.
3. If the lengths form a valid triangle, calculate the area of the triangle using
Heron's formula.
4. Display the result to the user.
s= (a+b+c)/2
A= sqrt(s*(s-a)*(s-b)*(s-c))
*/

#include <stdio.h>
#include <math.h>

// Function to check if the sides form a valid triangle
//function definition
int VerifyTriangle(float a, float b, float c) 
{ 
//Created by 24CE012_Tirth_Bhatt
    return (a + b > c) && (a + c > b) && (b + c > a);
} //returns 1 if only sum of 2 sides greater than other true for all cases

// Function to calculate the area of the triangle using Heron's formula
float Area(float a, float b, float c) 
{
    float s = (a + b + c) / 2; // Semi-perimeter
    return sqrt(s * (s - a) * (s - b) * (s - c)); //area
}

void main() {
    float a, b, c;

    //Collect lengths of the triangle sides
    printf("\nCreated by 24CE012_Tirth_Bhatt");
    printf("\nEnter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    //Verify if the lengths form a valid triangle
    if (VerifyTriangle(a, b, c)) //function call 
    {
        //Calculate area using Heron's formula
        float area = Area(a, b, c); //call

        //Display the result
        printf("The lengths form a valid triangle!\n");
        printf("The area of the triangle is %.2f units\n\n", area);
    } 
    else 
    {printf("The given lengths do not form a valid triangle.\n\n");}
//Created by 24CE012_Tirth_Bhatt
}
