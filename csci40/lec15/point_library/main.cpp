// g++ -std=c++17 main.cpp point.cpp -o main
#include <iostream>
#include <string>

#include "point.h"
using namespace std;

void assertTrue(bool b, string description) {
  if (!b) {
    cout << "FAILED: " << description << endl;
  } else {
    cout << "PASSED: " << description << endl;
  }
}

void testPoint();

int main() {
  testPoint();

  return 0;
}

void testPoint() {
  Point p, q;
  p.x = 1;
  p.y = 2;
  q.x = 3;
  q.y = 4;

  p.negate();
  q.scale(2);

  Point sum = p.add(q);  // or equivalently q.add(p);

  // right now: p should be (-1, -2)
  //            q should be (6, 8)
  //            sum should be (5, 6)
  assertTrue(p.x == -1 && p.y == -2, "test p");
  assertTrue(q.x == 6 && q.y == 8, "test q");
  assertTrue(sum.x == 5 && sum.y == 6, "test sum");
}
