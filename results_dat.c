/*
Name: Tabitha Muthoni
Reg: CT100/G/26159/25
Description: Results_dat
*/

#include <stdio.h>
#include <string.h>

// Define structure to hold student information
struct Student {
    char name[50];
    char regNumber[20];
    int totalMarks;
};

// Function prototypes
void writeStudentRecords();
void readStudentRecords();

int main() {
    int choice;
    
    printf("=== Student Examination Results System ===\n\n");
    
    do {
        printf("\n1. Add Student Records\n");
        printf("2. Display All Student Records\n");
        printf("3. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline from buffer
        
        switch(choice) {
            case 1:
                writeStudentRecords();
                break;
            case 2:
                readStudentRecords();
                break;
            case 3:
                printf("\nExiting program. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while(choice != 3);
    
    return 0;
}

// Function to write student records to binary file
void writeStudentRecords() {
    FILE *file;
    struct Student student;
    char continueInput;
    
    // Open file in append binary mode
    file = fopen("results.dat", "ab");
    
    if (file == NULL) {
        printf("\nError: Unable to open file!\n");
        return;
    }
    
    do {
        printf("\n--- Enter Student Information ---\n");
        
        printf("Enter student name: ");
        fgets(student.name, sizeof(student.name), stdin);
        student.name[strcspn(student.name, "\n")] = '\0'; // Remove newline
        
        printf("Enter registration number: ");
        fgets(student.regNumber, sizeof(student.regNumber), stdin);
        student.regNumber[strcspn(student.regNumber, "\n")] = '\0'; // Remove newline
        
        printf("Enter total marks: ");
        scanf("%d", &student.totalMarks);
        getchar(); // Clear newline from buffer
        
        // Write the structure to binary file
        fwrite(&student, sizeof(struct Student), 1, file);
        
        printf("\n? Student record saved successfully!\n");
        
        printf("\nDo you want to add another student? (y/n): ");
        scanf(" %c", &continueInput);
        getchar(); // Clear newline from buffer
        
    } while(continueInput == 'y' || continueInput == 'Y');
    
    fclose(file);
}

// Function to read and display all student records from binary file
void readStudentRecords() {
    FILE *file;
    struct Student student;
    int recordCount = 0;
    
    // Open file in read binary mode
    file = fopen("results.dat", "rb");
    
    if (file == NULL) {
        printf("\nError: Unable to open file! No records found.\n");
        return;
    }
    
    printf("\n=== Student Examination Results ===\n");
    printf("%-5s %-30s %-20s %-10s\n", "No.", "Name", "Reg Number", "Marks");
    printf(" \n");
    
    // Read all records from the binary file
    while(fread(&student, sizeof(struct Student), 1, file) == 1) {
        recordCount++;
        printf("%-5d %-30s %-20s %-10d\n", 
               recordCount, 
               student.name, 
               student.regNumber, 
               student.totalMarks);
    }
    
    if (recordCount == 0) {
        printf("No student records found in the file.\n");
    } else {
        printf(" \n");
        printf("Total records: %d\n", recordCount);
    }
    
    fclose(file);
}
