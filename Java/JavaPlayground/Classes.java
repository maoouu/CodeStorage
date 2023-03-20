
public class Classes {
    public static void main(String[] args) {
        Circle newCircle = new Circle();

        newCircle.setColor("orange");
        newCircle.setRadius(15);
        System.out.println("The circumference of the Circle is " + newCircle.getCircumference());
    }
}