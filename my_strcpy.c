/*
strcpy(destination, source) -> Copies the source string to destination
Proto type: char *strcpy(char *dest, const char *src);
*/
#include <stdio.h>

char *my_strcpy(char *dest, const char *src) {
    char *start = dest;
    while ((*dest++ = *src++)) {} 
    return start;
}

int main() {
    char src[20];
    printf("Enter a string: ");
    scanf("%[^\n]s", src); 
    char dest[20];
    my_strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}

