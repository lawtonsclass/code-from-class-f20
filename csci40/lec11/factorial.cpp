#include <iostream>
using namespace std;

int fact(int x);

int main() {
  if (fact(1) != 1) {
    cout << "fact(1) incorrect\n";
  }
  if (fact(2) != 2) {
    cout << "fact(2) incorrect\n";
  }
  if (fact(3) != 6) {
    cout << "fact(3) incorrect\n";
  }
  if (fact(-1) != -1) {
    cout << "fact(-1) incorrect\n";
  }

  return 0;
}

int fact(int x) {
  if (x < 0) return -1;  // if the body is one line, you don't need {}s

  int product = 1;
  for (int i = x; i >= 1; i--) {
    product = product * i;
  }

  return product;
}
