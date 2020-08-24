#include <iostream>
using namespace std;

class Box {
 public:
  Box(int val = 0);
  ~Box();  // a *destructor*--it takes no parameters, and is the opposite of the
           // constructor
  Box(const Box& other);

  int getVal() const;
  void setVal(int newVal);

 private:
  int* val;  // val points to an int on the heap
};

Box::Box(int startingVal) {
  val = new int;       // val gets initialized to a new thing on the heap
  *val = startingVal;  // set val's heap int to the starting value
}

// default destructor has an empty body
Box::~Box() { cout << "Called destructor on Box with value: " << *val << endl; }

// default copy constructor calls the copy constructors on each member
// variable, in declaration order
Box::Box(const Box& other) : val(other.val) {
  cout << "Called copy constructor on Box with other.val = " << *other.val
       << endl;
}

int Box::getVal() const { return *val; }

void Box::setVal(int newVal) { *val = newVal; }

// taking a Box by value copies the argument into the function
Box incBox(Box b) {
  Box new_box(b.getVal() + 1);
  return new_box;
}

int main() {
  Box b1(42);  // parameterized constructor call
  Box b2(b1);  // copy constructor call--the default implementation does what we
               // expect
  // ^ so, b2 has the same values as b1
  Box b3 = b2;  // this may look like copy assignment, but it's actually a copy
                // constructor call, since we're making b3 here

  b2.setVal(43);
  // copy assignment
  b3 = b2;  // copy assignment operator--copy b2 into b3
  cout << b1.getVal() << endl;
  cout << b2.getVal() << endl;
  cout << b3.getVal() << endl;

  cout << endl << "\ncalling incBox\n";
  // you might think that a copy constructor call happens also when
  // you return a Box from a function--C++ is able to catch this and
  // save some extra work
  Box b4 = incBox(b3);
  cout << "finished calling incBox\n\n";

  return 0;  // right after main is done with all its Boxes, they get destructed
             // automatically
}
