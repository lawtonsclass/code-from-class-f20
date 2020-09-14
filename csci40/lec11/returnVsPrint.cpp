#include <iostream>
using namespace std;

int add(int x, int y) { return x + y; }

int add_incorrect(int x, int y) { cout << x + y << endl; }

void printHello() { cout << "Hello!" << endl; }

int main() {
  // add gives back a value, and then it's our job to do something
  // with that value
  // add(2, 3); // computes 5 and does nothing with it
  cout << add(2, 3) + 1 << endl;

  // we can use printHello by itself, because it doesn't give back
  // anything
  // cout << printHello() << endl; // this makes no sense
  printHello();

  // the code below is an error
  // add_incorrect doesn't return anything, so a random value will be
  // returned, and then 1 will be added to it (and then printed)
  // There are 2 couts happening: the first in the function, the
  // second in main.
  cout << add_incorrect(2, 3) + 1 << endl;

  return 0;
}
