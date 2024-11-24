/*
Imagine you are tasked with writing a program to help a teacher analyse student
performance in CCP subject. The program will accept a list of student marks and
perform the following tasks:
1. Calculate Total Marks: Write a function that takes the array of marks
and returns the total marks of all students.
2. Calculate Average Marks: Write a function that takes the array of marks
and returns the average marks.
3. Find Highest Marks: Write a function that takes the array of marks and
returns the highest marks.
4. Find Lowest Marks: Write a function that takes the array of marks and
returns the lowest marks.
5. Display the results to the user.
Expected outcome:
Enter the number of students: 3
Enter the CCP marks of the students:
Student 1: 24
Student 2: 25
Student 3: 17
Total Marks: 66
Average Marks: 22.00
Highest Marks: 25
Lowest Marks: 17
*/

#include<stdio.h>

int Total(int [], int);
float Average(int [], int);
int Maximum(int [], int);
int Minimum(int [], int); 
//declaring user defined functions

void main()
{
//Created by 24CE012_Tirth_Bhatt
    int n,i;

    printf("\nCreated by 24CE012_Tirth_Bhatt");
    printf("\nEnter the number of students:  ");
    scanf("%d",&n); //total number of students

    int marks[n];

    printf("Enter Students' Marks:\n");
    for(i=0;i<n;i++)
    { //entering marks in array using for loop
      printf("Student %d:  ",i+1);
      scanf("%d",&marks[i]);
    }

    printf("\nTotal marks: %d", Total(marks,n));
    printf("\nAverage marks: %.2f", Average(marks,n));
    printf("\nMaximum marks: %d", Maximum(marks,n));
    printf("\nMinimum marks: %d\n\n", Minimum(marks,n));
    //calling user defined functions 
    //and printing their return value
}

//defining all the user defined functions used
int Total(int m[],int n)
{
    int i,tot=0; 
    //initialising variable 'total' at 0
    for(i=0;i<n;i++)
    { //calculating total using for loop
        tot+=m[i];
    }

    return tot; //returning the value
}

float Average(int m[], int n)
{
//Created by 24CE012_Tirth_Bhatt
    int sum = Total(m,n); //calling one udf in another
    float avg = sum/n; //calculating average
    return avg; //returning value
}

int Maximum(int m[], int n)
{
    int i;
    int max = m[0]; 
    //setting initial value of max as first term of array
    for(i=0;i<n;i++)
    {   if(m[i]>max)
        {max=m[i];}
        //setting maximum value
    }
    return max;
}

int Minimum(int m[], int n)
{
    int i;
    int min = m[0];
    //setting initial value of min as first term of array
    for(i=0;i<n;i++)
    {   if(m[i]<min)
        {min=m[i];}
        //setting minimum value
    }
    return min;
//Created by 24CE012_Tirth_Bhatt
}




















