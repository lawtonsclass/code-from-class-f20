#include <iostream>
using namespace std;

int main() {
  const double pi = 3.1415926535;
  // the compiler will not even allow the following line to exist:
  /* pi = 3;  // this is a bad idea */
  cout << pi << endl;

  return 0;
}
