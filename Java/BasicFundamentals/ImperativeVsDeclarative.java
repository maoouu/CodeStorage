import java.util.stream.IntStream;

public class ImperativeVsDeclarative {

    public static void main(String[] args) {

        // [TASK 1]: Sum of 100 numbers from 0 to 100

        /**
         * Imperative - 'how' style of programming
         */

        int sum = 0;

        for (int i = 0; i <= 100; i++) {
            sum += i;
        }

        System.out.println("Sum using imperative: " + sum);

        /**
         * Declarative - 'what' style of programming
         */

        int sum2 = IntStream.rangeClosed(0, 100).sum();

        System.out.println("Sum using declarative: " + sum2);
    }

}