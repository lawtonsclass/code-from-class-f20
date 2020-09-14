#include <iostream>
#include <string>
using namespace std;

#include "adder.h"

int main() {
  typedef int my_int;
  Adder<my_int> intAdder(42, 43);
  Adder<string> stringAdder("hi ", "mom");

  cout << intAdder.add() << endl;
  cout << stringAdder.add() << endl;

  return 0;
}
