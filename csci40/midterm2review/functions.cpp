#include <iostream>
using namespace std;

// non-void return type mean you need to give back a value in your
// function
int plus1(int x) { return x + 1; }

// void return type mean that your function just does something
void printPlus1(int x) { cout << x + 1 << endl; }

int main() {
  cout << plus1(2) * 2 << endl;

  printPlus1(2);  // + 1 makes no sense here

  return 0;
}
