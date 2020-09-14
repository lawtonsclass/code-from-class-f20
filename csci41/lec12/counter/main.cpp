#include <iostream>
using namespace std;

#include "counter.h"

void assertTrue(bool b, string desc) {
  if (!b) {
    cout << "FAILED: " << desc << endl;
  } else {
    cout << "PASSED: " << desc << endl;
  }
}

int main() {
  Counter c;
  ++c;
  ++c;
  ++c;
  cout << c.getCount() << endl;
  cout << endl;

  Counter c2(c);
  // c2 should hold a count of 3
  ++c2;
  // c2 should hold a count of 4, but c should still be 3
  assertTrue(c.getCount() == 3 && c2.getCount() == 4,
             "getCount after copy constructor");
  cout << c.getCount() << endl;
  cout << c2.getCount() << endl;
  cout << endl;

  Counter c3;
  c3 = c2;
  c3 = c3;
  cout << c.getCount() << endl;
  cout << c2.getCount() << endl;
  cout << c3.getCount() << endl;

  return 0;
}
