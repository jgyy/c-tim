#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("write.txt", "w+");
    if (fp == NULL)
    {
        printf("Cannot open file\n");
        exit(EXIT_FAILURE);
    }

    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);

    return 0;
}
