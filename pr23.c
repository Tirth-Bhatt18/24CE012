/*
Imagine you are working on a program that predicts how something grows over
time, like how much money you might save each month. The growth pattern
follows a rule similar to the Fibonacci series, where the amount saved each month
is the sum of the two previous months. To help calculate this, you need a program
that can generate the Fibonacci series. Take the number of series user want to see
through keyboard input.
*/

#include<stdio.h>

void fibonacci(int);
//declaring user defined functions

void main()
{
//Created by 24CE012_Tirth_Bhatt
  int n;

  do
  {
    printf("\nFibonacci Sequence Generator");
    printf("\nCreated by 24CE012_Tirth_Bhatt");

    printf("\nEnter the number of Terms:  ");
    scanf("%d",&n); //scanning number of terms

    if(n<=0)
    {
      printf("Invalid Input\n"); //error handling
    }
    else
    {
      printf("Fibonacci Sequence:\n");
      fibonacci(n);
      //calling user defined funnction
      //to generate fibonacci sequence
      printf("End\n\n");
    }
  }while(n<=0); 
  //do...while loop to restart code after error
}

void fibonacci(int n)
{
  //defining user defined function
  int x=3,i,a1=0,a2=1,a3; //declaring variables

  if(n==1)
  {
    printf("0\n"); //1st term of sequence
  }
  else
  {
    printf("0\n1\n"); //first and second term

    for(i=3;i<=n;i++)
    { //to generate higher terms
      a3=a1+a2; //adds the last two terms
      printf("%d\n",a3); //printing terms
      a1=a2;
      a2=a3;
    }
  }
//Created by 24CE012_Tirth_Bhatt
}
