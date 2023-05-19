#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b) {
    void *ptr = malloc(b);
    if (ptr == NULL) {
        fprintf(stderr, "Error: malloc failed. Exiting...\n");
        exit(98);
    }
    return ptr;
}

int main() {
    unsigned int size = 100;
    void *allocated_memory = malloc_checked(size);
    
    // Use the allocated memory here
    
    free(allocated_memory);
    return 0;
}
