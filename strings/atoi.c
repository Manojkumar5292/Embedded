#include <stdio.h>

int my_atoi(const char *str) {
    int result = 0, i = 0, sign = 1;
    if (str[0] == '-') {
        sign = -1;
        i++;
    }
    for (; str[i] != '\0'; i++) {
        result = result * 10 + (str[i] - '0');
    }
    return sign * result;
}

int main() {
    const char *str = "-12345";
    printf("Integer: %d\n", my_atoi(str));  // Output: -1234
    return 0;
}

