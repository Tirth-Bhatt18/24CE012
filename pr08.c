/*
Foodies is a restaurant established in 2020. Due to rush of customers, the waiters
are not able to manage the food supply appropriately. To help them, create a menu
ordering system, which allows customers to select the items from the menu and
compute the total cost of their order. Use switch case for menu ordering and item
selection.
Menu includes the following:
 Burger - ₹150
 Pizza - ₹200
 Pasta - ₹120
 Sandwich - ₹100
 French Fries - ₹80
Display the menu to user and allow them to enter the number they wish to order.
Calculate the total amount after selection of all items. Ask user to enter ‘0’ after
finishing the ordering of items.
*/

#include<stdio.h>
void main()
{
//Created by 24CE012_Tirth_Bhatt
    printf("\nFOODIES RESTAURANT MENU\n 1.Burger - Rs.150 \n 2.Pizza - Rs.200");  //printing header
    printf("\n 3.Pasta - Rs.120 \n 4.Sandwich - Rs.100 \n 5.French Fries - Rs.80");
    printf("\nCreated by 24CE012_Tirth_Bhatt\n");

    float total, bur, piz, pas, sw, ff;
    int choice;  //declaring variables

    do
    {
    printf("\nPlease enter the number corresponding to the menu item you");
    printf(" want to order and ZERO(0) if you want to stop\n");
    scanf("%d", &choice);  //scanning choice for menu system

    switch(choice)  //using switch case for menu system
    {
        case 0:
            break;
        
        case 1:
            printf("Please enter the number of Burgers you want to order\n");
            scanf("%f",&bur);  //scanning amount of items to order
            break;
            //Created by 24CE012_Tirth_Bhatt

        case 2:
            printf("Please enter the number of Pizzas you want to order\n");
            scanf("%f",&piz);  //scanning amount of items to order
            break;

        case 3:
            printf("Please enter the number of Pastas you want to order\n");
            scanf("%f",&pas);  //scanning amount of items to order
            break;

        case 4:
            printf("Please enter the number of Sandwiches you want to order\n");
            scanf("%f",&sw);  //scanning amount of items to order
            break;

        case 5:
            printf("Please enter the number of French Fries you want to order\n");
            scanf("%f",&ff);  //scanning amount of items to order
            break;

        default:
            printf("Invalid Input! Please enter again");  //default case when no case is executed
    }
    }while(choice!=0);

    total=bur*150+piz*200+pas*120+sw*100+ff*80;  //calculating total price of all items ordered

    printf("\nYour total bill is Rs.%.0f\n",total);
    printf("\nCreated by 24CE012_Tirth_Bhatt\n\n");  //printing total price as bill
//Created by 24CE012_Tirth_Bhatt
}
