#include <iostream>
using namespace std;

// harry is a global variable--he lives for the life of the program
int harry = 43;

void gobletOfFire() {
  // cedric is a local variable--he lives only for the life of this
  // function
  int cedric = 42;
  harry++;
  cout << "harry in gobletOfFire: " << harry << endl;
  cout << "cedric in gobletOfFire: " << cedric << endl;
  // right here, before gobletOfFire returns, cedric's gets
  // deallocated
}

int main() {
  cout << "harry in main: " << harry << endl;
  gobletOfFire();
  harry++;
  cout << "harry in main, after gobletOfFire: " << harry << endl;

  return 0;
}
