#include <stdio.h>

int main() {
    // Check if the system is 64-bit or 32-bit
    if (sizeof(void*) == 8) {
        printf("This is a 64-bit system.\n");
    } else if (sizeof(void*) == 4) {
        printf("This is a 32-bit system.\n");
    } else {
        printf("Unknown architecture.\n");
    }
    
    // You can also use predefined macros:
    #ifdef __x86_64__
        printf("The system architecture is 64-bit (x86_64).\n");
    #elif defined(__i386__)
        printf("The system architecture is 32-bit (i386).\n");
    #else
        printf("Unknown system architecture.\n");
    #endif
    
    return 0;
}

