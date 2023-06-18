#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string);

int main(void)
{
    printf("'%s' length is %d\n", "", stringLength(""));
    printf("'%s' length is %d\n", "string", stringLength("string"));
    printf("'%s' length is %d\n", "str", stringLength("str"));
    printf("'%s' length is %d\n", "string length test", stringLength("string length test"));

    return 0;
}

int stringLength(const char *string)
{
    const char *lastAddress = string;

    while (*lastAddress)
        ++lastAddress;

    return lastAddress - string;
}
