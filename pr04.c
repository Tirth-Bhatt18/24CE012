/*
Home Ministry of India want to calculate the count illiterate men and women,
India population for year 2024 is 1,441,981,744. Out of them 48.4% are women.
Total literacy rate is 85.95%. Literacy rate of male population is 80.95% and
62.84% for female population. Write a program to get desired output for Home
Ministry.
*/

#include<stdio.h>
void main()
{
    //Created by 24CE012_Tirth_Bhatt
    double tot=1441981744; //total population
    double w=48.4, m=100-w; //total percentage of men and women
    double mlit=80.95, wlit=62.84; //literacy rate in men and women

    double totmillit=tot*m*(100-mlit)/10000;  //calculating total number of illeterate men
    double totwillit=tot*w*(100-wlit)/10000;  //calculating total number of illeterate women
    
    printf("\nIndia Illeteracy Rate Calculator");

    printf("\nCreated by 24CE012_Tirth_Bhatt");

    printf("\nThe total number of Illiterate Men are %.0lf",totmillit);  //printing calculated data
    printf("\nThe total number of Illiterate Women are %.0lf\n\n",totwillit);
    //Created by 24CE012_Tirth_Bhatt
}
