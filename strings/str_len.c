#include <stdio.h>

size_t my_strlen(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const char *str = "Hello";
    printf("Length: %zu\n", my_strlen(str));  // Output: 5
    return 0;
}

