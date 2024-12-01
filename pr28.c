/*
Write a program to read the marks of 10 students for the subject CEUC101 
Computer concepts and Programming and computes the number of students in 
categories FAIL, PASS, FIRST 
CLASS and DISTINCTION using Pointers and Arrays. 
Marks Categories 
70 or above DISTINCTION 
69 to 60 FIRST CLASS 
59 to 40 PASS 
Below 40 FAIL 
For example, if following marks of 10 students are entered: 
34 56 78 98 12 31 67 75 91 23 
Then the output should be 
DISTINCTION 4 FIRST CLASS 1 PASS 1 FAIL 4
*/

#include<stdio.h>

void main()
{
//Created by 24CE012_Tirth_Bhatt
    int marks[10];
    int i, *p=marks; //initialising pointer variable
    int dis=0, fc=0, pass=0, fail=0;

    printf("\nCreated by 24CE012_Tirth_Bhatt");
    printf("\nEnter marks of 10 students\n");
    for(i=0;i<10;i++)
    {
        printf("Student %d:  ",i+1);
        scanf("%d",p);
        p++;
    }

    p=marks; //repointing pointer to start of array

    for(i=0;i<10;i++)
    { //counting studente in each categories
        if(*p>=70)
            dis++;
        else if(*p>=60)
            fc++;
        else if(*p>=40)
            pass++;
        else fail++;
        p++; //pointing pointer to next element
    }

    printf("Results:"); //printing results
    printf("\nDistinction: %d students",dis);
    printf("\nFirst Class: %d students",fc);
    printf("\nPass: %d students",pass);
    printf("\nFail: %d students\n\n",fail);
//Created by 24CE012_Tirth_Bhatt
}
