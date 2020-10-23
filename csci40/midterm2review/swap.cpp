#include <iostream>
using namespace std;

void swapRef(int& x, int& y) {
  int temp = x;
  x = y;
  y = temp;
}

void swapPtr(int* x, int* y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a = 42, b = 43;

  swapRef(a, b);
  cout << a << " " << b << endl;

  swapPtr(&a, &b);
  cout << a << " " << b << endl;

  return 0;
}
