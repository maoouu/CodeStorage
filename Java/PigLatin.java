/**
 * Move the first letter of each word to the end of it, then add "ay" to the end
 * of the word. Leave punctuation marks untouched.
 * 
 * Examples:
 * 
 * pigIt('Pig latin is cool'); // igPay atinlay siay oolcay
 * 
 * pigIt('Hello world !'); // elloHay orldway !
 */

public class PigLatin {

    static String pigIt(String word) {
        String[] splitString = word.trim().split("\\s+"); // split each word by it's whitespace
        StringBuilder result = new StringBuilder(); // StringBuilder object for "append" method

        for (String element : splitString) {
            result.append(" ");
            result.append(element.matches("[^A-Za-z0-9]") ? // If element is a symbol, leave it be
                    element : element.substring(1) + element.charAt(0) + "ay"); // else, do pig latin
        }

        return result.toString().substring(1);
    }

    public static void main(String[] args) {

        String[] testSamples = { "Hello World !", "Pig latin is cool" };

        for (String elements : testSamples)
            System.out.println(pigIt(elements));

    }
}