/*
Name:George njau
AdmCT100/G/26242/25
Des:// weekly revenue assigned and calculating its total amount and average
*/
#include <stdio.h>
#define DAYS 7
int main(void) {
    int revenue[DAYS];//assigning variables 
    long long total = 0;
    const char *day[DAYS] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

    printf("Weekly Revenue Tracker (7 days)\n");
   //start stop step 
    for (int i = 0; i < DAYS; i++) {
        int x;
        printf("Enter revenue for %s: ", day[i]);
     //promtithe user to input the revenue 
        while (scanf("%d", &x) != 1 || x < 0) {
            int c; while ((c = getchar())!='\n' && c!=EOF) ;
            printf("  Invalid. Enter a non-negative integer: ");
        }
        revenue[i] = x;
        total += x;
    }

    printf("\nTotal weekly revenue: %lld\n", total);
    printf("Average daily revenue: %.2f\n", (double)total / DAYS);
    return 0;
}