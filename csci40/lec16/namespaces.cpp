#include <iostream>
using namespace std;

namespace foo42 {

int foo() { return 42; }

}  // namespace foo42

namespace foo43 {

int foo() { return 43; }

}  // namespace foo43

// if I want the first foo, it's full name is foo42::foo

int main() {
  cout << foo42::foo() << endl;
  cout << foo43::foo() << endl;

  return 0;
}
