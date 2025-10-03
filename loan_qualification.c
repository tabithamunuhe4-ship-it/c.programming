//simple c program
/*
name:Tabitha Muthoni
reg:CT100/G/26159/25
description:loan qualification
*/

#include<stdio.h>

int main() {
	
//variable declaration
int age;
float income;

printf("enter age:\n");
scanf("%d", &age);

printf("enter income:\n");
scanf("%f", &income);

//diplay loan qualification
if( age >= 21 && income >=21000)
    printf("Congratulations, you qualify for a loan.\n");
else
    printf("Unfortunately, we are unable to offer you a loan at this time.\n");

return 0;
}
