#include <limits.h>
#include <stdio.h>

int main(void) {
    volatile int value = INT_MAX;

    printf("Before: %d\n", value);
    fflush(stdout);

    value = value + 1;  // Intentional signed overflow

    printf("After: %d\n", value);
    return 0;
}