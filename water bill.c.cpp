/*
Name:Tabitha Muthoni 
Reg:CT100/G/26159/25
Description:water bill
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt user for input
    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);

    // Calculate based on consumption
    if (units >= 0 && units <= 30) {
        bill = units * 20.0;
    } else if (units >= 31 && units <= 60) {
        bill = units * 25.0;
    } else if (units > 60) {
        bill = units * 30.0;
    } else {
        printf("Invalid input. Units cannot be negative.\n");
        return 1; // Exit with error
    }

    // Display total bill
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}