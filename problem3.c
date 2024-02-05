#include <stdio.h>

int main() {
    // Constants for hourly rates
    const double rateA = 7.00;
    const double rateB = 10.00;
    const double rateC = 12.00;
    const int standardHours = 40;
    const double doubleTimeMultiplier = 2.0;

    // Variables for input
    char skillLevel;
    int hoursWorked;

    // Get input from the user
    printf("Enter skill level (a, b, c): ");
    scanf(" %c", &skillLevel);

    printf("Enter hours worked: ");
    scanf("%d", &hoursWorked);

    // Calculate regular pay and overtime pay
    double hourlyRate, regularPay, overtimePay;
    
    if (skillLevel == 'a') {
        hourlyRate = rateA;
    } else if (skillLevel == 'b') {
        hourlyRate = rateB;
    } else if (skillLevel == 'c') {
        hourlyRate = rateC;
    } else {
        printf("Invalid skill level entered.\n");
        return 1;  // Exit program with an error code
    }

    if (hoursWorked <= standardHours) {
        regularPay = hoursWorked * hourlyRate;
        overtimePay = 0.0;
    } else {
        regularPay = standardHours * hourlyRate;
        overtimePay = (hoursWorked - standardHours) * hourlyRate * doubleTimeMultiplier;
    }

    // Display results
    printf("\nPayroll Summary:\n");
    printf("Hours Worked: %d\n", hoursWorked);
    printf("Hourly Pay Rate: RM %.2f\n", hourlyRate);
    printf("Regular Pay (40 hours): RM %.2f\n", regularPay);
    printf("Overtime Pay: RM %.2f\n", overtimePay);

    return 0;
}
