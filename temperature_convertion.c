/*
Name:Tabitha Muthioni
Reg No:CT100/G/26159/25
Description:temperature convertion
*/

#include <stdio.h>

//Function prototype
float convertToCelsius(float fahrenheit);

void main()
{
    float result, fahrenheit;
    printf("Enter temperature in Fahrenheit: \t");
    scanf("%f", &fahrenheit);
    
    //function call
    result = convertToCelsius(fahrenheit);
    
    printf("Temperature in Celsius: %.2f \n", result);
}

//Function declaration
float convertToCelsius(float fahrenheit){
    float celsius;
    celsius = (fahrenheit - 32) * 5.0/9.0;
    return celsius;
}
