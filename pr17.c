/*
Display the seating arrangement in theatre using C program. The theater has a fixed
number of rows and seats per row. Create a seating chart where each seat is
identified by its row and seat number. Additionally, the program should allow the
user to mark certain seats as reserved. The seating chart should be displayed with
indicators showing which seats are reserved and which are available.
Expected Outcome:
Enter the number of reserved seats:  3
Enter row and seat number for reserved seats(e.g., 2 5):
Seat 1:  1 3
Seat 2:  2 5
Seat 3:  3 7
Seating Chart:
Row 1: 0 0 X 0 0 0 0 0 0 0
Row 2: 0 0 0 0 X 0 0 0 0 0
Row 3: 0 0 0 0 0 0 X 0 0 0
Row 4: 0 0 0 0 0 0 0 0 0 0
Row 5: 0 0 0 0 0 0 0 0 0 0
*/

#include <stdio.h>

void main() 
{
//Created by 24CE012_Tirth_Bhatt
    const int r=5, c=10; //size of theater

    char chart[r][c];  //seating chart array
    int seats, row, col, i, j, ch;

    //initialize all seats as available(0)
    for(i=0; i<r; i++) 
    {
        for(j=0; j<c; j++) 
        {
            chart[i][j] = '0';
        }
    }

    printf("\nTheater Seat Reservation");
    printf("\nCreated by 24CE012_Tirth_Bhatt");
    printf("\nEnter the number of seats to reserve: ");
    scanf("%d", &seats);
    printf("Enter row and seat number for reserved seats(e.g., 2 5):\n");

    //reserve the seats
    for(i=0; i<seats; i++) 
    {
        do
        {
            printf("Seat %d: ", i+1);
            scanf("%d %d", &row, &col);
            ch = row>=1 && row<=r && col>=1 && col<=c;
//Created by 24CE012_Tirth_Bhatt
            if(ch) 
            {chart[row-1][col-1] = 'X'; //mark the seat as reserved
            }  
            else 
            {printf("Invalid seat number. Try again.\n");}
        }while(ch!=1); //repeats the input until valid seat entered
    }

    //display the seating chart
    printf("\nSeating Chart:");
    for(i=0; i<r; i++) 
    {
        printf("\nRow %d:", i + 1);
        for(j=0; j<c; j++) 
        {
            printf(" %c", chart[i][j]);
        }
    }
    printf("\n");
//Created by 24CE012_Tirth_Bhatt
}
