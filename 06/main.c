#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 0;
    c = a + b;
    printf("a + b = %d\n", c);

    _Bool d = 1;
    _Bool e = 0;
    _Bool f = d && e;
    printf("d && e = %d\n", f);

    return 0;
}