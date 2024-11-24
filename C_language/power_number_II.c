#include <stdio.h>
#include <math.h>

int main() {
    int number, result;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    result = pow((number + number), 2);
    
    printf("The result is: %d\n", result);
    
    return 0;
}