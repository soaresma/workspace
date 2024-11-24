/**
 * declare
 *     number, result as number
 * begin
 *    write "Enter a number: "
 *    read number
 *    if number greater than 0, then
 *       result = number * 2
 *       write "Result: ", result
 *    else
 *       write "The number must be positive"
 *    end if
 * end
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        result = pow(number, 2);
        printf("Result: %d", result);
    }
    else
    {
        printf("The number must be positive");
    }

    return 0;
}