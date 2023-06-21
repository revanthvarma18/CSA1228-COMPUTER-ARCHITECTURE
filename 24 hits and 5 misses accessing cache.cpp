#include <stdio.h>

float calculateHitRatio(int hits, int misses) {
    float totalAccesses = hits + misses;
    float hitRatio = (float)hits / totalAccesses * 100;

    return hitRatio;
}

int main() {
    int hits = 24;
    int misses = 5;

    float hitRatio = calculateHitRatio(hits, misses);

    printf("Hit Ratio: %.2f%%\n", hitRatio);

    return 0;
}
