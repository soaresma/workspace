/**
 start
    input myNumber: numeric
    myAnswer = myNumber * 2
    output myAnswer
  end
 */

#include <stdio.h>

int main() {
    int myNumber;
    int myAnswer;

    // Input
    printf("Enter a number: ");
    scanf("%d", &myNumber);

    // Calculation
    myAnswer = myNumber * 2;

    // Output
    printf("The answer is: %d\n", myAnswer);

    return 0;
}