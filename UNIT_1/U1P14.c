/*
Program: Reverse a string using both methods
Definition: This program takes a string input from the user and
prints it in reverse order in two ways:
1. Using string function (strlen)
2. Without using string function (manual length calculation)
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // --- Method 1: Using string function (strlen) ---
    int len = strlen(str);
    printf("\nReversed string (with function): ");
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    // --- Method 2: Without using string function ---
    while(str[length] != '\0') {
        length++;
    }

    printf("\nReversed string (without function): ");
    for(int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

