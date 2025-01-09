#include <stdio.h>

unsigned int reverseBits(unsigned int n) {
    unsigned int rev = 0;
    for (int i = 0; i < 32; i++) {
        if (n & (1 << i)) {
            rev |= (1 << (31 - i));
        }
    }
    return rev;
}

int main() {
    unsigned int num = 5; // Binary: 00000000000000000000000000000101
    unsigned int reversed = reverseBits(num);
    printf("Original: %u, Reversed: %u\n", num, reversed);
    return 0;
}

