#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  cout << cos(0) << endl;
  // cos(0) is a function call--it'll get replaced with its answer

  cout << atan(1) * 4 << endl;
  cout << exp(1) << endl;

  cout << pow(2.5, 2) << endl;  // computes 2.5^2

  cout << sqrt(2) << endl;

  /* exit(1);  // stop the program */

  cout << round(2.15) << endl;
  cout << round(2.5) << endl;

  cout << abs(-42) << endl;    // calls cstdlib's abs
  cout << abs(-42.5) << endl;  // calls cmath's abs

  return 0;
}
