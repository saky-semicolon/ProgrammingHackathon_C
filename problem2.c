/*
### Problem 2
The Pool Associates operates a business that offers a variety of services to the general public who own swimming pools. Each year, Pool Associates cleans local pools and fills those pools when needed. Because swimming pools require a different amount of time to service, your job is to write a program that calculates the amount of time it will take to fill the pools with water. Then a reasonable estimate of fill-up time can be made before the job begins. This will enable Pool Associates to charge for pool fill-up on the basis of estimated hours. The table below gives some necessary parameters for estimating the fill-up time for a small pool and a large pool. Calculate the fill-up time for a small pool and a large pool. A small pool is considered 20 by 12 by 4 feet, and a large pool 30 by 20 by 10 feet.

| Problem Parameters |                  |
|--------------------:|:-----------------|
| RATE_OF_FLOW        | 50.0 gal/min     |
| CAPACITY            | 7.5 gal/cubic foot|
| L – pool length     |                  |
| W – pool width      |                  |
| D – pool depth      |                  |
*/

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
