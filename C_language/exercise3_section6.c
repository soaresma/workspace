#include <stdio.h>


int main()  {

    int number, even, odd;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        even = number;
        printf("The number is even %d\n", even);
    } else  {
        odd = number;
        printf("The number is odd %d\n", odd);
    }

    return 0;


}