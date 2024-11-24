/*
Write a C program to generate and display a multiplication table based on user
input in the following form:
Enter the size of table vertically: 10
Enter the size of table horizontally: 5
Multiplication Table (10 x 5):
1 2 3 4 5
2 3 4 6 8
10 6 9 12 15
4 8 12 16 20
5 10 15 20 25
6 12 18 24 30
7 14 21 28 35
8 16 24 32 40
9 18 27 36 45
10 20 30 40 50
*/

#include<stdio.h>
void main()
{
//Created by 24CE012_Tirth_Bhatt
    int row,col,i,j;

    printf("\nEnter the number of rows vertically: ");
    scanf("%d",&row); //inputting rows
    printf("Enter the number of columns horizontally: ");
    scanf("%d",&col);  //inputting columns

    printf("\nMultiplication Table (%d by %d):",row,col);
    printf("\nCreated by 24CE012_Tirth_Bhatt:\n\n");
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        { //printing multiplication of row and column
           printf("%d\t",i*j);//space
        }
        printf("\v"); //new line
    }
    printf("\n\n");
//Created by 24CE012_Tirth_Bhatt
}
