/*
Name:Tabitha Muthoni
Reg No:CT100/G/26159/25
Description:password entry
Using do while loop
*/

#include <stdio.h>

int main () {
	//start, stop, step
	
	int password; //user's input
	int correct_password = 1234; //actual password
	int i=0; //start
	
	do{
		printf("enter password: ");
		scanf("%d", &password);
		i++ ;//step
		
	}while(password !=correct_password); //stop
	
		printf("access granted \n");
		
		return 0;
}