#include <iostream>
using namespace std;

class Box {
 public:
  Box(int val = 0);
  ~Box();  // a *destructor*--it takes no parameters, and is the opposite of the
           // constructor
  Box(const Box& other);
  // copy assignment operator
  Box& operator=(const Box& other);

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
// it's doing nothing about the value on the heap--it's not deleting
// it
// MEMORY LEAK!!!11!!1!1!
Box::~Box() {
  cout << "Called destructor on Box with value: " << *val << endl;
  delete val;
}

// default copy constructor calls the copy constructors on each member
// variable, in declaration order
Box::Box(const Box& other) {
  cout << "Called copy constructor on Box with other.val = " << *other.val
       << endl;
  val = new int;  // make a DEEP COPY--don't just copy the addresses, copy the
                  // values deep down
  *val = *other.val;
}

// the default copy assignment operator copies all the member vars in
// order (also makes sure we don't set ourselves to ourselves)
Box& Box::operator=(const Box& other) {
  cout << "Called copy assignment operator on Box with other.val = "
       << *other.val << endl;

  if (this == &other)
    return *this;  // we're already ourselves, so there's no need to do any work

  // first, delete our current val. We're going to replace it.
  delete val;
  // replace val with a new heap location
  val = new int;
  *val = *other.val;
  return *this;  // this is a pointer to the current object
}

int Box::getVal() const { return *val; }

void Box::setVal(int newVal) { *val = newVal; }

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
  b3.setVal(b3.getVal() + 1);
  cout << b1.getVal() << endl;
  cout << b2.getVal() << endl;
  cout << b3.getVal() << endl;

  return 0;  // right after main is done with all its Boxes, they get destructed
             // automatically
}
