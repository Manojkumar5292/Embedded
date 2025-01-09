#include <stdio.h>

char* my_strcat(char *dest, const char *src) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
    return dest;
}

int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";
    printf("Concatenated: %s\n", my_strcat(dest, src));  // Output: Hello, World!
    return 0;
}

