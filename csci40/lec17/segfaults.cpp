#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int* p;  // p points to a random address

  cout << p << endl;

  p = nullptr;  // a special (0) address that never belongs to you

  cout << *p << endl;

  return 0;
}
