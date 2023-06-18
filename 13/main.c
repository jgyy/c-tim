#include <stdio.h>

int main()
{
    long num1 = 0L; // 0
    long num2 = 0L; // 0
    long *pnum = NULL; // NULL address
    pnum = &num1; // num1 address
    *pnum = 2L; // *pnum = 2 -> num1 = 2
    ++num2; // 1
    num2 += *pnum; // 3

    pnum = &num2; // num2 address
    ++*pnum; // *pnum = 4 -> num2 = 4

    printf("num1 = %ld\n", num1);
    printf("num2 = %ld\n", num2);
    printf("*pnum = %ld\n", *pnum);
    printf("*pnum + num2 = %ld\n", *pnum + num2);

    return 0;
}
