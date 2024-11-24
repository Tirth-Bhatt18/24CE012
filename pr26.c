#include<stdio.h>
#include<string.h>

struct coach
{
    char name[50];
    int age;
    int exp;
};

struct team
{
    char name[50];
    char sport[50];
    struct coach coach;
};

void Display(struct team [], int);
int Enter(struct team [], int, int);
void Search(struct team [], int);

void main()
{
    int i,nteam=0,choice,entered=0;

    printf("CHARUSAT Sports teams database\n");
    printf("Enter total number of sports teams in CHARUSAT:\t");
    fflush(stdin);
    scanf("%d",&nteam);
    struct team t[nteam];

    START:
    printf("\nPlease state your Purpose\tEnter\n1 to Enter");
    printf("details of teams\n2 to Display details of teams");
    printf("\n3 to Search for a team\nor 0 to Exit");
    scanf("%d",&choice);

    switch (choice)
    {
        case 0:
            return;

        case 1:
            entered= Enter(t, nteam, entered);
            printf("%d teams entered in database",entered);
            break;

        case 2:
            Display(t, nteam);
            break;

        case 3:
            Search(t, nteam);
            break;

        default:
            printf("Please enter correct choice");
    }
    goto START;
}

int Enter(struct team t[], int n, int e)
{
    if(e!=0)
    {
        printf("%d teams already entered in database",e);
        return 0;
    }
    else
        {
   int i;
   printf("\nEnter Details of all Teams:\n");
   for(i=0;i<n;i++)
    {
      printf("\nEnter Details of team %d:\n",i+1);
      fflush(stdin);
      printf("Enter the Name of the team:\t");
      gets(t[i].name);
      fflush(stdin);
      printf("Enter the Sport of the team:\t");
      gets(t[i].sport);
      fflush(stdin);
      printf("Enter Coach details of the team\n");
      printf("Enter Coach Name:\t");
      gets(t[i].coach.name);
      fflush(stdin);
      printf("Enter Coach Age:\t");
      scanf("%d",&t[i].coach.age);
      fflush(stdin);
      printf("Enter Coach Experience years:\t");
      scanf("%d",&t[i].coach.exp);
      fflush(stdin);
    }
    return i;
        }
}

void Display(struct team t[], int n)
{

    if(n==0)
    {
        printf("No teams in database");
        return;
    }
    else
    {
   int i;
   printf("\nDisplaying Details of all Teams:");
   for(i=0;i<n;i++)
   {
     printf("\n\nDetails of Team %d:",i+1);
     printf("\nTeam Name:\t");
     puts(t[i].name);
     printf("Sport:\t");
     puts(t[i].sport);
     printf("Details of the Coach for the team:");
     printf("\nCoach Name:\t");
     puts(t[i].coach.name);
     printf("Coach Age:\t");
     printf("%d",t[i].coach.age);
     printf("\nCoach Experience:\t");
     printf("%d",t[i].coach.exp);
   }
    }
}

void Search(struct team t[], int n)
{
   int i,j;
   char sname[50];
   SEARCH: printf("\nEnter Name of the Team to Search:");
   gets(sname);

    for(i=0;i<n;i++)
   {
   if(strcmp(sname,t[i].name)==0)
     {
     printf("\n\nDetails of Team %s:",t[i].name);
     printf("\nTeam Name:\t");
     puts(t[i].name);
     printf("Sport:\t");
     puts(t[i].sport);
     printf("Details of the Coach for the team:");
     printf("\nCoach Name:\t");
     puts(t[i].coach.name);
     printf("Coach Age:\t");
     printf("%d",t[i].coach.age);
     printf("\nCoach Experience:\t");
     printf("%d",t[i].coach.exp);
     }
     else
     {
         printf("No such name found\n");
         ERROR: printf("Please enter 1 to search again or 0 to exit");
         scanf("%d",&j);
         if(j==1)
         {
             goto SEARCH;
         }
         else if(j==0)
         {
             return;
         }
         else
         {
             printf("Invalid input please enter again");
             goto ERROR;
         }
     }
   }

}
