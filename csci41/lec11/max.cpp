#include <iostream>
#include <string>
using namespace std;

// this line "declares" a template variable called T that can stand
// for any type
template <class T>
T maximum(T x, T y) {
  if (x > y)
    return x;
  else
    return y;
}

template <class T>
T doub(T x) {
  return x + x;
}

int main() {
  // replace T with int
  cout << maximum<int>(42, 43) << endl;
  // replace T with string
  cout << maximum<string>("poo", "boo") << endl;

  // C++ can actually figure out the types for you
  cout << maximum(3.14, 4.67) << endl;

  cout << doub(42) << endl;
  cout << doub(string("hello")) << endl;

  return 0;
}
