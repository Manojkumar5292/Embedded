#include <stdio.h>

int isNegative(int n) {
    return (n >> 31) & 1;
}

int main() {
    int num = -8;
    if (isNegative(num)) {
        printf("%d is negative.\n", num);
    } else {
        printf("%d is non-negative.\n", num);
    }
    return 0;
}

