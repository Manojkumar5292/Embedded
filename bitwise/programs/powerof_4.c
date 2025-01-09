#include <stdio.h>

int isPowerOfFour(int n) {
    int count = 0;
    if (n <= 0) return 0;
    if (n & (n - 1)) return 0; // Check if n is a power of 2
    while (n > 1) {
        n >>= 2;
        count++;
    }
    return count % 2 == 0;
}

int main() {
    int num = 16;
    if (isPowerOfFour(num)) {
        printf("%d is a power of 4.\n", num);
    } else {
        printf("%d is not a power of 4.\n", num);
    }
    return 0;
}

