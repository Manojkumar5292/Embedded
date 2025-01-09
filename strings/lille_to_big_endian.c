#include <stdio.h>

union Endian {
    int num;
    char bytes[4];
};

int main() {
    union Endian end;
    end.num = 1;
    
    printf("Little-endian: ");
    for (int i = 0; i < 4; i++) {
        printf("%x ", end.bytes[i]);
    }
    printf("\n");

    // Swap bytes to convert to Big-endian
    printf("Big-endian: ");
    for (int i = 3; i >= 0; i--) {
        printf("%x ", end.bytes[i]);
    }
    printf("\n");

    return 0;
}

