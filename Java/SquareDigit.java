import java.util.stream.Collectors;

/**
 * Welcome. In this kata, you are asked to square every digit of a number. For
 * example, if we run 9119 through the function, 811181 will come out, because
 * 9^2 is 81 and 1^2 is 1.
 * 
 * Note: The function accepts an integer and returns an integer
 */

public class SquareDigit {

    static int squareDigits(int num) {
        char[] digits = String.valueOf(num).toCharArray();
        String result = "";

        for (char digit : digits)
            result += Integer.toString((int) Math.pow(Character.getNumericValue(digit), 2));

        return Integer.parseInt(result);
    }

    // Other answers
    static int squareDigits2(int n) {
        return Integer.parseInt(String.valueOf(n).chars().map(x -> x - '0').map(i -> i * i).mapToObj(String::valueOf)
                .collect(Collectors.joining("")));
    }

    public static void main(String[] args) {

        int sample = 9119;

        long start = System.currentTimeMillis();
        System.out.println("Result: " + squareDigits(sample));
        long end = System.currentTimeMillis();
        System.out.println("Time Elapsed: " + ((end - start) / 1000000) + " ms");

        start = System.currentTimeMillis();
        System.out.println("Result: " + squareDigits2(sample));
        end = System.currentTimeMillis();
        System.out.println("Time Elapsed: " + ((end - start) / 1000000) + " ms");
    }
}