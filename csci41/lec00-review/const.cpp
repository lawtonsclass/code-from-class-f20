#include <iostream>
using namespace std;

// x --> x + 1
int plus1(const double x) {
  // complicated computation
  // ...
  // ...
  // x = 1; <-- makes sure you can't touch x inside this function
  return x + 1;
}

int main() {
  const double pi = 3.1415926535;
  // pi = 3;
  plus1(pi);
  double z = 4.5;
  plus1(z);  // z gets "up-converted" to a const
  // your variables don't have to start out as const for you to pass
  // them to functions that expect consts

  return 0;
}
