#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[30];
    char date[15];
    float salary;
};

int main()
{
    struct employee emp = {"John", "12/12/2012", 5000.00};

    printf("Name: %s\n", emp.name);
    printf("Hire Date: %s\n", emp.date);
    printf("Salary: %.2f\n", emp.salary);

    printf("\nEnter new employee information:\n");
    printf("Name: ");
    scanf("%s", emp.name);
    printf("Hire Date: ");
    scanf("%s", emp.date);
    printf("Salary: ");
    scanf("%f", &emp.salary);

    printf("Name: %s\n", emp.name);
    printf("Hire Date: %s\n", emp.date);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
