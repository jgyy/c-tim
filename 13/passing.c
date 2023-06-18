#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 100;
    int b = 200;

    printf("Before swap, a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap, a = %d, b = %d\n", a, b);

    return 0;
}
