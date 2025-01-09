#include <stdio.h>

int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    printf("%d\n", my_strcmp("abc", "abc"));  // Output: 0
    printf("%d\n", my_strcmp("abc", "abd"));  // Output: Negative value
    return 0;
}

