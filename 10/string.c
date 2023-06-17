#include <stdio.h>
#include <string.h>

int main(void)
{
    char myString[] = "My name is Jason";
    char temp[50];

    strncpy(temp, myString, sizeof(temp) - 1);
    printf("%s\n", temp);
    printf("The length is: %lu\n", strlen(myString));

    strcat(temp, " and I am 25 years old");
    printf("%s\n", temp);

    if (strcmp(myString, temp) == 0)
        printf("The strings are equal\n");
    else
        printf("The strings are not equal\n");

    return 0;
}
