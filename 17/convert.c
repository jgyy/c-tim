#include <stdio.h>
#include <stdlib.h>

#define FILENAME "convert.txt"

int main()
{
    FILE *fp = NULL;
    FILE *fp1 = NULL;
    char ch = '\0';

    fp = fopen(FILENAME, "r");
    if (fp == NULL)
    {
        printf("Cannot open file %s\n", FILENAME);
        exit(1);
    }

    fp1 = fopen("temp.txt", "w");
    if (fp1 == NULL)
    {
        printf("Cannot open file temp.txt\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);

    rename("temp.txt", FILENAME);
    remove("temp.txt");

    fp = fopen(FILENAME, "r");
    if (fp == NULL)
    {
        printf("Cannot open file %s\n", FILENAME);
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    return 0;
}
