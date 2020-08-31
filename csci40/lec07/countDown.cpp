#include <iostream>
using namespace std;

int main() {
  // while loop to count down from 10 to 1
  int i = 10;
  while (i >= 1) {
    cout << i << endl;
    i--;
  }
  // i must be < 1 if we got here
  cout << "Liftoff!\n";

  cout << endl;

  // for loop to do the same thing
  for (int j = 10; j >= 1; j--) {
    cout << j << endl;
  }
  // j does not exist outisde this for loop
  cout << "Liftoff!\n";

  return 0;
}
