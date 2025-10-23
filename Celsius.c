/*
Name:George njau
AdmCT100/G/26242/25
Des:// Function to convert Fahrenheit to Celsius
*/
#include <stdio.h>
double convertToCelsius(double fahrenheit) {
    double celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    double fahrenheit, celsius;

    // Prompt user for temperature
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // Call the function
    celsius = convertToCelsius(fahrenheit);

    // Display result
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}