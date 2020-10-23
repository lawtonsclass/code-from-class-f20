#include <iostream>
using namespace std;

// blah is taken by reference, so it's going to touch the original int
// that was passed along
void increment(int& blah) { blah++; }

int main() {
  int x = 42;
  increment(x);
  cout << x << endl;

  return 0;
}
