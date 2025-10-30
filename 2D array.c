/*
Name: Tabitha Muthoni
Reg: CT100/G/26159/25
Description: Occupancy
*/

// 2D array
#include <stdio.h>

int main() {
    int i, j;
    
    // Declare and initialize 2D array
    int occupancy[5][10];
    
    int occupied, vacant;
    
    // Input occupancy data
    printf("Enter room occupancy (1=occupied, 0=vacant):\n");
    for(i = 0; i < 5; i++) {
        printf("Floor %d:\n", i + 1);
        for(j = 0; j < 10; j++) {
            printf("Room %d: ", j + 1);
            scanf("%d", &occupancy[i][j]);
        }
    }
    
    // Display occupancy report
    printf("\nRoom Occupancy Report:\n");
    printf("----------------------\n");
    
    for(i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;
        
        // Count occupied and vacant rooms
        for(j = 0; j < 10; j++) {
            if(occupancy[i][j] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }
        
        // Display results
        printf("\nFloor %d:\n", i + 1);
        printf("Occupied rooms: %d\n", occupied);
        printf("Vacant rooms: %d\n", vacant);
    }
    
    return 0;
}