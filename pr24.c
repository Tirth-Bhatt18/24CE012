/*
Write a C program to create a structure of Book Detail and display the details of the
book in appropriate format by passing structure as a function argument.
Book Detail must contain following information:
Book Title, Author name and Amount of book in float.
*/

#include<stdio.h>

struct book
{ //declaring structure data type
  char title[50];
  char author[50];
  float price;
};

void Display(struct book [], int);
void MaxPrice(struct book [], int);
//function declarations

void main()
{
//Created by 24CE012_Tirth_Bhatt
  int n,i,j;
  printf("\nCreated by 24CE012_Tirth_Bhatt");
  printf("\nEnter number of books to enter info:  ");
  fflush(stdin);
  scanf("%d",&n);
  struct book b[n];

  for(i=0;i<n;i++)
  { //entering details in array of structures
    printf("\nEnter details of book %d:\n",i+1);
    fflush(stdin);
    printf("Enter Title of Book %d:  ",i+1);
    gets(b[i].title);
    fflush(stdin);
    printf("Enter Author of Book %d:  ",i+1);
    gets(b[i].author);
    fflush(stdin);
    printf("Enter Price of Book %d:  ",i+1);
    scanf("%f",&b[i].price);
    fflush(stdin);
  }
  printf("\nCreated by 24CE012_Tirth_Bhatt");
  Display(b, n); //function call
  printf("\n\nCreated by 24CE012_Tirth_Bhatt");
  MaxPrice(b, n); //function call
}

void Display(struct book b[], int n)
{
//Created by 24CE012_Tirth_Bhatt
  int i;
  printf("\nDisplaying Details of all books:");
  for(i=0;i<n;i++)
  { //displaying structure contents
    printf("\n\nDetails of Book %d:",i+1);
    printf("\nTitle:  ");
    puts(b[i].title);
    printf("Author:  ");
    puts(b[i].author);
    printf("Price:  %.2f",b[i].price);
  }
}

void MaxPrice(struct book b[], int n)
{
  int m=0,k;
  for(k=0;k<n-1;k++)
  { //to find max price
    if(b[k].price > b[m].price)
    {m=k;}
  }

  printf("\nDetails of book with maximum price:");
  //displaying array element with max price
  printf("\nBook %d:",m+1);
  printf("\nTitle:  ");
  puts(b[m].title);
  printf("Author:  ");
  puts(b[m].author);
  printf("Price:  %.2f\n\n",b[m].price);
//Created by 24CE012_Tirth_Bhatt
}


