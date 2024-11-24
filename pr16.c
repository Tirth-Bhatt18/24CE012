/*
Store manager needs to sort the prices of items in inventory to prepare a report.
The prices are initially listed in an unordered manner, and sorting them in
ascending order will facilitate easier analysis and decision-making regarding
pricing strategies and stock management.
Hint: Let the user decide the number of items
*/


#include<stdio.h>
void main()
{
//Created by 24CE012_Tirth_Bhatt
    int i,j,k,n,temp; //variables
    //temporary variable used in sorting

    printf("\nCreated by 24CE012_Tirth_Bhatt");
    printf("\nEnter Total Number of items:  ");
    scanf("%d",&n);
    int a[n]; //declaring array

    printf("\nEnter Price for each item:\n");
    for(i=0;i<n;i++) //filling array with data
    {scanf("%d",&a[i]);}

    for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        { //sorting algorithm using loops
            if(a[j]>a[k])
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }

    printf("\nSorted Prices:");
    for(k=0;k<n;k++) //printing sorted prices
    printf("\n%d",a[k]);

    printf("\n\n");
//Created by 24CE012_Tirth_Bhatt
}
