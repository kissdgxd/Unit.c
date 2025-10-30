/*
Name:George njau
AdmCT100/G/26242/25
Des:// hotel room with  5 floors and 10 rooms each
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS  10

int main(void) {
    // Declare a 2D array for room occupancy
    int occ[FLOORS][ROOMS];
    srand((unsigned)time(NULL));  // Seed the random number generator

    // Simulate random occupancy: 1 = occupied, 0 = vacant
    for (int f = 0; f < FLOORS; f++) {
        for (int r = 0; r < ROOMS; r++) {
            occ[f][r] = rand() % 2;  // Randomly assign 0 or 1
        }
    }

    // Print the occupancy data for each floor
    printf(" One Branch Occupancy (%d floors, %d rooms/floor) \n", FLOORS, ROOMS);
    for (int f = 0; f < FLOORS; f++) {
        int occupied = 0, vacant = 0;
        for (int r = 0; r < ROOMS; r++) {
            if (occ[f][r] == 1) {  // If room is occupied
                occupied++;
            } else {  // If room is vacant
                vacant++;
            }
        }
        printf("Floor %d -> Occupied: %2d, Vacant: %2d\n", f + 1, occupied, vacant);
    }

    return 0;
}