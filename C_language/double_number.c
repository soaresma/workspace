/**
 * declare number as integer
 * declare result as integer
 * 
 * write "Enter a number: "
 * read number
 * 
 * if number is greater than 0, then
 *     result = number * 2
 * else
 *     write "The number must be positive"
 * 
 * write "The result is: ", result
 *  
 * 
 */
#include <stdio.h>

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        result = number * 2;
         printf("The result is: %d\n", result);
    }
    else
    {
        printf("The number must be positive\n");
    }

   

    return 0;
}