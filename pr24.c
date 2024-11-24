#include<stdio.h>

struct book
{
    char title[50];
    char author[50];
    float price;
};
// replace struct with union for union


void Display(struct book [], int);
void MaxPrice(struct book [], int);

void main()
{

    int n,i,j;
    printf("Enter number of books to enter info:\t");
    fflush(stdin);
    scanf("%d",&n);
    struct book b[n];

    for(i=0;i<n;i++)
    {
      printf("\nEnter details of book %d:\n",i+1);
      fflush(stdin);
      printf("Enter Title of Book %d:\t",i+1);
      gets(b[i].title);
      fflush(stdin);
      printf("Enter Author of Book %d:\t",i+1);
      gets(b[i].author);
      fflush(stdin);
      printf("Enter Price of Book %d:\t",i+1);
      scanf("%f",&b[i].price);
      fflush(stdin);
    }




    Display(b, n);



    MaxPrice(b, n);

}

void Display(struct book b[], int n)
{
   int i;
   printf("\nDisplaying Details of all books:\n");
   for(i=0;i<n;i++)
   {
     printf("\nDetails of Book %d:",i+1);
     printf("\nTitle:\t");
     puts(b[i].title);
     printf("Author:\t");
     puts(b[i].author);
     printf("Price:\t%.2f\n",b[i].price);
   }
}

void MaxPrice(struct book b[], int n)
{
    int m=0,k;
    for(k=0;k<n-1;k++)
    {
      if(b[k].price > b[m].price)
        {m=k;}
    }

    printf("\nDetails of book with maximum price is:");
    printf("\nBook %d:",m+1);
    printf("\nTitle:\t");
    puts(b[m].title);
    printf("Author:\t");
    puts(b[m].author);
    printf("Price:\t%.2f\n",b[m].price);

}


