/**
 * Write a function [persistence], that takes in a positive parameter [num] and
 * returns its multiplicative persistence, which is a number of times you must
 * multiply the digits in [num] until you reach a single digit.
 * 
 * persistence(39) == 3 because 3*9 = 27, 2*7 = 14, 1*4=4 and 4 has only one
 * digit
 * 
 * persistence(999) == 4 because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and
 * finally 1*2 = 2
 * 
 * persistence(4) == 0 because 4 is already a one-digit number
 */

public class Persistent {
    /*
     * static int persistence(int num) { int iteration = 0; int result = 1; String
     * numString = String.valueOf(num);
     * 
     * if (numString.length() == 1) { return iteration; } else {
     * 
     * while (numString.length() != 1) {
     * 
     * for (int i = 0; i < numString.length(); i++) { result *= }
     * 
     * }
     * 
     * }
     * 
     * }
     */

    public static void main(String[] args) {

        // int[] testSamples = { 39, 999, 4 };

        // for (int i : testSamples)
        // System.out.println(persistence(i));

        /*
         * int test = 122; char[] testChar = String.valueOf(test).toCharArray();
         * System.out.println(testChar[2]);
         */

        int var = 39;
        char[] varArray = String.valueOf(var).toCharArray();
        int product = Integer.valueOf(varArray[0]);
        System.out.println(varArray[0]);
        System.out.println(product);

        // System.out.println(x); // 27?

    }
}