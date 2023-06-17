#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[100];
    char name[25][50], temp[25];
    char s1[100], s2[100], s3[100];
    int l, i, n, j;

    printf("\n\nPrint individual characters of string in reverse order:\n");
    printf("------------------------------------------------------\n");
    printf("Input the string: ");
    scanf("%s", str);

    l = strlen(str);

    printf("The characters of the string in reverse are: \n");
    for (i = l; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n------------------------------------------------------\n");

    printf("\n\nSorts the strings of an array using bubble sort:\n");
    printf("------------------------------------------------------\n");
    printf("Input number of strings: ");
    scanf("%d", &n);

    printf("\nInput string %d:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j + 1], sizeof(name[j]) - 1);
                strncpy(name[j + 1], temp, sizeof(name[j + 1]) - 1);
            }
        }
    }

    printf("The strings appear after sorting: \n");
    //====================================================================================================

    for (i = 0; i <= n; i++)
    {
        printf("%s\n", name[i]);
    }

    printf("\n------------------------------------------------------\n");
    printf("\n\nConcatenates two strings:\n");

    printf("Input the first string: ");
    scanf("%s", s1);

    printf("Input the second string: ");
    scanf("%s", s2);

    printf("The concatenated string: %s\n", strcat(s1, s2));

    printf("\n------------------------------------------------------\n");
    printf("\n\nCopy one string to another string:\n");

    printf("Input the string: ");
    scanf("%s", s1);

    strcpy(s2, s1);

    printf("The first string: %s\n", s1);
    printf("The second string: %s\n", s2);

    printf("\n------------------------------------------------------\n");
    printf("\n\nCompare two strings:\n");

    printf("Input the first string: ");
    scanf("%s", s1);

    printf("Input the second string: ");
    scanf("%s", s2);

    if (strcmp(s1, s2) == 0)
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");

    printf("\n------------------------------------------------------\n");
    printf("\n\nConverts all lowercase characters in a string to uppercase:\n");

    printf("Input the string: ");
    scanf("%s", s1);

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] = s1[i] - 32;
        }
    }

    printf("The string in uppercase: %s\n", s1);

    printf("\n------------------------------------------------------\n");
    printf("\n\nConverts all uppercase characters in a string to lowercase:\n");

    printf("Input the string: ");
    scanf("%s", s1);

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] = s1[i] + 32;
        }
    }

    printf("The string in lowercase: %s\n", s1);

    printf("\n------------------------------------------------------\n");
    return 0;
}
