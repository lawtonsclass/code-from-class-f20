#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "abcd";
  string* sp = &s;

  // sp isn't a string, but *sp is!
  cout << (*sp).size() << endl;
  cout << sp->size() << endl;  // equivalent to the above line

  return 0;
}
