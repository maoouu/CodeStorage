
/**
 * Count the number of divisors of a positive integer n.
 * 
 * Random tests go up to n = 500000.
 * 
 * [ Examples ]
 * 
 * numberOfDivisors(4) == 3 // 1, 2, 4
 * 
 * numberOfDivisors(5) == 2 // 1, 5
 * 
 * numberOfDivisors(12) == 6 // 1, 2, 3, 4, 6, 12
 * 
 * numberOfDivisors(30) == 8 // 1, 2, 3, 5, 6, 10, 15, 30
 */

public class FindDivisor {

    static long numberOfDivisors(int n) {
        if (n == 0)
            return 0;

        long result = 1;
        for (long i = 1; i < n; i++)
            if (n % i == 0)
                result++;

        return result;
    }

    public static void main(String[] args) {
        int[] sample = { 4, 5, 12, 30, 0, (int) Math.pow(25, 2) };

        System.out.println("Method 1:");
        for (int numbers : sample)
            System.out.println(numberOfDivisors(numbers));

    }
}