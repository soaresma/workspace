/**
 * Given worked hours from a employee and hour worked value, calculate its salary
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int employeeNumber, workedHours;
    float hourValue, salary;

    printf("Enter the employee number: ");
    scanf("%d", &employeeNumber);

    printf("Enter the worked hours: ");
    scanf("%d", &workedHours);

    printf("Enter the hour value: ");
    scanf("%f", &hourValue);

    salary = workedHours * hourValue;

    printf("Employee number: %d\n", employeeNumber);
    printf("Salary: %.2f\n", salary);

    return 0;
}