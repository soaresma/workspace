#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int guess_magic_number(int guess);


int guess_magic_number(int guess) {

    int magic;

    magic = rand() % 100;

    if (guess == magic) {
        printf("Magic number is %d\n", magic);
        return 1;
    } else {
        return -1;
    }
}

void main() {

    int number = 0;
    bool isTrue = true;

    while (isTrue) {
        printf("Guess the magic number: ");
        scanf("%d", &number);
        
            if (guess_magic_number(number) == 1) {
               printf("You guessed it right!\n");
               isTrue = false;
            } else {
                printf("Try again: ");
                scanf("%d", &number);
            }
    }
    
}