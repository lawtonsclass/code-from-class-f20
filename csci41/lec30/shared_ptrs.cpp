#include <iostream>
#include <memory>
#include <string>
using namespace std;

shared_ptr<string> make_string_on_heap() {
  shared_ptr<string> sp1 = make_shared<string>("hi mom");
  return sp1;
}

int main() {
  shared_ptr<string> sp2 = make_string_on_heap();

  shared_ptr<string> sp3 = sp2;

  *sp2 = *sp2 + "!";

  cout << *sp3 << endl;

  return 0;
}
