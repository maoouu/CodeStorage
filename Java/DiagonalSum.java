
public class DiagonalSum {

    static int diagonalSum(int[][] arr) {
        int sum = 0;

        for (int i = 0; i < arr.length; i++)
            sum += arr[i][i];

        return sum * 2;
    }

    public static void main(String[] args) {
        int[][] arr = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
        System.out.println(diagonalSum(arr));
    }
}
