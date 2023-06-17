#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char buffer[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;
    int i = 0;

    printf("Enter an interesting string of less than %d characters:\n", 100);
    scanf("%s", buffer);

    while (buffer[i])
    {
        if (isalpha(buffer[i]))
            ++nLetters;
        else if (isdigit(buffer[i]))
            ++nDigits;
        else if (ispunct(buffer[i]))
            ++nPunct;

        ++i;
    }

    printf("\nYour string contained %d letters, %d digits and %d punctuation characters.\n", nLetters, nDigits, nPunct);

    return 0;
}
