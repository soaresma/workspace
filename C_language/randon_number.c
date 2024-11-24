#include <stdio.h>
#include <stdlib.h>


int main () {

    int num;

    num = rand() % 100;
    printf("Random number: %d\n", num);
    printf("Random number: %d\n", (rand() + 1000) % 100);

    return 0;
}
