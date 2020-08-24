#include <iostream>
using namespace std;

int main() {
  int i = 1;
  while (i <= 10) {
    cout << i << endl;
    // I forgot to change i!
  }
  // we'll never get here, since i will always be 1, and 1 is <= 10
  // Use Ctrl-C to stop an infinite loop

  return 0;
}
