#include <iostream>
using namespace std;

void swapByValue(int p, int q) {
  int temp = p;
  p = q;
  q = temp;
}

void swapByRef(int& p, int& q) {
  int temp = p;
  p = q;
  q = temp;
}

void swapByAddr(int* p, int* q) {
  int temp = *p;
  *p = *q;
  *q = temp;
}

int main() {
  int x = 42, y = 43;
  // swapByValue(x, y);
  // swapByRef(x, y);
  swapByAddr(&x, &y);

  cout << x << " " << y << endl;
  return 0;
}
