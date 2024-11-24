#include <stdio.h>

int main() {
    
    int num1, num2, sum,mult;

    // Input
    printf("Enter with first number: ");
    scanf("%d", &num1);

    printf("Enter with second number: ");
    scanf("%d", &num2);

    // Processing
    sum = num1 + num2;
    mult = sum * num2;

    // Output
    printf("The sum is: %d\n", sum);
    printf("The multiplication is: %d\n", mult); 

    return 0;
    
}