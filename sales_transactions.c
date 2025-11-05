/*
Name: Tabitha Muthoni
Reg: CT100/G/26159/25
Description: sales_transactions
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float transaction;
    float totalSales = 0.0;
    int transactionCount = 0;
    
    printf("=== Daily Sales Calculator ===\n\n");
    
    // Open the file in read mode
    file = fopen("sales.txt", "r");
    
    // Check if file exists and opened successfully
    if (file == NULL) {
        printf("Please ensure the file exists in the current directory.\n");
        return 1;
    }
    
    printf("Reading transactions from sales.txt...\n\n");
    
    // Read all transactions from the file
    while (fscanf(file, "%f", &transaction) == 1) {
        transactionCount++;
        totalSales += transaction;
        printf("Transaction %d: $%.2f\n", transactionCount, transaction);
    }
    
    // Properly close the file after reading
    fclose(file);
    
    // Display the results
    printf("\n========================================\n");
    printf("Total number of transactions: %d\n", transactionCount);
    printf("Total sales for the day: $%.2f\n", totalSales);
    printf("========================================\n");
    
    if (transactionCount > 0) {
        printf("Average transaction amount: $%.2f\n", totalSales / transactionCount);
    } else {
        printf("\nNo transactions found in the file.\n");
    }
    
    printf("\nFile closed successfully.\n");
    
    return 0;
}