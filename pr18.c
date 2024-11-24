/*
Let us assume, teacher is supposed to allot seats based on the student’s names. You
are requested to help teacher by creating a C program, for collecting the names of 5
students and sort them in alphabetical order. 
*/

#include <stdio.h>
#include <string.h>

void main() 
{
//Created by 24CE012_Tirth_Bhatt
    char names[5][50];
    char temp[50];
    int i, j;

    printf("\nCreated by 24CE012_Tirth_Bhatt");
    printf("\nEnter names of 5 students:\n");
    for(i=0; i<5; i++) 
    {    // Collect 5 names
        printf("Student %d: ", i+1);
        gets(names[i]);
    }

    for(i=0; i<4; i++) 
    { 
        for(j=i+1; j<5; j++) 
        { //bubble sort algorithm
            if(strcmp(names[i], names[j])>0) 
            { // Sort the names alphabetically
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
//Created by 24CE012_Tirth_Bhatt
    // Print sorted names
    printf("\nStudent names in alphabetical order:");
    for (i = 0; i < 5; i++) 
    {printf("\n%s", names[i]);}
    printf("\n\n");
}
