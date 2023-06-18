#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = NULL;

    str = (char *)malloc(15 * sizeof(char));
    strcpy(str, "Hello World!");
    printf("String = %s | Address = %p\n", str, str);

    str = (char *)realloc(str, 25 * sizeof(char));
    strcat(str, " Welcome to the world of C");
    printf("String = %s | Address = %p\n", str, str);

    free(str);
    return 0;
}
