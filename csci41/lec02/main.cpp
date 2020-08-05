#include <iostream>

#include "counter.h"
using namespace std;

int main() {
  Counter c;  // implicitly calls the constructor
  c.inc();
  c.inc();
  cout << "final count: " << c.getCount() << endl;

  // these two are equivalent (even for primitive types like
  // int/bool/double/etc.:
  // int x = 42;
  // int y(42);

  // Counter* c2 = &c;
  // c2->getCount();
  // Counter* c3 = new Counter;

  Counter c2;
  c.inc();

  Counter c3 = c + c2;  // really looks like this c.operator+(c2)
  cout << "combined count: " << c3.getCount() << endl;

  Counter c4 = c * c3;  // gets turned into operator*(c, c3)
  cout << "product count: " << c4.getCount() << endl;

  Counter c5 = -c4;
  cout << "negated count:\n";
  cout << c5 << endl;

  return 0;
}
