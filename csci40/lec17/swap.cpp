#include <iostream>
using namespace std;

void swapRef(int& x, int& y) {
  int temp = x;
  x = y;
  y = temp;
}

// C++ is really doing this under the hood for swapRef
void swapPointers(int* x, int* y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a = 42, b = 43;
  swapRef(a, b);
  cout << a << " " << b << endl;
  swapPointers(&a, &b);
  cout << a << " " << b << endl;

  return 0;
}
