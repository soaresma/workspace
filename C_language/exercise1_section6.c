#include <stdio.h>

void main()
{
   int number;

   printf("Enter with a number: ");
   scanf("%d", &number);

   if (number > 100){
    printf("%d is greater than 100\n", number);
   } else {
     number = 0;
     printf("The number is less than 100\n");
   }
}