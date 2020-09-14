// compile with: g++ -std=c++17 libraries.cpp -o libraries
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << cos(0.0) + 42.34 << endl;

  string s;
  cout << "Enter a word, please: ";
  cin >> s;
  // the size "method"/"member function" it acts on s itself
  cout << s.size() << endl;
  if (s.find("f") == string::npos) {
    cout << "there was no f :(\n";
  } else {
    cout << "there was an f :)\n";
  }

  string s2 = s + " hi mom";
  cout << s2 << endl;
  // strings are compared in dictionary ordering
  cout << (string("asdf") < string("jkl")) << endl;

  // a 0 "exit code" means that main (i.e., your program) finished successfully
  return 0;
}
