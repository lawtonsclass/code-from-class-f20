#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double d = 0.0;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;

  // doubles are not perfectly precise--there's only 8 bytes of space,
  // and some #s are not exactly representable in those 8 bytes
  cout << setprecision(16) << d << endl;

  cout << (d == 1.0) << endl;
  cout << (abs(d - 1.0) < 0.0001) << endl;

  return 0;
}
