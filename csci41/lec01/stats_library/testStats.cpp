#include <iostream>
#include <vector>
using namespace std;

#include "stats.h"

// this is called a unit test: it tests one small bit of our program
void testMax() {
  Statistician s;
  s.init();
  if (s.getMax() != 42) cout << "something's wrong!\n";
  s.addNumber(43);
  if (s.getMax() != 43) cout << "something's wrong!\n";
  s.addNumber(44);
  if (s.getMax() != 44) cout << "something's wrong!\n";
  s.addNumber(0);
  if (s.getMax() != 44) cout << "something's wrong!\n";
}

int main() {
  testMax();

  return 0;
}
