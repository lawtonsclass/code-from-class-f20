#include <iostream>
using namespace std;

void foo(int y) { y = y + 1; }

void fooWithReferences(int& y) { y = y + 1; }

// references allow us to pass along variables from other functions
// that we can touch and modify!
void setAandB(int& x, int& y) {
  x = 42;
  y = 43;
}

int main() {
  int x = 42;
  foo(x);
  cout << x << endl;  // what gets printed here?!

  fooWithReferences(x);
  cout << x << endl;  // what gets printed here?!

  // I want to return multiple variables
  // So, I'll make them in main, and then pass them as references
  int a, b;
  setAandB(a, b);
  cout << a << " " << b << endl;

  return 0;
}
