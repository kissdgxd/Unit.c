/*
Name:George njau
AdmCT100/G/26242/25
Des:fare calculator 
*/#include <stdio.h>

// Function to calculate fare
double calculateFare(double distance) {
    double ratePerKm = 50.0;   // Fare rate KSh 50 per kilometer
    double totalFare = distance * ratePerKm;
    return totalFare;
}

int main() {
    double distance, fare;

    // Prompt user for input
    printf("Enter distance traveled (in kilometers): ");
    scanf("%lf", &distance);

    // Calculate total fare
    fare = calculateFare(distance);

    // Display the result
    printf("Total Fare: KSh. %.2f\n", fare);

    return 0;
}