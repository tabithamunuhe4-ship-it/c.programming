/*
Name:Tabitha Muthoni
Reg No:CT100/G/26159/25
Description:program to withdraw
using while loop
*/

#include <stdio.h>

int main() {
	
	int amount;
	int balance = 5000; //start
	printf("Your current balance is %d \n", balance);
	
	while(balance>0) //stop
	{
		printf("Enter the amount to wirhdraw \n");
		scanf("%d", &amount);
		balance -= amount; //step, balance = balance - amount
		printf("New Balance: = %d \n", balance);
		
	}
	printf("insufficient balance");
	
	return 0;

}
