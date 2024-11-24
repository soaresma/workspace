/**
 * Given a fish weight, check if that fish is bigger than 50kg. If yes, calculate USD$ 50.00 of penalty
 */
#include <stdio.h>

int main()
{
    float weight, penalty, excess;
    printf("Enter the weight of the fish: ");
    scanf("%f", &weight);

    if (weight > 50)
    {
        penalty = (weight - 50) * 50;
        excess = weight - 50;
        printf("The excess is %.2f. The penalty is USD$ %.2f\n", excess, penalty);
    }
    else
    {
        printf("The fish is smaller than 50kg. No penalty.\n");
    }

    return 0;
}