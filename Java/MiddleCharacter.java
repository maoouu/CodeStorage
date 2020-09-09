
public class MiddleCharacter {

    static String get_middle(String sample) {
        return sample.length() % 2 == 0 ? sample.substring((sample.length() / 2 - 1), sample.length() / 2) : sample.substring(sample.length() / 2, 1);
    }
    
    public static void main(String[] args) {
        String[] samples = {"Santa", "Hitler", "Germany", "Michael", "Manemjeff"};

        for (String elements : samples)
            System.out.println(elements + " = " + get_middle(elements));
    }
}