#include <iostream>
#include <string>
using namespace std;

// think of templates as a type-level function
// doub "takes a type and gives you back a function"
template <class T>
T doub(T x) {
  return x + x;
}

template <class U>
class Doubler {
 public:
  Doubler(U x);
  U doub();

 private:
  U x;  // the thing we want to double
};

template <class U>
Doubler<U>::Doubler(U x) : x(x) {}

template <class U>
U Doubler<U>::doub() {
  return x + x;
}

int main() {
  // can be explicit
  cout << doub<int>(42) << endl;
  // or, C++ can infer the template argument
  cout << doub(string("hello")) << endl;

  Doubler<int> dInt(42);
  Doubler<string> dString(string("hello"));

  cout << dInt.doub() << endl;
  cout << dString.doub() << endl;

  return 0;
}
