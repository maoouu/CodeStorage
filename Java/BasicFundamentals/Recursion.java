public class Recursion {
    // Factorial Method
    public static int getFactorial(int num) {
        return num <= 1 ? 1 : (num * getFactorial(num - 1));
    }

    public static void main(String[] args) {
        System.out.println(getFactorial(5));
    }
}