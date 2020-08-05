#include <iostream>

#include "statistician.h"
using namespace std;

// a unit test: tests a small unit of our implementation
void testMax() {
  Statistician s;
  s.init();
  if (s.max() != 42) cout << "Issue with testMax\n";
  s.addNumber(43);
  if (s.max() != 43) cout << "Issue with testMax\n";
  s.addNumber(44);
  if (s.max() != 44) cout << "Issue with testMax\n";
  s.addNumber(0);
  if (s.max() != 44) cout << "Issue with testMax\n";
}

int main() {
  testMax();  // we want no output

  return 0;
}
