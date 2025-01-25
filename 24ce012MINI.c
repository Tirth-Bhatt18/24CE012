#include<stdio.h>  /*By 24CE012 Tirth Bhatt|24CE020 Pranav Dabhi|24CE021 Smit Dafda*/
#include<stdlib.h>
#include<time.h>

void GeneratePassword(int, int, int, int, int);  //declaration of user defined function for generating password


int main()   /*By 24CE012 Tirth Bhatt|24CE020 Pranav Dabhi|24CE021 Smit Dafda*/
{
    int length, uppercl, lowercl, numbers, symbols;  //declaration of variables

    do {
    printf("\nEnter total length of password: ");  //desired length of password
    scanf("%d", &length);

    if (length<0)
    {printf("Error! Length can't be negative");continue;}
    
    printf("Enter number of uppercase letters: ");  //adding uppercase letters to the password
    scanf("%d", &uppercl);

    printf("Enter number of lowercase letters: ");  //adding lowercase letters to the password
    scanf("%d", &lowercl);

    printf("Enter number of numbers: ");  //adding numbers to the password
    scanf("%d", &numbers);

    printf("Enter number of special symbols: ");  //adding special symbols to the password
    scanf("%d", &symbols);

    if (uppercl + lowercl + numbers + symbols != length)  /*checking if total number of characters match
                                                                the length of password entered*/
    {printf("Error! The sum of characters isn't equal to the total length of the password\n");}  //error statement

    }while(uppercl + lowercl + numbers + symbols != length);

    GeneratePassword(length, uppercl, lowercl, numbers, symbols);  //function call 

    return 0;  /*By 24CE012 Tirth Bhatt|24CE020 Pranav Dabhi|24CE021 Smit Dafda*/
}

void GeneratePassword(int length, int uppercl, int lowercl, int numbers, int symbols)  /* definition of user defined function for generating password */
{
    char UpperCaseLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char LowerCaseLetters[] = "abcdefghijklmnopqrstuvwxyz";
    char Digits[] = "0123456789";
    char SpecialSymbols[] = "`~!@#$^&*()-_=+[{]}|;:',<.>/?]";  //declaring arrays with all characters to be used in password
    char password[length + 1];  //declaring array PASSWORD
    int i, j=0, k;
    char temp;

    srand(time(NULL));  //we generally use time(null) for seed of random number generator to get unique number each time

    for (i = 0; i < uppercl; i++) 
    {   
        password[j++] = UpperCaseLetters[rand() % 26];  //adding upper case letters to the password
    }

    for (i = 0; i < lowercl; i++) 
    {
        password[j++] = LowerCaseLetters[rand() % 26];  //adding loeer case letters to the password
    }

    for (i = 0; i < numbers; i++) 
    {
        password[j++] = Digits[rand() % 10];  //adding numbers to the password
    }

    for (i = 0; i < symbols; i++) 
    {
        password[j++] = SpecialSymbols[rand() % 34];  //adding special symbols to the password
    }

    for (i = 0; i < length; i++)   /*By 24CE012 Tirth Bhatt|24CE020 Pranav Dabhi|24CE021 Smit Dafda*/
    {
        k = rand() % length;
        temp = password[i];
        password[i] = password[k];  //shuffilng the password for randomness
        password[k] = temp;
    }

    for (i = 0; i < length; i++)   /*By 24CE012 Tirth Bhatt|24CE020 Pranav Dabhi|24CE021 Smit Dafda*/
    {
        k = rand() % length;
        temp = password[i];
        password[i] = password[k];  //shuffilng the password again for more randomness
        password[k] = temp;
    }

    password[length] = '\0';  //terminatinng the password array with null('\0')

    printf("\nGenerated Password: %s\n", password);  //printing the PASSWORD string
    printf("By 24CE012 Tirth Bhatt\n24CE020 Pranav Dabhi\n24CE021 Smit Dafda\n\n");
}