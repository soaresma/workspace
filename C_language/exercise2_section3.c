/*
*   Calculate the inventory medium value given minimum quantity and
*   maximum quantity of the product
*
*/
#include <stdio.h>

int main(void)
{
    int min, max;
    float inventory_medium;
    // Input
    printf("Enter minimum quantities: ");
    scanf("%d", &min);

    printf("Enter maximum quantities: ");
    scanf("%d", &max);

    // Processing
    inventory_medium = (min + max) / 2.0;

    // Output
    printf("Average quantity: %.2f\n", inventory_medium);

    return 0;
}