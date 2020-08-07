#include <iostream>
using namespace std;

int main() {
  int x = 42;

  // read from right to left: the rhs evaluates first to an int value,
  // and then that is put into x
  x = x + 1;
  cout << "x: " << x << endl;

  x++;  // equivalent to "x = x + 1;"
  cout << "x: " << x << endl;

  x += 5;  // equivalent to "x = x + 5;"
  cout << "x: " << x << endl;

  return 0;
}
