#include <iostream>
#include <vector>
using namespace std;

class Foo {
 public:
  vector<int> v;
  const double blah;
  // in between the constructor call and the body, blah gets set
  // it's too late to try and set it in the body
  // same for v
  Foo() : v(100, 42), blah(3.14) {
    // too late for this
    /* blah = 3.14; */
    // v gets made too--it'll be set to an empty vector
    cout << v.size() << endl;
  }
};

int main() {
  vector<int> v(100, 42);  // make a vector of 100 42s
  const double pi = 3.14;

  Foo f;  // calls Foo's constructor
  cout << f.blah << endl;

  int x(42);  // constructor-style init even works for non-classes
  cout << x << endl;

  return 0;
}
