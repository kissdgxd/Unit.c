/*
Name:George Njau Ngigi
Reg:CT100/G/26242/25
Des:guessing game
*/

#include <stdio.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed the random number generator
    secretNumber = (rand() % 20) + 1; // Random number between 1 and 20

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 20. Try to guess it!\n");

    // Loop until the correct guess
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the correct number.\n");
            printf("Total attempts: %d\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}