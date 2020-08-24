#include <iostream>
using namespace std;

class Box {
 public:
  Box(int val = 0);
  ~Box();  // a *destructor*--it takes no parameters, and is the opposite of the
           // constructor

  int getVal();
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

int Box::getVal() { return *val; }

void Box::setVal(int newVal) { *val = newVal; }

void destructorExample() {
  cout << "inside of destructorExample\n";
  Box b;  // this box is a local var--it'll get deleted at the end of the
          // function

  Box* b2 = new Box(55);  // this box lives on the heap; the destructor gets
                          // called only  when b2 gets deleted
  delete b2;
  // implicitly, b gets deleted here
}

int main() {
  Box b1(42);  // parameterized constructor call
  Box b2(b1);  // copy constructor call--the default implementation does what we
               // expect
  // ^ so, b2 has the same values as b1
  Box b3 = b2;  // this may look like copy assignment, but it's actually a copy
                // constructor call, since we're making b3 here
  cout << b1.getVal() << endl;
  cout << b2.getVal() << endl;
  cout << b3.getVal() << endl;
  cout << endl;

  // copy assignment
  b2.setVal(43);
  b3 = b2;  // copy assignment operator--copy b2 into b3
  cout << b1.getVal() << endl;
  cout << b2.getVal() << endl;
  cout << b3.getVal() << endl;

  destructorExample();
  cout << "destructorExample just returned\n";

  return 0;  // right after main is done with all its Boxes, they get destructed
             // automatically
}
