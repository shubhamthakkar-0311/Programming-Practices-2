#include <stdio.h>
#include <stdlib.h>

// function to check prime number
int isPrime(int num)
{
    int i;
    if(num <= 1)
        return 0;

    for(i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, i, sum = 0;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // dynamic memory allocation
    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // find sum of prime numbers
    for(i = 0; i < n; i++)
    {
        if(isPrime(arr[i]))
        {
            sum = sum + arr[i];
        }
    }

    printf("Sum of prime numbers = %d\n", sum);

    // free memory
    free(arr);

    return 0;
}
