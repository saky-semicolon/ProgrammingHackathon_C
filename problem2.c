#include <stdio.h>

// Constants
#define RATE_OF_FLOW 50.0  // gallons per minute
#define CAPACITY 7.5       // gallons per cubic foot

int main() {
    // Small pool dimensions
    int smallPoolLength = 20;
    int smallPoolWidth = 12;
    int smallPoolDepth = 4;

    // Large pool dimensions
    int largePoolLength = 30;
    int largePoolWidth = 20;
    int largePoolDepth = 10;

    // Calculate fill-up time for small pool
    double smallPoolVolume = smallPoolLength * smallPoolWidth * smallPoolDepth * CAPACITY;
    double smallPoolFillUpTime = smallPoolVolume / RATE_OF_FLOW;

    // Calculate fill-up time for large pool
    double largePoolVolume = largePoolLength * largePoolWidth * largePoolDepth * CAPACITY;
    double largePoolFillUpTime = largePoolVolume / RATE_OF_FLOW;

    // Display results
    printf("Fill-up time for small pool: %.2f minutes\n", smallPoolFillUpTime);
    printf("Fill-up time for large pool: %.2f minutes\n", largePoolFillUpTime);

    return 0;
}
