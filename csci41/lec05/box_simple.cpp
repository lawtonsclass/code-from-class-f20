#include <iostream>
using namespace std;

class Box {
 public:
  Box(int val = 0);
  int getVal();
  void setVal(int newVal);

 private:
  int val;
};

Box::Box(int val) : val(val) {}

int Box::getVal() { return val; }

void Box::setVal(int newVal) { val = newVal; }

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

  return 0;
}
