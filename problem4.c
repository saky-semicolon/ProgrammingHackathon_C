/*
### Problem 4
Local Caterer’s Company operates a small Mom and Pop catering service. They want you to write a C program
for them to schedule their catering events. They mostly cater special events, but they occasionally cater
corporate, private and non-profit events as well. Mom and Pop are both managers; Mom manages nonprofit
and special events, and Pop manages the corporate and private events. All catered events have an event
minimum rate shown in the table below:

| Event      | Minimum Rate | Manager |
|------------|--------------|---------|
| Corporate  | $500.00      | Pop     |
| Private    | $300.00      | Pop     |
| Nonprofit  | $150.00      | Mom     |
| Special    | $200.00      | Mom     |

Write a program for Local Caterer’s Company that accepts keyboard input and checks the event type input for
errors until a valid event type is entered. After a valid input type is entered, print the manager’s name for that
event, the type of event chosen, and the minimum rate to be charged. 
*/

#include <stdio.h>

int main() {
    char eventType[20];
    char managerName[20] = "";  // Initialize with an empty string
    float minRate = 0.0;       // Initialize to 0.0

    // Accept keyboard input for event type
    printf("Enter the event type (Corporate, Private, Nonprofit, Special): ");
    scanf("%s", eventType);

    // Check the event type and set manager name and minimum rate
    if ((eventType[0] == 'C' || eventType[0] == 'c') && (minRate = 500.00, 1)) {
        managerName[0] = 'P';
        managerName[1] = 'o';
        managerName[2] = 'p';
    } else if ((eventType[0] == 'P' || eventType[0] == 'p') && (minRate = 300.00, 1)) {
        managerName[0] = 'P';
        managerName[1] = 'o';
        managerName[2] = 'p';
    } else if ((eventType[0] == 'N' || eventType[0] == 'n') && (minRate = 150.00, 1)) {
        managerName[0] = 'M';
        managerName[1] = 'o';
        managerName[2] = 'm';
    } else if ((eventType[0] == 'S' || eventType[0] == 's') && (minRate = 200.00, 1)) {
        managerName[0] = 'M';
        managerName[1] = 'o';
        managerName[2] = 'm';
    } else {
        printf("Invalid event type entered.\n");
        return 1;  // Exit program with an error code
    }

    // Display the manager's name, event type, and minimum rate
    printf("\nManager: %s\n", managerName);
    printf("Event Type: %s\n", eventType);
    printf("Minimum Rate: $%.2f\n", minRate);

    return 0;
}
