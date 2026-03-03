// Write a program to enter your name and print it vertically.

#include <stdio.h>

int main() {
    char name[50];   // array to store name
    int i;

    // Step 1: Input name
    printf("Enter your name: ");
    scanf("%s", name);   // %s reads string (without spaces)

    // Step 2: Print name vertically
    printf("Your name vertically:\n");
    for(i = 0; name[i] != '\0'; i++) {
        printf("%c\n", name[i]);
    }

    return 0;
}
