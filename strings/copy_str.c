#include <stdio.h>

char* my_strcpy(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // Null-terminate
    return dest;
}

int main() {
    char dest[20];
    my_strcpy(dest, "Hello");
    printf("Copied string: %s\n", dest);  // Output: Hello
    return 0;
}

