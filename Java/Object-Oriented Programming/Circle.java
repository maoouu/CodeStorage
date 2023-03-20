/**
 * [Object-Oriented Tutorial]
 * 
 * A class called circle is designed as shown in the following class diagram. It
 * contains:
 * 
 * Two private instance variables: radius (of the type double) and color (of the
 * type String), with default value of 1.0 and "red", respectively.
 * 
 * Two overloaded constructors - a default constructor with no argument, and a
 * constructor which takes a double argument for radius.
 * 
 * Two public methods: getRadius() and getArea(), which return the radius and
 * area of this instance, respectively.
 */

public class Circle {

    private double radius; // default 1.0
    private String color; // default "red"

    public Circle() { // default constructor
        radius = 1.0;
        color = "red";
    }

    public Circle(double radius) { // takes double argument radius
        this.radius = radius;
        color = "red";
    }

    public Circle(double radius, String color) { // takes double radius and string color
        this.radius = radius;
        this.color = color;
    }

    public void setRadius(double radius) { // setter method for instance variable radius
        this.radius = radius;
    }

    public void setColor(String color) { // setter method for instance variable color
        this.color = color;
    }

    public double getRadius() { // returns radius
        return radius;
    }

    public String getColor() { // returns color
        return color;
    }

    public double getArea() { // returns the area
        return Math.PI * Math.pow(radius, 2);
    }

    /**
     * Every well-designed Java class should contain a public method called
     * toString() that returns a description of the instance (in the return type of
     * String). The toString() method can be called explicitly (via
     * instanceName.toString()) just like any other method; or implicitly through
     * println(). If an instance is passed to the println(anInstance) method, the
     * toString() method of that instance will be invoked implicitly. For example,
     * include the following toString() methods to the Circle class:
     */

    // Return a self-descriptive string of this instance in the form of
    // Circle[radius=?,color=?]
    public String toString() {
        return "Circle[radius = " + radius + ", color = " + color + "]";
    }
}