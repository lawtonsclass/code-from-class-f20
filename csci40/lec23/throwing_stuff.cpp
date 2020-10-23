#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

void throwException() {
  runtime_error e("I threw an exception in the throwException function!");
  throw e;
}

void throwAnInt() { throw 42; }

void throwAString() { throw string("blah"); }

int main() {
  try {
    throwException();
  } catch (runtime_error& e) {
    cout << "We caught a runtime error in main!\n";
    cout << e.what() << endl;
  }

  try {
    throwAnInt();  // try block doesn't continue executing here
    throwAString();
  } catch (int x) {
    cout << "caught " << x << endl;
  } catch (string& x) {
    cout << "this will never execute\n";
  }

  try {
    throwAString();
  } catch (string& x) {
    cout << "caught " << x << endl;
  }

  return 0;
}
