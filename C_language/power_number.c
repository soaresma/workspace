/**
 * declare number, result as number
 * 
 * begin
 *  
 *  write "Enter a number: "
 *  read number
 * 
 *  result = number ^ 3
 * 
 *  write "The result is: ", result
 * end
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = pow(number, 3);

    printf("The result is: %d\n", result);

    return 0;
}
