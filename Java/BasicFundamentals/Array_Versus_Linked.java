import java.util.LinkedList;
import java.util.ArrayList;

/**
 * /** [Differences between LinkedList and ArrayList]
 * 
 * 1. LinkedList element insertion is faster compared to ArrayList
 * 
 * 2. ArrayList search operation is faster compared to LinkedList search
 * operation. LinkedList doesn't provide random or index-based access and you
 * need to iterate over linked list to retrieve any element.
 * 
 * 3. LinkedList element deletion is faster compared to ArrayList.
 * 
 * 4. LinkedList has more memory overhead than ArrayList because in ArrayList,
 * each index only holds actual object but in case of LinkedList, each node
 * holds both data and address of next and previous node.
 */

public class Array_Versus_Linked {
    public static void main(String[] args) {
        long n = (long) 1E7;

        System.out.println("[Insertion]");

        ArrayList arrayList = new ArrayList<>();
        long time = System.currentTimeMillis();
        for (int i = 0; i < n; i++) {
            arrayList.add(i);
        }
        System.out.println("ArrayList: " + (System.currentTimeMillis() - time) + "ms");

        LinkedList linkedList = new LinkedList<>();
        time = System.currentTimeMillis();
        for (int i = 0; i < n; i++) {
            linkedList.add(i);
        }
        System.out.println("LinkedList: " + (System.currentTimeMillis() - time) + "ms");
        System.out.println("\n\n[Deletion (Front-element)]");

        time = System.currentTimeMillis();
        arrayList.remove(0);
        System.out.println("ArrayList: " + (System.currentTimeMillis() - time) + "ms");

        time = System.currentTimeMillis();
        linkedList.remove(0);
        System.out.println("LinkedList: " + (System.currentTimeMillis() - time) + "ms");
        System.out.println("\n\n[Searching Operation]");

        time = System.currentTimeMillis();
        arrayList.get((int) n / 2);
        System.out.println("ArrayList: " + (System.currentTimeMillis() - time) + "ms");

        time = System.currentTimeMillis();
        linkedList.get((int) n / 2);
        System.out.println("LinkedList: " + (System.currentTimeMillis() - time) + "ms");

    }
}