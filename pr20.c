/*
Create a simple student grading system, which should include various functions to
handle different tasks related to the management and processing of student grades.
The functionalities should demonstrate the use of functions with different
combinations of arguments and return values as specified below:
1. No arguments passed and no return value: Display a welcome to
CHARUSAT message.
2. No arguments passed but a return value: Collect the number of students
based on user input.
3. Argument passed but no return value: Collect and display the grades of
students based on the count of students collected in previous function.
4. Argument passed and a return value: Calculate the average grade of the
students by collecting the same grades and display their average.
Expected Outcome:
Welcome to CHARUSAT University!
=============================== 
Enter the number of students: 3 
Student Grades: 
Enter the grade for student 1: 76 
Student 1: Grade = 76 
Enter the grade for student 2: 87 
Student 2: Grade = 87 
Enter the grade for student 3: 98 
Student 3: Grade = 98 
Enter the grade for student 1 (for average calculation): 76 
Enter the grade for student 2 (for average calculation): 87 
Enter the grade for student 3 (for average calculation): 98 
The average grade of the students is: 87.00
*/

#include <stdio.h>

// Function prototypes
void Welcome();
int NStudents();
void DisplayGrades(int n);
float AverageGrades(int n);

void main() {
//Created by 24CE012_Tirth_Bhatt
    // Step 1: Display welcome message
    Welcome();
    
    // Step 2: Get the number of students
    int n = NStudents();

    // Step 3: Input and display grades
    DisplayGrades(n);

    // Step 4: Calculate and display the average grade
    float average = AverageGrades(n);
    printf("Average grade of students: %.2f\n\n", average);
}

// Function Definitions
void Welcome() {
    printf("\nWelcome to CHARUSAT University!\n");
    printf("===============================\n");
    //displays welcome message
}

int NStudents() {
//Created by 24CE012_Tirth_Bhatt
    int num;
    printf("Created by 24CE012_Tirth_Bhatt\n");
    printf("Enter the number of students: ");
    scanf("%d", &num);
    return num;
    //scans number of students and returns it
}

void DisplayGrades(int n) {
    int grade;
    printf("Student Grades:\n");
    for (int i = 1; i <= n; i++) {
        printf("Enter the grade for student %d: ", i);
        scanf("%d", &grade);
        printf("Student %d: Grade = %d\n", i, grade);
        //input grade and display it
    }
}

float AverageGrades(int n) {
//Created by 24CE012_Tirth_Bhatt
    int grade, sum = 0;
    printf("Created by 24CE012_Tirth_Bhatt\n");
    printf("Enter grades for average calculation:\n");
    for (int i = 1; i <= n; i++) {
        printf("Student %d: ", i);
        scanf("%d", &grade);
        sum += grade;
        //adds all input to sum using for loop
    }
    return (float)sum / n;
    //returns average
}
