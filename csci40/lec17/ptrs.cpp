#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int* p;  // p is a pointer to an int. It can hold the address of an int.
  p = &x;  // now p holds the address of x (i.e., p points to x)

  cout << p << endl;
  cout << *p << endl;

  int* q = &x;  // could also use p

  int** r = &p;  // r points to p, who points to x
  // two levels of indirection!

  cout << endl;
  cout << x << endl;
  cout << *p << endl;
  cout << *q << endl;
  cout << **r << endl;

  return 0;
}
