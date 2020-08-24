#include <iostream>
using namespace std;

int main() {
  cout << "Enter a: ";
  int a;
  cin >> a;
  cout << "Enter b: ";
  int b;
  cin >> b;

  int originalA = a, originalB = b;

  while (b != 0) {
    // save current b so that we can put it in a
    int oldB = b;
    // replace b with a % b
    b = a % b;
    // replace a with the old value of b
    a = oldB;
  }

  // if this loop stops, we know that b == 0
  // therefore, a now holds the GCD

  cout << "The GCD of " << originalA << " and " << originalB << " is: " << a
       << endl;

  return 0;
}
