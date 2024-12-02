/*
  Write a C program to read a text file ‘Demo.txt’ and print each 
  letter of that file in reverse order.
  Example:
  Input: HELLO
  Output: OLLEH
*/

#include<stdio.h>
#include<string.h>

void main()
{
//Created by 24CE012_Tirth_Bhatt
  FILE *in,*out;
  int i,n; //declaring file pointer variable
  printf("\nCreated by 24CE012_Tirth_Bhatt");

  in = fopen("input30a.txt", "r");
  if(in == NULL) //error handling
  printf("\nError opening Input file");
  else
  {
    out = fopen("output30a.txt", "w");
    fseek(in, 0L, SEEK_END); //opening file
    n = ftell(in); //no of char in file

    for (i= n-1; i >= 0; i--) 
    { //printing reverse in output file
      fseek(in, i, SEEK_SET);
      fputc(fgetc(in), out);
    }

    fclose(out);
  } //closing file
  fclose(in);
//Created by 24CE012_Tirth_Bhatt
}