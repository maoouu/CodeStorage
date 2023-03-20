public class ansiclrscr {
    public static void main(String[] argv) {
        System.out.print("foo\nbar\nbaz\nquux");
        System.out.print("\033[2J\033[;H");
        System.out.print("I am at cursor position 0,0 on a clean screen.");
    }
}