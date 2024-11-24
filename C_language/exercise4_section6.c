/**
 * Given the gender and the height from person, calculate the ideal weight.
 * 
 * Men: (72.7 * height) - 58
 * Women: (62.1 * height) - 44.7
 * 
 * Input:
 * 1. Gender
 * 2. Height
 * 
 * Output:
 * Ideal weight
 * 
 * Example:
 * Input:
 * 1
 * 1.70
 * 
 * Output:
 * 63.4
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    char gender;
    float height, weight;

    printf("Enter the gender:");
    scanf("%c", &gender);
    printf("Enter the height: ");
    scanf("%f", &height);

    if (tolower(gender) == 'm') {
        weight = (72.7 * height) - 58;
    } else if (tolower(gender) == 'f') {
        weight = (62.1 * height) - 44.7;
    } else {
        printf("Invalid gender!\n");
    }

    printf("Ideal Weight: %.1f\n", weight);

    return 0;
}