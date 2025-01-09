#include <stdio.h>

int addOne(int x) {
    return -(~x);
}

int main() {
    int num = 5;
    printf("Original: %d, After adding 1: %d\n", num, addOne(num));
    return 0;
}

