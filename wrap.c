#include <limits.h>
#include <stdio.h>

int main(void) {
    unsigned int value = UINT_MAX;
    printf("Before: %u\n", value);
    value += 1u;
    printf("After:  %u\n", value);
    return 0;
}
