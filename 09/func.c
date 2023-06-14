#include <stdio.h>
#include <stdlib.h>

int gcd(int u, int v);
float absoluteValue(float x);
float squareRoot(float x);

int main(void)
{
    int result = 0;
    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float absoluteValueResult = 0.0;

    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %i\n", result);

    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %i\n", result);
    printf("The gcd of 83 and 240 is %i\n\n", gcd(83, 240));

    absoluteValueResult = absoluteValue(f1);
    printf("f1 = %.2f\n", f1);
    printf("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue(f2) + absoluteValue(f3);
    printf("f2 + f3 = %.2f\n", absoluteValueResult);
    printf("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue((float)i1);
    printf("i1 = %i\n", i1);
    printf("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue(i1);
    printf("result = %.2f\n", absoluteValueResult);
    printf("-6.0 / 4\n");
    printf("%.2f\n\n", absoluteValue(-6.0) / 4);

    printf("squareRoot(2.0) = %.2f\n", squareRoot(2.0));
    printf("squareRoot(144.0) = %.2f\n", squareRoot(144.0));
    printf("squareRoot(17.5) = %.2f\n", squareRoot(17.5));

    return 0;
}

// greatest common divisor
int gcd(int u, int v)
{
    int t;
    while (u > 0)
    {
        if (u < v)
        {
            t = u;
            u = v;
            v = t;
        }
        u = u - v;
    }
    return v;
}

float absoluteValue(float x)
{
    if (x < 0)
    {
        x = -x;
    }
    return x;
}

float squareRoot(float x)
{
    const float epsilon = .00001;
    float guess = 1.0;

    while (absoluteValue(guess * guess - x) >= epsilon)
    {
        guess = (x / guess + guess) / 2.0;
    }
    return guess;
}
