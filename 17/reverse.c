#include <stdio.h>
#include <stdlib.h>

#define FILENAME "test.txt"

int main()
{
    FILE *fp = NULL;

    int cnt = 0;
    int i = 0;

    fp = fopen(FILENAME, "r");
    if (fp == NULL)
    {
        printf("Cannot open file %s\n", FILENAME);
        return -1;
    }

    fseek(fp, 0, SEEK_END);
    cnt = ftell(fp);

    while (i < cnt)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    printf("\n");
    fclose(fp);
    fp = NULL;

    return 0;
}
