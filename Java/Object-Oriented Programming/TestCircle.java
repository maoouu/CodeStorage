/**
 * A Test Driver for the Circle class
 */
public class TestCircle {
    public static void main(String[] args) {
        // Declare an instance of Circle class called c1.
        // Construct the instance c1 by invoking the "default" constructor
        // which sets its radius and color to their default value.
        Circle c1 = new Circle();

        // Invoke public methods on instance c1, via dot operator.
        System.out.println("This circle has a radius of " + c1.getRadius() + " and an area of " + c1.getArea());
        // This circle has a radius of 1.0 and an area of 3.141592653589793

        // Declare an instance of class circle called c2.
        // Construct the instance c2 by invoking the second constructor
        // with the given radius and default color.
        Circle c2 = new Circle(2.0);

        // Invoke public methods on instance c2, via dot operator.
        System.out.println("This circle has a radius of " + c2.getRadius() + " and an area of " + c2.getArea());
        // This circle has a radius of 2.0 and an area of 12.566370614359172

        // construct an instance of Circle
        // change radius
        // Print radius via getter
        // Change color
        // Print color via getter
        Circle c4 = new Circle();
        c4.setRadius(13.4);
        System.out.println("Circle Radius is: " + c4.getRadius());
        c4.setColor("Orange");
        System.out.println("Circle Color is: " + c4.getColor());

        Circle c5 = new Circle(5.5);
        System.out.println(c5.toString()); // explicit call

        Circle c6 = new Circle(6.6);
        System.out.println(c6);
    }
}