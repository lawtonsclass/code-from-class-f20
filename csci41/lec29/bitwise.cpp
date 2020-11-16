#include <iostream>
using namespace std;

int main() {
  int x = 15;  // 1111
  // I can test if the third bit is set by anding with 8 (1000) --
  // gives back 1000 ≠ 0
  cout << ((x & 8) != 0) << endl;   // a true value means the bit was set
  cout << ((x & 16) != 0) << endl;  // 1111 & 10000 ==> 0

  // 0000 | 1000 ==> 1000
  // 1000 | 0100 ==> 1100
  // ... ==> 1111
  cout << (0 | 8 | 4 | 2 | 1) << endl;

  cout << (~1 + 1) << endl;

  int y = 15;
  y = y ^ 8;
  cout << y << endl;  // 0111
  y = y ^ 8;
  cout << y << endl;  // 1111

  // (1 << 3) sets the third bit, and the third bit only
  cout << ((x & (1 << 3)) != 0) << endl;  // a true value means the bit was set

  return 0;
}
