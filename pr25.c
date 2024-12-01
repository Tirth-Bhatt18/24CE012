/*
Create a Union called library to hold accession number, title of the book, author name, 
price of the book and flag indicating whether the book is issued or not. (flag = 1 if the 
book is issued, flag = 0 otherwise). Write a program to enter data of one book and 
display the data.
*/

#include<stdio.h>

union library
{ //defining user data type
    char AccNo[15];
    char title[40];
    char author[40];
    float price;
    int flag;
}b; //declaring uddt variable

void main()
{
//Created by 24CE012_Tirth_Bhatt
    printf("\nCreated by 24CE012_Tirth_Bhatt");
    printf("\nEnter details of book:\n");
    printf("Accession number:  ");
    scanf("%s",b.AccNo);
    printf("Accession number:  %s",b.AccNo);
    printf("\nTitle:  ");
    scanf("%s",b.title);
    printf("Title:  %s",b.title);
    printf("\nAuthor:  ");
    scanf("%s",b.author);
    printf("Author:  %s",b.author);
    printf("\nPrice:  ");
    scanf("%f",&b.price);
    printf("Price:  %.2f",b.price);
    printf("\nFlag:  ");
    scanf("%d",&b.flag);
    printf("Flag:  %d",b.flag);
    //entering details and displaying stored
    //data one by one

    printf("\n\nDisplaying details of first book:");
    printf("\nAccession number:  %s",b.AccNo);
    printf("\nTitle:  %s",b.title);
    printf("\nAuthor:  %s",b.author);
    printf("\nPrice:  %.2f",b.price);
    printf("\nFlag:  %d",b.flag);
    printf("\nCreated by 24CE012_Tirth_Bhatt\n");
    //displaying final stored data
//Created by 24CE012_Tirth_Bhatt
}