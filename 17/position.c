#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    int len;

    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("Cannot open file file.txt\n");
        exit(1);
    }

    fseek(fp, 0, SEEK_END);
    len = ftell(fp);
    fclose(fp);

    printf("Total size of file.txt = %d bytes\n", len);

    return 0;
}
