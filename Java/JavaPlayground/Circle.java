public class Circle {

    final double PI = 3.14159;
    private String color;
    private int radius;

    Circle() {
        System.out.println("A new circle has been created!");
        this.radius = 1;
        this.color = "red";
    }

    Circle(int radius, String color) {
        System.out.println("A new circle has been created!");
        setRadius(radius);
        setColor(color);
    }

    Circle(int radius) {
        System.out.println("A new circle has been created!");
        setRadius(radius);
        this.color = "red";
    }

    Circle(String color) {
        System.out.println("A new circle has been created!");
        setColor(color);
        this.radius = 1;
    }

    public int getRadius() {
        return radius;
    }

    public void setRadius(int radius) {
        System.out.println("Circle's radius has been set to " + radius);
        this.radius = radius;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        System.out.println("Circle's color has been set to " + color);
        this.color = color;
    }

    public int getDiameter() {
        return this.radius * 2;
    }

    public double getCircumference() {
        return PI * Math.pow(this.radius, 2);
    }
}