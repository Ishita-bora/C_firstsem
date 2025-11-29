#include <stdio.h>

struct Employee
{
    char name[30];
    float basic_pay;
    float da;
    float gross_salary;
};

void compute_pay(struct Employee *emp)
{
    emp->da = 0.52 * emp->basic_pay;
    emp->gross_salary = emp->basic_pay + emp->da;
}

int main()
{
    struct Employee employees[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter details for Employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Basic Pay: ");
        scanf("%f", &employees[i].basic_pay);

        compute_pay(&employees[i]);
    }

    printf("\nEmployee Monthly Pay Report\n");
    printf("Name\t\tGross Salary\n");

    for (i = 0; i < 3; i++)
    {
        printf("%s\t\t%.2f\n", employees[i].name, employees[i].gross_salary);
    }

    return 0;
}