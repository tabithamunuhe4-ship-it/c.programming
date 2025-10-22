/*
Name: Tabitha Muthoni
Reg: CT100/G/26159/25
Description: Fare Calculation
*/

#include <stdio.h>

// Function prototype
float calculateFare(float distance);

void main() {
    float result, distance;
    
    printf("Enter distance traveled (in km): \t");
    scanf("%f", &distance);
    
    // Function call
    result = calculateFare(distance);
    
    printf("The total fare is KSh. %.2f \n", result);
    
    return 0;
}

// Function declaration
float calculateFare(float distance) {
    float total_fare;
    total_fare = distance * 50;
    return total_fare;
}