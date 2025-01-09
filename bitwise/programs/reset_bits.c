#include <stdio.h>

int countResetBits(int n) {
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if (!(n & (1 << i))) {
            count++;
        }
    }
    return count;
}

int main() {
    int num = 29; // Binary: 00000000000000000000000000011101
    printf("Number of reset bits in %d: %d\n", num, countResetBits(num));
    return 0;
}

