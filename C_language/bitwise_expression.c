#include <stdio.h>


void main() {

    int x, y, result;

    x = 10;
    y = 30;

    result = (x/y) + (y/x);

    printf("result = %d\n", ~result);
}