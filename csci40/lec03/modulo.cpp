#include <iostream>
using namespace std;

int main() {
  int x = 42;
  int y = 5;
  cout << "42/5 (int. division): " << x / y << endl;
  // % is called the modulus operator
  // "42 modulo 5"
  cout << "42/5's remainder: " << x % y << endl;

  cout << 1234 % 10 << endl;
  cout << 1234 / 10 << endl;

  return 0;
}
