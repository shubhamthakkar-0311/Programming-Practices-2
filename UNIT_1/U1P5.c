#include <stdio.h>

int main() {
    int n, i, num;
    int positive = 0, negative = 0, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);

        if(num > 0)
            positive++;
        else if(num < 0)
            negative++;

        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}
