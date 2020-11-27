#include <iostream>
using namespace std;

int multiplyBy2ToTheN(int x, int n) {
  // use shifting
  // x << 1 ==> adds 1 0 at the end in binary (multiplies by 2)
  // x << 2 ==> multiplies by 4
  // x << 3 ==> multiplies by 8
  return x << n;  // multiplies by 2^n
}

unsigned int flipBit(unsigned int x, int whichBit) {
  // to flip a bit, we can xor by (1 << whichBit)
  // 1111 xor 0100 ==> 1011
  return x ^ (1 << whichBit);
}

int main() {
  cout << multiplyBy2ToTheN(3, 3) << endl;  // 3 * 2^3 = 24
  cout << flipBit(15, 2) << endl;           // 1111 ==> 1011 = decimal 11

  return 0;
}
