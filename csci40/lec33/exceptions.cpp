#include <iostream>
#include <stdexcept>
using namespace std;

double pow_recursive(double m, int n) {
  if (n < 0) {
    throw runtime_error("can't handle negative exponents");
  }

  if (n == 0)
    return 1;
  else
    return m * pow_recursive(m, n - 1);
}

unsigned int flipBit(unsigned int x, int whichBit) {
  // for ints, there are only bit 0 through bit 31
  if (whichBit > 31 || whichBit < 0) {
    throw runtime_error("how dare you");
  }

  // to flip a bit, we can xor by (1 << whichBit)
  // 1111 xor 0100 ==> 1011
  return x ^ (1 << whichBit);
}

int main() {
  try {
    pow_recursive(3, -2);
  } catch (runtime_error& e) {
    cout << "Uh oh: " << e.what() << endl;
  }

  try {
    flipBit(15, 33);
  } catch (runtime_error& e) {
    cout << "Uh oh: " << e.what() << endl;
  }

  return 0;
}
