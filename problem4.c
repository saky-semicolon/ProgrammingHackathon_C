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
