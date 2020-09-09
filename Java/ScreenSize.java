
public class ScreenSize {

    static String findScreenHeight(int width, String ratio) {
        String[] r = ratio.split(":");
        int height = (int) (width / Double.parseDouble(r[0]) * Double.parseDouble(r[1]));
        return Integer.toString(width) + "x" + Integer.toString(height);
    }

    public static void main(String[] args) {
        int width = 1920;
        String ratio = "16:9";

        System.out.println(findScreenHeight(width, ratio));
    }
}