/*
Name: Tabitha Muthoni
Reg: CT100/G/26159/25
Description: Fare Calculation
*/

//Function to calculate fare

#include <stdio.h>

//function prototype
float calculateFare(float distance);

void main()
{
    float result, distance;
    printf("Enter distance traveled (in km): \t");
    scanf("%f", &distance);
    
    //function call
    result = calculateFare(distance);
    
    printf("The total fare is KSh. %.2f \n", result);
}

//Function declaration
float calculateFare(float distance){
    float total_fare;
    total_fare = distance * 50;
    return total_fare;
}
