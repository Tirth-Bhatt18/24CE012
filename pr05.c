/*
The Meteorological Department of India needs to convert temperature readings
from Celsius to Fahrenheit for their weather reports. Given a temperature in
Celsius, write a program to convert it to Fahrenheit using the given formula and
display the result.
𝐹𝑎ℎ𝑟𝑒𝑛ℎ𝑒𝑖𝑡 = (𝐶𝑒𝑙𝑠𝑖𝑢𝑠*9/5) + 32
*/

#include<stdio.h>

void main()
{
    //Created by 24CE012_Tirth_Bhatt
    float celcius,fahrenheit;  //declaring variabless

    printf("\nTemperautre Converter");

    printf("\nCreated by 24CE012_Tirth_Bhatt");

    printf("\nPlease enter temperature in Celcius\n");  //taking input
    scanf("%f",&celcius);

    fahrenheit = (celcius*9/5) + 32;  //calculating temperature in fahrenheit

    printf("%.2f *C in fahrenheit is %.2f *F\n\n",celcius,fahrenheit);  //printing output
    //Created by 24CE012_Tirth_Bhatt
}