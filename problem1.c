#include <stdio.h>

// Define a structure for Employee
struct Employee {
    char firstName[50];
    char lastName[50];
    int empID;
    float empSalary;
};

int main() {
    // Create an array to hold employee data
    struct Employee employees[4] = {
        {"Kim", "Yee", 101, 40000.00},
        {"John", "Reynolds", 102, 55000.00},
        {"Elena", "Gonzales", 103, 50500.00},
        {"Jim", "O'Shea", 104, 75000.00}
    };

    // Retrieve and display data for each employee
    for (int i = 0; i < 4; i++) {
        printf("Employee Name: %s %s\n", employees[i].firstName, employees[i].lastName);
        printf("Employee ID: %d\n", employees[i].empID);
        printf("Employee Salary: $%.2f\n", employees[i].empSalary);
        printf("\n");
    }

    return 0;
}
