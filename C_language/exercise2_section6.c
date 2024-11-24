#include <stdio.h>

void main() {

    int number, a, b;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        a = number;
        printf("The number is positive: %d\n", a);

    } else {
        b = number;
        printf("The number is negative: %d\n", b);
    }
}