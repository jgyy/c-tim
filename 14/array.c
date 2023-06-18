#include <stdio.h>
#include <string.h>

int main(void)
{
    char multipleChar[] = "a string";
    char *p = multipleChar;

    for (int i = 0; i < strlen(multipleChar); i++)
    {
        printf("multiple[%d] *(p+%d): %c | ", i, i, multipleChar[i]);
        printf("&multiple[%d] p+%d: %p\n", i, i, &multipleChar[i]);
    }

    long multipleLong[] = {15L, 25L, 35L, 45L};
    long *q = multipleLong;

    for (int i = 0; i < sizeof(multipleLong) / sizeof(multipleLong[0]); i++)
    {
        printf("address q+%d (&multiple[%d]): %llu | ", i, i, (unsigned long long)(q + i));
        printf("*(q+%d) value: %ld\n", i, *(q + i));
    }
    printf("\nType long occupies: %d bytes\n", (int)sizeof(long));

    return 0;
}
