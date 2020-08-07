#include <iostream>
using namespace std;

int main() {
  // all these variables are uninitialized
  // they are random values before you initialize them
  int x;
  char c;
  double d;

  cout << "x: " << x << endl;
  cout << "c: " << c << endl;
  cout << "d: " << d << endl;

  return 0;
}
