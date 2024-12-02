/*
  You are building a simple student marks recording system that:
  1. Writes students' marks to a file.
  2. Reads the marks from the file.
  The program will use:
   putw() to write the marks (integer values) into the file.
   getw() to read the marks from the file.
   fopen() and fclose() to open and close the file.
*/

#include <stdio.h>

void writeMarks() 
{
//Created by 24CE012_Tirth_Bhatt
 FILE *out = fopen("Marks.txt", "w"); // Open file in write mode
 int marks;
 printf("Enter marks (any negative number to stop): ");
 while(1) 
 { //writing in file char by char
 scanf("%d", &marks);
 if (marks <0) 
 break; // Stop if negative
 putw(marks, out); // Write marks
 }
 fclose(out); // Close the file
}

void readMarks() 
{
//Created by 24CE012_Tirth_Bhatt
 FILE *in = fopen("Marks.txt", "r"); 
 // Open file in read mode
 if(in == NULL) 
 { //error handling
 printf("Error opening input file");
 return;
 }
 int marks;
 printf("Marks from file:\n");

 while ((marks = getw(in)) != EOF)
 printf("%d\n", marks);
  // Read marks from file

 fclose(in); // Close the file
}

int main() 
{
//Created by 24CE012_Tirth_Bhatt
 int choice;
 do 
 {
  printf("\nCreated by 24CE012_Tirth_Bhatt");
 printf("\nFunctions:\n1. Write Marks\n");
 printf("2. Read Marks\n3. Exit\nEnter choice:");
 scanf("%d", &choice);
 switch (choice) 
 {
 case 1:
 writeMarks();
 break;
 case 2:
 readMarks();
 break;
 case 3:
 printf("Exiting...");
 break;
 default:
 printf("Invalid choice");
 }
 }while(choice !=3);
 return 0;
//Created by 24CE012_Tirth_Bhatt
}