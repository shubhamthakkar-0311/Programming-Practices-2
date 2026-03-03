/*
Program: Compare two strings
Definition: This program takes two strings as input from the user
and checks whether they are the same or not. It uses strcmp()
from the string library to compare them.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Compare strings using strcmp
    if(strcmp(str1, str2) == 0) {
        printf("\nThe strings are SAME.");
    } else {
        printf("\nThe strings are NOT SAME.");
    }

    return 0;
}

