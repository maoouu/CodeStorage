import java.util.Scanner;

public class Reverse {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String sample;

        System.out.print("Enter a word: ");
        sample = input.nextLine();
        input.close();

        System.out.print("Output: ");
        for (int i = 0; i < sample.length(); i++) {
            System.out.print(sample.charAt((sample.length() - 1) - i));
        }
    }
}