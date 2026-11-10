#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const unsigned int count = 65;
    const unsigned int bytes_per_item = 4;

    size_t needed = (size_t)count * bytes_per_item;

    /* 260 becomes 4 when converted to an 8-bit unsigned type. */
    uint8_t stored_bytes = (uint8_t)needed;

    printf("Needed: %zu bytes\n", needed);
    printf("Allocated: %u bytes\n", (unsigned int)stored_bytes);
    fflush(stdout);

    unsigned char *buffer = malloc(stored_bytes);
    if (buffer == NULL) {
        return 1;
    }

    for (size_t i = 0; i < needed; i++) {
        buffer[i] = 'A';  // Intentional invalid write when i reaches 4
    }

    free(buffer);
    return 0;
}