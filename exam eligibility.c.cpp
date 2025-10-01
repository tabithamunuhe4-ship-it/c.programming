/* 
Name: Tabitha Muthoni 
Reg No:CT100/G/26159/25
Description:Exam eligibility 
*/

#include <stdio.h>

int main() {
    float attendance, average_marks;

    // Input
    printf("Enter attendance percentage:\n");
    scanf("%f", &attendance);

    printf("Enter average_marks:\n");
    scanf("%f", &average_marks);

    // Check eligibility
    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
    }