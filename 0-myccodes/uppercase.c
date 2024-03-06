#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char c[100]; // Assuming the maximum length of the input string is 100

    printf("String before: ");
    fgets(c, sizeof(c), stdin); // Read input string

    printf("String after:  ");
    for (size_t i = 0; i < strlen(c); i++) {
        printf("%c", toupper(c[i])); // Convert characters to uppercase
    }

    printf("\n");

    return 0;
}
