#include <stdio.h>

int mogrify(int a, int b)
{
    int tmp = a * 4 - b / 3;
    return tmp;
}

double truelyHalf(int x)
{
    double tmp = x / 2.0;
    return tmp;
}

int main()
{
    int a = 7, y = 17;
    int mog = mogrify(a, y);
    printf("Done with mogrify\n");

    double x = truelyHalf(y);
    printf("Done with truelyHalf\n");

    a = mogrify(x, mog);
    printf("Result: %d %lf\n", mog, x);

    return 0;
}
