#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int num;
  cin >> num;

  // let's test whether this number is even or odd
  // this outputs true (1) if num is even, false (0) if num is odd
  cout << (num % 2 == 0) << endl;

  if (num % 2 == 0) {
    // in this case (if we got here),
    // the number must've been even
    cout << "Even!\n";
  } else {
    // otherwise, if we got here, we know that our test (i.e., our
    // Boolean expression) returned false
    // the number must've *not* been even (i.e., it was false)
    cout << "Odd";
    cout << "!\n";
  }

  // here, there's no matching else, so the program just continues if
  // the condition isn't true
  if (num % 2 == 0) {
    // in this case (if we got here),
    // the number must've been even
    cout << "Even!\n";
  }

  return 0;
}
