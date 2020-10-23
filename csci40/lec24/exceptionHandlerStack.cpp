#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

void foo();
void bar();
void baz();

void foo() {
  // this is the second (nested) try/catch block that C++ sees
  try {
    bar();
  } catch (int x) {
    cout << "foo: caught " << x << endl;
  }
}

void bar() {
  try {
    baz();
  } catch (string& x) {
    cout << "bar: caught " << x << endl;
  }
}

void baz() {
  try {
    throw runtime_error("¯\\_(ツ)_/¯");
    /* throw string("asdf"); */
    /* throw 42; */
  } catch (runtime_error& e) {
    cout << "caught runtime_error in baz: " << e.what() << endl;
  }
}

int main() {
  // C++ sees this try/catch block first
  try {
    foo();
  } catch (runtime_error& e) {
    cout << "caught runtime_error in main: " << e.what() << endl;
  }

  return 0;
}
