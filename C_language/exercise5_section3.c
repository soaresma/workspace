/**
 * Given a number, convert from meters to centimeters and print the result.
 * 
 * 
 */
#include <stdio.h>

int main()
{
    float meters, centimeters;

    printf("Enter a number in meters: ");
    scanf("%f", &meters);

    centimeters = meters * 100;

    printf("The number in centimeters is: %.2f\n", centimeters);

    return 0;
}