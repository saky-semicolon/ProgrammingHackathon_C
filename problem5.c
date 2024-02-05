#include <stdio.h>

int main() {
    // Constants for tax rates and cutoffs
    const double singleTaxRate1 = 0.15;
    const double singleTaxRate2 = 0.30;
    const double marriedTaxRate1 = 0.15;
    const double marriedTaxRate2 = 0.30;
    const double singleCutoff = 10000.00;
    const double marriedCutoff = 20000.00;

    // Variables for input
    char taxCode;
    double income;

    // Get input from the user
    printf("Enter tax code (S for Single, M for Married): ");
    scanf(" %c", &taxCode);

    printf("Enter income: ");
    scanf("%lf", &income);

    // Calculate tax based on tax code and income
    double tax;

    if (taxCode == 'S' || taxCode == 's') {
        if (income <= singleCutoff) {
            tax = income * singleTaxRate1;
        } else {
            tax = singleCutoff * singleTaxRate1 + (income - singleCutoff) * singleTaxRate2;
        }
    } else if (taxCode == 'M' || taxCode == 'm') {
        if (income <= marriedCutoff) {
            tax = income * marriedTaxRate1;
        } else {
            tax = marriedCutoff * marriedTaxRate1 + (income - marriedCutoff) * marriedTaxRate2;
        }
    } else {
        printf("Invalid tax code entered.\n");
        return 1;  // Exit program with an error code
    }

    // Display results
    printf("\nTax Summary:\n");
    printf("Tax Code: %c\n", taxCode);
    printf("Income: $%.2f\n", income);
    printf("Tax Amount: $%.2f\n", tax);

    return 0;
}
