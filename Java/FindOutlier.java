import java.util.ArrayList;

public class FindOutlier {

    /**
     * You are given an array (which will have a length of at least 3, but could be
     * very large) containing integers. The array is either entirely comprised of
     * odd integers or entirely comprised of even integers for a single integer N.
     *
     * Write a method that takes the array as an argument and returns this "outlier"
     * N.
     *
     * Examples:
     *
     * [2, 4, 0, 100, 4, 11, 2602, 36] Should return: 11 (the only odd number)
     *
     * [160, 3, 1719, 19, 11, 13, -21] Should return: 160 (the only even number)
     */

    static int getOutlier(int[] sample) {
        ArrayList<Integer> evenList = new ArrayList<Integer>();
        ArrayList<Integer> oddList = new ArrayList<Integer>();

        for (Integer var : sample) {
            if (var % 2 == 0)
                evenList.add(var);
            else
                oddList.add(var);
        }

        return evenList.size() == 1 ? evenList.get(0) : oddList.get(0);
    }

    public static void main(String[] args) {
        int[] test_sample1 = { 2, 4, 0, 100, 4, 11, 2602, 36 };
        int[] test_sample2 = { 160, 3, 1719, 19, 11, 13, -21 };

        System.out.println(getOutlier(test_sample1)); // 11
        System.out.println(getOutlier(test_sample2)); // 160
    }
}
