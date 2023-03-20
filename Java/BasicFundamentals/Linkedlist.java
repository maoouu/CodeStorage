import java.util.LinkedList;

public class Linkedlist {
    public static void main(String[] args) {
        // Linked lists are almost the same as Arraylists
        // They differ according to their uses

        LinkedList<String> name = new LinkedList<String>();
        name.add("Dale");
        name.add("Vincent");
        name.add("Klieneroy");
        name.add("Bani");

        // Linked Lists can also be accessed using advanced for loop (for-each)
        for (String string : name) {
            System.out.println(string);
        }

        // You can add values on the top using .addFirst()
        name.addFirst("Mark");
        for (String string : name) {
            System.out.println(string);
        }

        // And also add values below the stack using .addLast()
        name.addLast("James");
        for (String string : name) {
            System.out.println(string);
        }
    }
}