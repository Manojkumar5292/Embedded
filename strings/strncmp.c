//compare first n characters
#include <stdio.h>

int my_strncmp(const char *str1, const char *str2, size_t n) {
    for (size_t i = 0; i < n; i++) {
        if (str1[i] != str2[i]) return str1[i] - str2[i];
        if (str1[i] == '\0') return 0;
    }
    return 0;
}

int main() {
    printf("%d\n", my_strncmp("hello", "hell", 4));  // Output: 0
    return 0;
}

