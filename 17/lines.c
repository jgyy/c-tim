#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file.txt"

int main()
{
    FILE *fp = NULL;
    char ch;
    int linesCount = 0;

    fp = fopen(FILENAME, "r");
    if (fp == NULL)
    {
        printf("Cannot open file %s\n", FILENAME);
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            linesCount++;
        }
    }

    fclose(fp);
    fp = NULL;

    printf("Total number of lines are %d\n", linesCount);

    return 0;
}
