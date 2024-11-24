/*
Raman and Suman, siblings residing in different cities in Karnataka, each own
multiple properties. Raman's assets include a bungalow valued at ₹12,000,000, a
plot valued at ₹6,000,000, and a car valued at ₹3,000,000. Meanwhile, Suman owns
an apartment valued at ₹11,000,000, a hotel valued at ₹8,000,000, and a car valued
at ₹8,000,000. Determine who possesses the greater total wealth between them or
whether they are equally wealthier.
*/

#include<stdio.h>
void main()
{
//Created by 24CE012_Tirth_Bhatt    
    double raman_bunglow=12000000, raman_plot=6000000, raman_car=3000000;  //declaring raman's assets
    double suman_apartment=11000000, suman_hotel=8000000, suman_car=8000000;  //declaring suman's assets
    double raman=raman_bunglow+raman_car+raman_plot;  //calculating raman's total wealth
    double suman=suman_apartment+suman_car+suman_hotel;  //calculating suman's total wealth

    printf("\nCreated by 24CE012_Tirth_Bhatt\n");
    if(raman>suman)
        {
            printf("Raman has greater wealth\n\n");  //printed when raman has greater wealth
        }
    else if(suman>raman)
            {
                printf("Suman has greater wealth\n\n");  //printed when suman has greater wealth
            }
         else 
            {
                printf("Both raman and suman have equal wealth\n\n");  //printed when both have equal wealth
            }
//Created by 24CE012_Tirth_Bhatt
}
