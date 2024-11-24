/*
 * This Java program calculate the user's age based on current year and its birth year.
 */

package Java_language;

import java.util.Scanner;

public class UserYear {

    @SuppressWarnings("resource")
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int currentYear, birthYear, age;

        System.out.print("Enter the current year: ");
        currentYear = input.nextInt();
        System.out.print("Enter your birth year: ");
        birthYear = input.nextInt();

        age = currentYear - birthYear;

        System.out.println("You are " + age + " years old.");
    }
    
    
}
