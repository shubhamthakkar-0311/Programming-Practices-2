// Write a program to enter a string and find out length of string
// using string function and without string function.

#include <stdio.h>
#include <string.h>   // for strlen()

int main() {
    char str[100];
    int i, length = 0;

    // Step 1: Input string
    printf("Enter a string: ");
    scanf("%s", str);   // %s reads string (without spaces)

    // Step 2: Find length using string function
    printf("Length using strlen() = %d\n", strlen(str));

    // Step 3: Find length without string function
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    printf("Length without strlen() = %d\n", length);

    return 0;
}
