/*
The Department of Urban Planning needs to calculate the area and perimeter of a
rectangular plot of land for planning purposes. Given the length of 50 meters and
the breadth of 30 meters, write a program to calculate the area and the perimeter
and display the results.
*/

#include<stdio.h>

void main()
{
    //Created by 24CE012_Tirth_Bhatt
    int length =50, breadth =30; 
    //declaring variables of length and breadth

    int area = length*breadth;  //calculating area

    int perimeter = 2*(length + breadth);  
    //calculating perimeter

    printf("\nArea and Perimeter calculator");
    printf("\nCreated by 24CE012_Tirth_Bhatt");

    printf("\nArea of plot with length %d units and ",length);
    printf("breadth %d units is %d square units",breadth,area);
      //printing area
    
    printf("\nPreimeter of plot with length %d units and",length);
    printf(" breadth %d units is %d units\n\n",breadth,perimeter);
      //printing perimeter
    //Created by 24CE012_Tirth_Bhatt

}