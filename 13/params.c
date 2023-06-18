#include <stdio.h>
#include <stdlib.h>

void square(int * x);

int main()
{
    int *num = (int *)malloc(sizeof(int));
    *num = 4;

    printf("Before square, a = %d\n", *num);
    square(num);
    printf("After square, a = %d\n", *num);

    return 0;
}

void square(int * x)
{
    *x = (*x) * (*x);
}
