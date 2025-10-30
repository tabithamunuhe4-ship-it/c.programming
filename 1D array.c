/*
Name: Tabitha Muthoni
Reg: CT100/G/26159/25
Description: Daily revenue
*/

// 1D array
#include <stdio.h>

int main() {
    // Declare and initialize 1D array
    float revenue[7];
    int i;
    float totalRevenue = 0.0;
    float averageRevenue;
    
    // Input revenue for each day
    printf("Enter revenue for 7 days:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
    }
    
    // Calculate total weekly revenue
    for(i = 0; i < 7; i++) {
        totalRevenue += revenue[i];
    }
    
    // Calculate average daily revenue
    averageRevenue = totalRevenue / 7;
    
    // Display results
    printf("\nWeekly Revenue Report:\n");
    printf("----------------------\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: $%.2f\n", i + 1, revenue[i]);
    }
    
    printf("\nTotal Weekly Revenue: $%.2f\n", totalRevenue);
    printf("Average Daily Revenue: $%.2f\n", averageRevenue);
    
    return 0;
}