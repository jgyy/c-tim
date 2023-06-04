// Creator: jgyy
#include <stdio.h>
#include <stdbool.h>

int main()
{
    enum gender
    {
        male,
        female
    };
    enum gender myGender = male;
    enum gender anotherGender = female;
    bool isMale = (myGender == anotherGender);
    printf("myGender = %d\n", myGender);
    printf("anotherGender = %d\n", anotherGender);
    printf("isMale = %d\n", isMale);

    char myChar = 'a';
    printf("myChar = %c\n", myChar);

    int i = 5;
    bool b = true;
    printf("i = %d\n", i);
    printf("b = %d\n", b);

    return 0;
}
