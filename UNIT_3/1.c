#include <stdio.h>

// function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // passing addresses of x and y
    swap(&x, &y);

    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
