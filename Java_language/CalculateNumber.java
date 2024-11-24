/**
 * This program calculate the sum and difference of two numbers given by the user.
 */

package Java_language;

import java.util.Scanner;

public class CalculateNumber {
    @SuppressWarnings("resource")
    public static void main(String[] args) {
      
        Scanner input = new Scanner(System.in);
        int num1, num2, sum, difference;

        System.out.print("Enter the first number: ");
        num1 = input.nextInt();
        System.out.print("Enter the second number: ");
        num2 = input.nextInt();

        sum = num1 + num2;
        difference = num1 - num2;

        System.out.println("The sum of " + num1 + " and " + num2 + " is " + sum);
        System.out.println("The difference of " + num1 + " and " + num2 + " is " + difference);
    }
} 