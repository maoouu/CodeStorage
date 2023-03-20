import java.util.Scanner;

public class Nine {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int reverse = 0;
        int difference = 0;
        int sum = 0;
        int newSum = 0;
        String computation = "";

        System.out.print("Enter a number: ");
        int number = input.nextInt();
        int realNumber = number;
        input.close();

        // Get the reverse digit
        while (number != 0) {
            reverse *= 10;
            reverse += number % 10;
            number /= 10;
        }

        if (realNumber > reverse) {
            computation = realNumber + " - " + reverse;
            difference = realNumber - reverse;
        } else {
            computation = reverse + " - " + realNumber;
            difference = reverse - realNumber;
        }

        // Convert int to string
        String preParsedDifference = new Integer(difference).toString();

        // Add the digits together
        for (int i = 0; i < preParsedDifference.length(); i++) {
            sum += Character.getNumericValue(preParsedDifference.charAt(i));
        }

        // Convert int to string
        String preParsedSum = new Integer(sum).toString();

        // Adding the remaining digits together
        for (int i = 0; i < preParsedSum.length(); i++) {
            newSum += Character.getNumericValue(preParsedSum.charAt(i));
        }

        // Print the result
        System.out.println("Number in reverse: " + reverse + "\n" + computation + " = " + difference + "\n"
                + "Sum of the digits in '" + difference + "'" + ": " + sum + "\n" + preParsedSum.charAt(0) + " + "
                + preParsedSum.charAt(1) + " = " + newSum);

    }

}