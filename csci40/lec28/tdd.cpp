#include <iostream>
#include <string>
using namespace std;

// using ^ will flip the bit, so it'll fail if you use ^ instead of |
// and call the function twice
void setThirdBit(unsigned int& x) { x = x | (1 << 3); }

bool isThirdBitSet(unsigned int x) { return (x & (1 << 3)) != 0; }

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

void test1() {
  unsigned int x = 0;
  assertTrue(!isThirdBitSet(x), "third bit of 0");
}

void test2() {
  unsigned int x = 0;
  setThirdBit(x);
  assertTrue(isThirdBitSet(x), "third bit of 0 (after setting it)");
}

void test3() {
  unsigned int x = 0;
  setThirdBit(x);
  setThirdBit(x);
  assertTrue(isThirdBitSet(x), "third bit of 0 (after setting it twice)");
}

int main() {
  test1();
  test2();
  test3();

  return 0;
}
