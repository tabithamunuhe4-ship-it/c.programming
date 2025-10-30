/*
Name: Tabitha Muthoni
Reg: CT100/G/26159/25
Description: Branches

*/

// 3D array
#include <stdio.h>

int main() {
    int i, j, k;
    
    // Declare 3D array for multiple branches
    // chain[3][5][10] = 3 branches, 5 floors, 10 rooms
    int chain[3][5][10];
    
    int totalOccupied = 0;
    
    // Input occupancy data for all branches
    printf("Enter room occupancy (1=occupied, 0=vacant):\n");
    printf("--------------------------------------------\n");
    
    for(i = 0; i < 3; i++) {
        printf("\nBranch %d:\n", i + 1);
        for(j = 0; j < 5; j++) {
            printf("  Floor %d:\n", j + 1);
            for(k = 0; k < 10; k++) {
                printf("    Room %d: ", k + 1);
                scanf("%d", &chain[i][j][k]);
            }
        }
    }
    
    // Calculate total occupied rooms across all branches
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            for(k = 0; k < 10; k++) {
                if(chain[i][j][k] == 1) {
                    totalOccupied++;
                }
            }
        }
    }
    
    // Display results
    printf("\n========================================\n");
    printf("   HOTEL CHAIN OCCUPANCY REPORT\n");
    printf("========================================\n");
    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);
    printf("Total rooms in chain: 150\n");
    printf("Total vacant rooms: %d\n", 150 - totalOccupied);
    printf("========================================\n");
    
    return 0;
}