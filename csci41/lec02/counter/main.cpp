#include <iostream>
using namespace std;

#include "counter.h"

int main() {
  Counter c;  // the constructor is called implicitly here

  c.inc();
  c.inc();
  c.inc();
  cout << "current count: " << c.getCount() << endl;

  c.reset();
  c.inc();
  c.inc();
  cout << "current count: " << c.getCount() << endl;

  // constructor-style initialization
  // the following are equivalent:
  int x = 42;
  int y(42);  // this sets y to be 42 in a constructor-style way

  Counter* c2 = &c;  // c2 points to c
  // Counter* c3 = new Counter;
  // in order to call getCount on c2, you must do either:
  // (*c2).getCount()
  // OR
  // c2->getCount()

  Counter c3;
  c3.inc();
  c3.inc();
  c3.inc();

  // should have count = 5
  Counter c4 = c + c3;  // this gets turned into c.operator+(c3) by the compiler
  cout << "c4's count: " << c4.getCount() << endl;

  // this gets turned into operator*(c4, c3) by the compiler
  Counter c5 = c4 * c3;
  cout << "c5's count: " << c5.getCount() << endl;

  cout << c << endl;

  return 0;
}
