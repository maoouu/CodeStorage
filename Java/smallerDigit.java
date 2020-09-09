
public class smallerDigit {

    static int nextSmaller(int num) {
        String[] strNum = Integer.toString(num).split("[1-9]");
        int[] sample = new int[strNum.length];

        for (int i = 0; i < strNum.length / 2; i++)
            sample[i] += Integer.parseInt(strNum[i]);
        return sample[0];
    }

    public static void main(String[] args) {
        int sample = 531; // 12

        System.out.println(nextSmaller(sample));
    }
}