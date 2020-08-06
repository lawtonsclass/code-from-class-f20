#include <iostream>
using namespace std;

int main() {
  int x;  // make space for x; but let the user give it a value
  cout << "Please enter a value for x: ";
  cin >> x;

  x = x + 1;

  cout << "x now: " << x << endl;

  x++;  // equivalent to x = x + 1;

  cout << "x now: " << x << endl;

  x += 1;  // equivalent to x = x + 1;

  cout << "x now: " << x << endl;

  return 0;
}
