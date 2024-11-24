#include <stdio.h>

void calculate_salary(float hours_worked, float hourly_rate);

int main() {
    
    float hours_worked, hourly_rate;

    printf("Enter with hours worked: ");
    scanf("%f", &hours_worked);

    printf("Enter with hourly rate: ");
    scanf("%f", &hourly_rate);

    calculate_salary(hours_worked, hourly_rate);

    return 0;

}

// Function that calculates the salary of a worker
void calculate_salary(float hours_worked, float hourly_rate) {
    float salary,overtime;

    if (hours_worked > 50) {        
        overtime = (hours_worked - 50) * hourly_rate;
        salary = (50 * hourly_rate) + overtime;
        printf("Salary: %.2f\n", salary);
        printf("Overtime: %.2f\n", overtime);
    } else {
        salary = hours_worked * hourly_rate;
        printf("Salary: %.2f\n", salary);
    }
    
}