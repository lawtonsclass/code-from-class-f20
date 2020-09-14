#include <iostream>
#include <string>
using namespace std;

int add(int x, int y) {
  // we need to *give back* the result as an int
  // return statements give back results
  return x + y;
}

// we can make multiple functions with the same name, as long as the
// argument types and/or # of arguments differ
double add(double x, double y) {
  // we need to *give back* the result as an double
  // return statements give back results
  return x + y;
}

string add(string x, string y) {
  // we need to *give back* the result as an string
  // return statements give back results
  return x + y;
}

int main() {
  cout << add(42, 42) << endl;
  cout << add(3.14, 5.67) << endl;
  cout << add("blah", "blah2") << endl;

  return 0;
}
