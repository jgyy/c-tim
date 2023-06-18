#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct date today, *datePtr;

    datePtr = &today;

    datePtr->day = 12;
    datePtr->month = 12;
    datePtr->year = 2012;

    printf(
        "Today's date is %i/%i/%.2i.\n",
        datePtr->day,
        datePtr->month,
        datePtr->year % 100);

    return 0;
}
