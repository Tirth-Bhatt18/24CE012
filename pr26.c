/*
You are tasked with creating a system for managing sports teams in 
CHARUSAT. Each team consists of a team name, sport type (e.g., basketball, 
football), and a coach. Each coach has details such as name, age, and experience. 
Your program should: 
 Store information about multiple sports teams and their coaches. 
 Allow the user to add, search, and display team and coach information. 
Hint: Use a nested structure where the team structure contains another structure 
for coach details. 
*/

#include<stdio.h>
#include<string.h>

struct coach
{
    char name[50];
    int age;
    int exp;
};
// declaring structure data type
struct team
{
    char name[50];
    char sport[50];
    struct coach coach;
};
//function declarations
void Display(struct team [], int, int);
int Enter(struct team [], int, int);
void Search(struct team [], int);

void main()
{
//Created by 24CE012_Tirth_Bhatt
    int i,nteam=0,choice,entered=0;

    printf("\nCHARUSAT Sports teams database\n");
    printf("Enter total number of sports teams in CHARUSAT:  ");
    fflush(stdin);
    scanf("%d",&nteam);
    struct team t[nteam]; //declaring structure variable array

    do { //do...while menu
    printf("\nFunctions:");
    printf("\n1. Enter details of teams\n2. Display details of");
    printf(" teams\n3. Search for a team\n0. Exit");
    printf("\nCreated by 24CE012_Tirth_Bhatt");
    printf("\nEnter the number corresponding to your purpose:  ");
    scanf("%d",&choice);

    switch (choice)
    { //switch case based on entered choice
        case 0:
        printf("EXITING PROGRAM...\n");
        return;

        case 1:
        entered= Enter(t, nteam, entered); //function call
        printf("%d TEAMS ENTERED IN DATABASE\n",entered);
        break;

        case 2:
        Display(t, nteam, entered);
        break;

        case 3:
        Search(t, nteam);
        break;
//Created by 24CE012_Tirth_Bhatt
        default:
        printf("PLEASE ENTER CORRECT CHOICE\n");
    }
    }while(choice != 0); //error handling
}

int Enter(struct team t[], int n, int e)
{ //function definition
    if(e!=0)
    {
        printf("%d TEAMS ALREADY IN DATABASE",e);
        return 0; //in case user enters again
    }
    else
    {
        int i;
        printf("\nEnter Details of all Teams:\n");
        for(i=0;i<n;i++)
        { //entering details of all teams
            printf("\nEnter Details of team %d:\n",i+1);
            fflush(stdin);
            printf("Enter the Name of the team:  ");
            gets(t[i].name);
            fflush(stdin);
            printf("Enter the Sport of the team:  ");
            gets(t[i].sport);
            fflush(stdin);
            printf("Enter Coach details of the team\n");
            printf("Enter Coach Name:  ");
            gets(t[i].coach.name);
            fflush(stdin); //scanning in structure in structure
            printf("Enter Coach Age:  ");
            scanf("%d",&t[i].coach.age);
            fflush(stdin);
            printf("Enter Coach Experience years:  ");
            scanf("%d",&t[i].coach.exp);
            fflush(stdin);
        }
//Created by 24CE012_Tirth_Bhatt
        return i; //returning no of teams entered
    }
}

void Display(struct team t[], int n, int e)
{
    if(e==0)
    {
        printf("NO TEAMS IN DATABASE\n");
        return; // when user displays before entering
    }
    else
    {
        int i;
        printf("\nDisplaying Details of all Teams:");
        for(i=0;i<n;i++)
        {
        printf("\n\nDetails of Team %d:",i+1);
        printf("\nTeam Name:  ");
        puts(t[i].name);
        printf("Sport:  ");
        puts(t[i].sport);
        printf("Details of the Coach for the team:");
        printf("\nCoach Name:  ");
        puts(t[i].coach.name);
        printf("Coach Age:  ");
        printf("%d",t[i].coach.age);
        printf("\nCoach Experience:  ");
        printf("%d\n",t[i].coach.exp);
        }
//Created by 24CE012_Tirth_Bhatt
    }
}

void Search(struct team t[], int n)
{
    int i,j;
    char sname[50];

    do {
    printf("\nEnter Name of the Team to Search:  ");
    scanf("%s",sname);

    for(i=0;i<n;i++)
    { //searches through all entered teams
    if(strcmp(sname,t[i].name)==0)
    { //only displays if team name matches entered name
        printf("\n\nDetails of Team %s:",t[i].name);
        printf("\nTeam Name:  ");
        puts(t[i].name);
        printf("Sport:  ");
        puts(t[i].sport);
        printf("Details of the Coach for the team:");
        printf("\nCoach Name:  ");
        puts(t[i].coach.name);
        printf("Coach Age:  ");
        printf("%d",t[i].coach.age);
        printf("\nCoach Experience:  ");
        printf("%d",t[i].coach.exp);
    }
//Created by 24CE012_Tirth_Bhatt
    }
        if(i==n)
        printf("NO SUCH TEAM FOUND\n");
        //error handling

        do {
        printf("ENTER 1 TO SEARCH AGAIN AND 0 TO EXIT:  ");
        scanf("%d",&j);
        if(j==1) //error handling
            continue;
        else if(j==0)
            return;
        else
            printf("INVALID INPUT\n");
        }while(j!=1 && j!=0);
    }while(j!=0); //error handling
}