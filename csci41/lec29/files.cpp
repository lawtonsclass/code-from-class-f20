#include <fstream>
#include <iostream>
using namespace std;

void do_file_stuff() {
  ifstream ifs("foo.txt");

  ifs.get();
  // ...

  // the file will be automatically closed, because ifs is about to
  // "go out of scope"
}

void do_file_stuff2() {
  ifstream ifs("foo.txt");

  ifs.get();
  // ...

  throw 42;
  // the file will be automatically closed by C++'s exception handling
  // mechanism
}

int main() {
  do_file_stuff();

  try {
    do_file_stuff2();
  } catch (int& i) {
    // ...
  }

  return 0;
}
