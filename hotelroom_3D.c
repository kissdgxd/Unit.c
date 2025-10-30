/*
Name:George njau
AdmCT100/G/26242/25
Des:// hotel room with 3 branches consisting of 5 floors and 10 rooms each
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//pre processor directive 
#define BRANCHES 3
#define FLOORS   5
#define ROOMS    10

int main(void) {
    int chain[BRANCHES][FLOORS][ROOMS];//assignment 
    srand((unsigned)time(NULL));

    long long total_occupied = 0;

    // random occupancy across all branches
    for (int b = 0; b < BRANCHES; b++)
        for (int f = 0; f < FLOORS; f++)
            for (int r = 0; r < ROOMS; r++)
                chain[b][f][r] = rand() % 2;

    printf("Multi-Branch Occupancy (%d branches, %d floors, %d rooms/floor)\n",
           BRANCHES, FLOORS, ROOMS);

    for (int b = 0; b < BRANCHES; b++) {
        int branch_occ = 0;
        for (int f = 0; f < FLOORS; f++)
            for (int r = 0; r < ROOMS; r++)
                if (chain[b][f][r]) branch_occ++;

        total_occupied += branch_occ;
        printf("Branch %d -> Occupied rooms: %d\n", b+1, branch_occ);
    }
    printf("Total occupied rooms across ALL branches: %lld\n", total_occupied);
    return 0;
}