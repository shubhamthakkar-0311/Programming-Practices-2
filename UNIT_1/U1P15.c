/*
Program: Count spaces and vowels in a string
Definition: This program takes a string input from the user and
calculates:
1. The number of spaces in the string
2. The number of vowels (a, e, i, o, u in both cases)
*/

#include <stdio.h>

int main() {
    char str[200];
    int spaces = 0, vowels = 0;
    int i = 0;

    printf("Enter a string: ");
    // fgets allows spaces in input
    fgets(str, sizeof(str), stdin);

    // Traverse the string
    while(str[i] != '\0') {
        // Count spaces
        if(str[i] == ' ') {
            spaces++;
        }
        // Count vowels (both uppercase and lowercase)
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
        i++;
    }

    printf("\nNumber of spaces: %d", spaces);
    printf("\nNumber of vowels: %d", vowels);

    return 0;
}

