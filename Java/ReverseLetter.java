/**
 * [ Simple Fun #176: Reverse Letter ]
 * 
 * Task: Given a string str, reverse it omitting all non-alphabetic characters.
 * 
 * [ Example ]
 * 
 * For str = "krishan", the output should be "nahsirk".
 * 
 * For str = "ultr53o?n", the output should be "nortlu".
 * 
 * [ Input/Output ]
 * 
 * [input] string str
 * 
 * A string consists of lowercase latin letters, digits and symbols.
 * 
 * [output] a string
 */

public class ReverseLetter {

    static String reverseLetter(final String str) {
        return new StringBuilder(str.replaceAll("[^A-Za-z]", "")).reverse().toString();
    }

    public static void main(String[] args) {
        // String sample = "krishan"; // nahsirk
        String sample = "ultr53o?n"; // nortlu

        System.out.println(reverseLetter(sample));
    }
}