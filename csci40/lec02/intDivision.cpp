#include <iostream>
using namespace std;

int main() {
  int x = 1 / 2;  // 0.5, right?
  // no rounding takes place with integer division; it simply drops
  // the decimal places
  cout << x << endl;

  int y = 5 / 2;  // 2.5
  cout << y << endl;

  return 0;
}
