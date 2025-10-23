/*
Name:George njau
AdmCT100/G/26242/25
Des:
*/
#include <stdio.h>

int main() {
    float units, bill = 0;//assigning the variables 

    printf("Enter amount of units used: ");//promting users to input units used
    if (scanf("%f", &units) != 1 || units < 0) {
        printf("Invalid input.\n");//variables that are not included shall forth output such
        return 1;
    }

    if (units <= 100) {
        bill = units * 10;//commaninthe code to multiply the units according to the kes assigned
    } else if (units <= 200) {
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }

    printf("Your bill is kes %.2f\n", bill);
    return 0;
}