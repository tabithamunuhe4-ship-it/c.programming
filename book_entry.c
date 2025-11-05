/*
Name: Tabitha Muthoni
Reg: CT100/G/26159/25
Description: Book_title
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char bookTitle[200];
    char choice;
    
    printf("=== Library Book Tracking System ===\n\n");
    
    do {
        // Get book title from librarian
        printf("Enter book title: ");
        fgets(bookTitle, sizeof(bookTitle), stdin);
        
        // Remove newline character if present
        size_t len = strlen(bookTitle);
        if (len > 0 && bookTitle[len-1] == '\n') {
            bookTitle[len-1] = '\0';
        }
        
        // Open file in append mode (creates file if it doesn't exist)
        file = fopen("borrowed_books.txt", "a");
        
        if (file == NULL) {
            printf("Error: Unable to open file!\n");
            return 1;
        }
        
        // Write book title to file
        fprintf(file, "%s\n", bookTitle);
        
        // Close the file
        fclose(file);
        
        // Display confirmation message
        printf("? Book title successfully stored: \"%s\"\n\n", bookTitle);
        
        // Ask if they want to add another book
        printf("Do you want to add another book? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // Clear the newline from input buffer
        printf("\n");
        
    } while (choice == 'y' || choice == 'Y');
    
    printf("Thank you for using the Library Book Tracking System!\n");
    
    return 0;
}