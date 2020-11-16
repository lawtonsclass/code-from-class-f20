#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class MyException : public exception {
 public:
  MyException(string s) { desc = "Something horrible happened: " + s; }

  const char* what() const noexcept override { return desc.c_str(); }

 private:
  string desc;
};

int main() {
  try {
    if (42 < 43) {
      throw MyException("42 < 43");
    }
  } catch (MyException& e) {
    cout << e.what() << endl;
  }

  return 0;
}
