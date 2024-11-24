#include <stdio.h>

int main() {

    float height, weight_ideal;

    printf("Enter with your height: ");
    scanf("%f", &height);

    weight_ideal = (72.7 * height) - 58;

    printf("Your ideal weight is: %.2f\n", weight_ideal);

    return 0;
}