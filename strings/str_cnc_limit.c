#include <stdio.h>

char* my_strncat(char *dest, const char *src, size_t n) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (src[j] != '\0' && j < n) {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
    return dest;
}

int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";
    printf("Concatenated: %s\n", my_strncat(dest, src, 3));  // Output: Hello, Wor
    return 0;
}

