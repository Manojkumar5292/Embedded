#include <stdio.h>

char* my_strchr(const char *str, int c) {
    while (*str != '\0') {
        if (*str == c) return (char *)str;
        str++;
    }
    return NULL;
}

int main() {
    const char *str = "Hello";
    char *res = my_strchr(str, 'e');
    if (res) printf("Found: %c\n", *res);  // Output: e
    return 0;
}

