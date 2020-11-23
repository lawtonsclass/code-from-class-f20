// there are no method/function declarations in Java--you just start
// implementing!
// also, the order of things don't matter--Java will find the function
// that you wanted
public class Counter {
  // make a member var that stores the actual count
  private int x;

  // Java has no default parameters, so you can't do something like:
  //   public Counter(int startingValue = 0) { ... }
  // You have to make two separate constructors
  public Counter() {
    x = 0;
  }

  public Counter(int startingValue) {
    x = startingValue;
  }

  // make a getCount method
  // const doesn't exist in Java, so you can't enforce (in the usual
  // way) the idea that getCount shouldn't change any member variables
  public int getCount() {
    return x;
  }

  // make an inc method
  public void inc() {
    x++;
  }

  // make a reset method (that resets to 0)
  public void reset() {
    x = 0;
  }

  // make a reset method (that resets to a particular value)
  public void reset(int newVal) {
    x = newVal;
  }

  // make an add method that takes a Counter and returns a Counter
  // Java has no operator overloading--you have to use words.
  // There are also no const parameters--you have to do some weird
  // tricks if you want to guarantee other doesn't get modified.
  public Counter add(Counter other) {
    // make a new counter to give back
    // remember that everything needs to get made on the heap!
    // ret is a "reference"
    Counter ret = new Counter(x + other.x);
    return ret;
  }

  // make a main function that tries all this stuff out!
  public static void main(String[] args) {
    Counter c = new Counter();
    c.inc();
    c.inc();
    c.inc();
    System.out.println(c.getCount());

    Counter c2 = new Counter(42);
    System.out.println(c2.getCount());

    Counter c3 = c.add(c2); // no operator+ :(
    System.out.println(c3.getCount());

    c3.reset();
    System.out.println(c3.getCount());
    c3.reset(42);
    System.out.println(c3.getCount());
  }
}
