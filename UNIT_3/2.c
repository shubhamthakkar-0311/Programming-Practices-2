#include <stdio.h>

// function to calculate area using pointer
void area(float *r, float *a)
{
    *a = 3.14 * (*r) * (*r);
}

int main()
{
    float radius, area_circle;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area(&radius, &area_circle);

    printf("Area of circle = %.2f\n", area_circle);

    return 0;
}
