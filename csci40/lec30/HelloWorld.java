// In Java, everything is a class. If you want a function, it needs to exist inside a class.
// HelloWorld is public and visible to the outside world (they could import it if they wanted to)
// This file was forced to be named HelloWorld
public class HelloWorld {
    // the main function lives inside the public class associated with the file
    // You have to give the command line arguments, even if you don't use them
    // In java the command line args are an array of Strings
    // main is a public method inside the HelloWorld class
    // it's also "static", which means that it belongs to the class itself, and not to any object
    // you don't have to declare any functions in java--it finds them
    public static void main(String[] args) {
        // System lives inside of java.lang -- it's automatically "included" (in Java, we say "imported")
        System.out.println("Hello, world!");
    }
}