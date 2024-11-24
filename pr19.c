/*
Develop a C program to manage a simple text-based note-taking application. Users
should be allowed to perform various string operations on their notes without using
functions from the <string.h> header file. The operations include calculating the
length of a note, reversing a note, comparing two notes, copying a note, and
concatenating two notes.
*/

#include <stdio.h>

int main() {
//Created by 24CE012_Tirth_Bhatt
    char note1[100], note2[100], result[200];
    int choice, i, j, len1, len2, isEqual;
        
    // Display menu
    printf("\n\nNote-Taking Application\n");
    printf("Created by 24CE012_Tirth_Bhatt\n");
    printf("1. Calculate length of a note\n");
    printf("2. Reverse a note\n");
    printf("3. Compare two notes\n");
    printf("4. Copy one note to another\n");
    printf("5. Concatenate two notes\n");
    printf("6. Exit\n");
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        putchar('\n');
        getchar(); // Consume newline after number input

        switch (choice) {
        case 1: // Calculate length
            printf("Enter a note: ");
            fgets(note1, 100, stdin);
            for (len1 = 0; note1[len1] != '\0' && note1[len1] != '\n'; len1++);
            printf("Length of the note: %d\n", len1);
            break;
//Created by 24CE012_Tirth_Bhatt
        case 2: // Reverse a note
            printf("Enter a note: ");
            fgets(note1, 100, stdin);
            for (len1 = 0; note1[len1] != '\0' && note1[len1] != '\n'; len1++);
            printf("Reversed note: ");
            for (i = len1 - 1; i >= 0; i--) {
                putchar(note1[i]);
            }
            printf("\n");
            break;

        case 3: // Compare two notes
            printf("Enter first note: ");
            fgets(note1, 100, stdin);
            printf("Enter second note: ");
            fgets(note2, 100, stdin);
            for (i = 0; note1[i] != '\0' && note2[i] != '\0'; i++) {
                if (note1[i] != note2[i]) break;
            }
            isEqual = (note1[i] == '\0' || note1[i] == '\n') && (note2[i] == '\0' || note2[i] == '\n');
            if (isEqual) printf("Notes are equal.\n");
            else printf("Notes are not equal.\n");
            break;
//Created by 24CE012_Tirth_Bhatt
        case 4: // Copy a note
            printf("Enter a note to copy: ");
            fgets(note1, 100, stdin);
            for (i = 0; note1[i] != '\0'; i++) {
                note2[i] = note1[i];
            }
            note2[i] = '\0';
            printf("Copied note: %s", note2);
            break;

        case 5: // Concatenate notes
            printf("Enter first note: ");
            fgets(note1, 100, stdin);
            printf("Enter second note: ");
            fgets(note2, 100, stdin);
            for (len1 = 0; note1[len1] != '\0' && note1[len1] != '\n'; len1++);
            for (len2 = 0; note2[len2] != '\0' && note2[len2] != '\n'; len2++);
            for (i = 0; i < len2; i++) {
                note1[len1 + i] = note2[i];
            }
            note1[len1 + len2] = '\0';
            printf("Concatenated note: %s\n", note1);
            break;
//Created by 24CE012_Tirth_Bhatt
        case 6: // Exit
            printf("Created by 24CE012_Tirth_Bhatt\n");
            printf("Exiting application.\n\n");
            break;

        default:
            printf("Invalid choice. Try again.\n");
            printf("Created by 24CE012_Tirth_Bhatt\n");
        }
    } while (choice != 6);

    return 0;
}
