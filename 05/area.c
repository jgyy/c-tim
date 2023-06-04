// Author: jgyy
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter = 2 * (width + height);
    double area = width * height;
    
    printf("Width = %f\n", width);
    printf("Height = %f\n", height);
    printf("Perimeter = %f\n", perimeter);
    printf("Area = %f\n", area);

    return 0;
}
