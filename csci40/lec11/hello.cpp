#include <iostream>
using namespace std;

// hello takes no argument
// hello returns *nothing*--what's the type of nothing?
// the answer: void
void hello() { cout << "Hello!" << endl; }

int main() {
  hello();  // calling this should print hello
  return 0;
}
