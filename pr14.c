/*
Use appropriate nested loops to draw the following patterns: 2
(i)
    1
   1 0
  1 0 1
 1 0 1 0
1 0 1 0 1
(ii)
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
(iii)
      A 
    A B A
  A B C B A
A B C D C B A
*/

#include <stdio.h>

void main() 
{
//Created by 24CE012_Tirth_Bhatt
  int i,j,s,r;
  
  printf("\nPattern (i):\n");
  printf("Created by 24CE012_Tirth_Bhatt\n");
  printf("Enter number of Rows: ");
  scanf("%d",&r); //no of rows

  for(i=1; i<=r; i++) 
  { 
    for(int j=1; j<=i; j++) 
    {printf("%d  ", j%2);}
    //j%2 gives 0 or 1 output
    printf("\n");
  }

  printf("\nPattern (ii):\n");
  printf("Created by 24CE012_Tirth_Bhatt\n");
  printf("Enter number of Rows: ");
  scanf("%d",&r);

  for(i=1; i<=r; i++) 
  { 
    for(s=r-i; s>0; s--) 
    {printf("   ");} //spaces
//Created by 24CE012_Tirth_Bhatt
    for(j=1; j<=i; j++) 
    {printf("%d  ", j);}
    //printing using nested loops
    printf("\n");
  }

  printf("\nPattern (iii):\n");
  printf("Created by 24CE012_Tirth_Bhatt\n");
  printf("Enter number of Rows: ");
  scanf("%d",&r);

  for(i=1; i<=r; i++) 
  { 
    for(s=r-i; s>0; s--) 
    {printf("   ");} 
    //spaces bassed on loop iteraiion
    for(j=0; j<i; j++)
    {printf("%c  ", 'A'+j);}
    //increasing letters 
    for(j=i-2; j>=0; j--) 
    {printf("%c  ", 'A'+j);}
     //decreasing letters 
    printf("\n");
  }
  printf("\n");
//Created by 24CE012_Tirth_Bhatt
}
