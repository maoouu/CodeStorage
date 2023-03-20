public class StaticKeyword {
    public static void main(String[] args) {
        Hello instanceName = new Hello();
        /*
         * Static members belong to the class instead of a specific instance.
         */

        //instanceName.DoSomething("Hi");
        /*
         * Instead of this
         */

        Hello.DoSomething("Hello");
        /*
         * Use this
         */

        // Non-static method calling
        instanceName.DoSomethingElse("Hello");
        /*
         * Works just fine
         */

        //Hello.DoSomethingElse("Hello World");
        /*
         * Doesn't work
         */
    }
}