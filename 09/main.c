#include <stdio.h>

void add(void)
{
    int a = 1;
    int b = 2;
    int c = a + b;
    printf("%d + %d = %d\n", a, b, c);
}

int main(void)
{
    add();
    return 0;
}
