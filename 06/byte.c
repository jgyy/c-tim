#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Variables of type char occupy %d bytes\n", sizeof(char));
    printf("Variables of type short occupy %d bytes\n", sizeof(short));
    printf("Variables of type int occupy %d bytes\n", sizeof(int));
    printf("Variables of type long occupy %d bytes\n", sizeof(long));
    printf("Variables of type long long occupy %d bytes\n", sizeof(long long));
    printf("Variables of type float occupy %d bytes\n", sizeof(float));
    printf("Variables of type double occupy %d bytes\n", sizeof(double));
    printf("Variables of type long double occupy %d bytes\n", sizeof(long double));

    return 0;
}