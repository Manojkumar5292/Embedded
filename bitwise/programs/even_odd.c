#include <stdio.h>

void checkEvenOdd(int n) {
    if (n & 1) {
        printf("%d is odd.\n", n);
    } else {
        printf("%d is even.\n", n);
    }
}

int main() {
    int num = 7;
    checkEvenOdd(num);
    return 0;
}

