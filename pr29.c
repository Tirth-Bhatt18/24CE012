/*
Write a C program using a character string in a block of memory space created by 
calloc () and then modify the same to store a larger string using realloc () function. 
(Dynamic Array). 
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
//Created by 24CE012_Tirth_Bhatt
    char *p;
    p = (char *)calloc(10, sizeof(char));
    //memory allocation using calloc()

    printf("\nCreated by 24CE012_Tirth_Bhatt");
    printf("\nEnter string(size 10):  ");
    gets(p);//scanning using pointer
    printf("Before realloc():  %s", p);

    p = (char *)realloc(p, 20*sizeof(char));
    //reallocation using realloc()

    printf("\n\nEnter string(size 20):  ");
    gets(p);//scanning using pointer
    printf("After realloc():  %s\n", p);
    free(p);
//Created by 24CE012_Tirth_Bhatt
}