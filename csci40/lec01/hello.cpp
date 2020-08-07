#include <iostream>
using namespace std;  // now we can skip the "std::"s

int main() {
  // a complete C++ statement ends with a semicolon

  // think of << as arrows that point in the direction of data
  // transfer
  cout << "Hello, world!\n";        // std::cout prints the text you give it to
                                    // the screen
  cout << "Hello, world!" << endl;  // std::endl is equivalent '\n'
  // "Hello, world!" is called a string (of characters)

  return 0;
}
