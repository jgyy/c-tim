#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 150;
    int *pnum = NULL;

    pnum = &num;

    printf("num's address: %p\n", &num);
    printf("num's value: %d\n\n", num);

    printf("pnum's address: %p\n", (void *)&pnum);
    printf("pnum's size: %lu bytes\n", sizeof(pnum));
    printf("pnum's value: %p\n", pnum);
    printf("value pointed to: %d\n", *pnum);

    return 0;
}
