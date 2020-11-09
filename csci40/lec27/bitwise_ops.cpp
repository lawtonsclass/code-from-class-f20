#include <iostream>
using namespace std;

int main() {
  int x = 15;
  // let's extract the 3rd bit from 15 by &ing with 8
  cout << (x & 8) << endl;
  // 8 is 1000 in binary, and anding with it will extract the third
  // bit
  // If the bit wasn't set, the result would be 0

  // 10111 = 7 + 32 = 39 doesn't have the third bit set
  cout << (39 & 8) << endl;  // prints 0

  // so, to figure out if a bit was set, check if the & operation gave
  // back a nonzero number

  // let's set bits 0, 1, 2, and 3 (starting from 0)
  cout << ((((0 | 1) | 2) | 4) | 8) << endl;

  // let's negate 1 by flipping all the bits and adding 1
  cout << (~1 + 1) << endl;  // prints -1

  // get the third bit in a more easy-to-read way
  // 1000
  cout << (x & (1 << 3)) << endl;

  return 0;
}
