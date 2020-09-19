#include <iostream>
using namespace std;

double plus1(double& d) {
  d = d + 1;
  return d + 1;
}

// const references give you the memory savings of references, but you
// can't touch the original variable anymore
double plus1const(const double& d) { return d + 1; }

int main() {
  const double d = 3.14;

  double e = 4.15;
  // C++ has no trouble converting a normal variable to a constant
  const double f = e;

  cout << plus1(e) << endl;
  cout << e << endl;

  cout << plus1const(e) << endl;
  cout << e << endl;

  return 0;
}
