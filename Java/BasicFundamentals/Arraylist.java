import java.util.ArrayList;

public class Arraylist {
    public static void main(String[] args) {
        // int simple_array[] = new int[5]; // or {1, 2, 3, 4, 5}

        // Coding with fixed arrays are hard in real programming practices
        // Arraylists are made to make arrays dynamic
        // Arrayslists can be imported using the java.util library

        // The parameter serves as the INITIAL size; not fixed
        ArrayList<Integer> myList = new ArrayList<Integer>(5);

        // You can add values to an arraylist using add() method
        myList.add(1);
        myList.add(22);
        myList.add(69);

        // You can access these using the advanced For loop (for-each)
        for (Integer integer : myList) {
            System.out.println(integer);
        }

        // You can also access the size of the Array List
        System.out.println("Arraylist size is: " + myList.size());
        // Output: Arraylist size is: 3
        // Note that the INITIAL parameter '5' does not equal the .size()

        // You can also remove an element by .remove(index)
        myList.remove(1);
        // You can change a specific element using .set(index, element)
        myList.set(0, 100);

        for (Integer integer : myList) {
            System.out.println(integer);
        }
        System.out.println("Arraylist size is " + myList.size());
        // 1
        // 69
        // Arraylist size is: 2

        // You can clear all elements in an Arraylist using .clear()
        myList.clear();

        for (Integer integer : myList) {
            System.out.println(integer);
        }
        System.out.println("Arraylist size is " + myList.size());
        //
        // Arraylist size is: 0

    }
}