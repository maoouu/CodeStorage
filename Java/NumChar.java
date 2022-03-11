/**
 * Numchar.java
 * Author: Maou
 * 
 * - Write a program that prompts the user to input an integer
 * between 0 to 35. If the number is less than or equal to 9, the program should output the number;
 * otherwise, it should output 'A' for 10, 'B' for 11, 'C' for 12, ..., and 'Z' for 35.
 * 
 * (hint: use the cast operator, (char)(), for numbers > 10).
 */
import java.util.Scanner;

public class NumChar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int userInput;

        // Get input from user
        System.out.println("Please enter an integer from [0 - 35].");
        do {
            System.out.print("> ");
            userInput = scanner.nextInt();

            // Check for input
            if (userInput < 0 || userInput > 35) {
                System.out.println("Invalid input: integers only from [0 - 35] are acceptable.");
            }
        } while (userInput < 0 || userInput > 35);
        scanner.close();

        if (userInput <= 9) {
            System.out.printf("Output: %d", userInput);
        } else {
            char output = (char) (userInput + 55);
            System.out.printf("Output: %c", output);
            // Or you can do this
            //System.out.printf("Output: %c", (char) (userInput + 55));
        }
    }
}