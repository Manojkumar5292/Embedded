#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count++;
        n = n & (n - 1); // This clears the rightmost set bit
    }
    return count;
}

int main() {
    int num = 29; // Binary: 11101
    printf("Number of set bits in %d: %d\n", num, countSetBits(num));
    return 0;
}

