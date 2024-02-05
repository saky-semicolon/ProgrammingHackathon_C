/*
### Problem 3
Widget Company runs a small factory that makes several types of nuts and bolts. They employ factory workers
who are paid one of the three hourly rates depending on skill level: (a) RM 7.00, (b) RM 10.00, or (c) RM 12.00.
Each factory worker can work: (a) 40 hours, (b) 45 hours, (c) 50 hours per week. All hours over 40 are paid at
double time.

Jack Smith, the factory manager, wants you to write an interactive C payroll program that will calculate the
gross pay for a factory worker. Hours worked and hourly pay rate to be entered from the keyboard. Once the
figures are entered for an employee, the program prints out: (1) the hours worked, (2) the hourly pay rate, (3)
the regular pay for 40 hours, and (4) the overtime pay.
*/

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
