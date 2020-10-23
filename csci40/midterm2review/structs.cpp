#include <iostream>
#include <string>
using namespace std;

struct Result {
  int i;
  bool b;
  string s;
};

Result foo() {
  Result r = {1, true, "hi mom"};
  return r;
}

int main() {
  Result r2 = foo();

  cout << r2.s << endl;
  cout << r2.b << endl;
  cout << r2.i << endl;

  return 0;
}
