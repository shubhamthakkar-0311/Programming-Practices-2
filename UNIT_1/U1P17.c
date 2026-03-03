/*
Program: Check if a string is palindrome
Definition: This program takes a string input from the user and
checks whether it is a palindrome or not. A palindrome is a word
or phrase that reads the same forwards and backwards.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // Note: scanf("%s") won't allow spaces

    len = strlen(str);

    // Compare characters from start and end
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("\nThe string is a PALINDROME.");
    } else {
        printf("\nThe string is NOT a PALINDROME.");
    }

    return 0;
}

