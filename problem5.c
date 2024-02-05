/*
### Problem 5
The Tax Advantage Company provides free tax services to residents who cannot calculate their personal taxes.
You have been asked to write a C program that will calculate an estimated tax for either a single or married
taxpayer, given a keyboard income entry. After the income is entered, a code status “S” for single or “M” for
married is entered. A tax function will calculate the tax based on the input values.

For taxpayers, two tax rates are needed, 15 percent and 30 percent. For single taxpayers, the cutoff rate of 15
percent is $10,000.00, and 30 percent above $10,000.00. For married taxpayers, the cutoff rate is 15 percent
for amounts below $20,000, and 30 percent for amounts of $20,000 and above. Program output should show
the code status, income, and the amount of tax.
*/

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
