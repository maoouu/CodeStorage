
public class DigitalRoot {

    static int digital_root(int n) {
        // if (n < 10) return n;
        // n = (n % 10) + digital_root(n / 10);
        // return digital_root(n);
        return (n < 10) ? n : digital_root((n % 10) + digital_root(n / 10));
    }

    public static void main(String[] args) {
        int example = 1234;
        System.out.println(digital_root(example));
        // 1 + 2 + 3 + 4 = 10
        // 1 + 0 = 1
    }
}