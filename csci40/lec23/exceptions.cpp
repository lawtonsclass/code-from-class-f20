#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3};

  int sum = 0;
  try {
    // the second anything goes wrong, the code in here will stop executing and
    // jump to the proper catch block (if it exists)
    // If you don't catch the proper exception type, then the program
    // will exit with a runtime error
    for (int i = 0; i < 10; i++) {
      // when i == 3, v.at(i) throws an out_of_range exception
      sum += v.at(i);
    }
  } catch (out_of_range& e) {
    // this catch block tells C++ that we know how to handle any
    // out_of_range exception, and that we can recover from it
    cout << "Uh oh, we got an out of range exception...\n";
    // out_of_range "inherits from" the exception class, so it has a
    // .what() member function that returns a C-string that tells us
    // what went wrong
    cout << e.what() << endl;
    sum = 42;
  }

  return 0;
}
