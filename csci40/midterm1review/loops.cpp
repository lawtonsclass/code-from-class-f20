#include <iostream>
using namespace std;

int main() {
  int i = 1;
  while (i <= 10) {
    cout << i << " ";
    i++;
  }
  cout << endl;

  for (int j = 10; j >= 1; j = j - 1) {
    cout << j << " ";
  }
  cout << "liftoff!\n";

  // let's see all the different ways to make $1.00 out of coins
  for (int pennies = 0; pennies <= 100; pennies++) {
    for (int nickels = 0; nickels <= 20; nickels++) {
      for (int dimes = 0; dimes <= 10; dimes++) {
        for (int quarters = 0; quarters <= 4; quarters++) {
          // inside here, we have values set for all 4 loop vars
          // every possibility will happen once

          // price of our current coins:
          int cents = pennies * 1 + nickels * 5 + dimes * 10 + quarters * 25;

          // check if we made exactly 100 cents
          if (cents == 100) {
            cout << "You can make a dollar with:\n";
            cout << "  " << pennies << " pennies" << endl;
            cout << "  " << nickels << " nickels" << endl;
            cout << "  " << dimes << " dimes" << endl;
            cout << "  " << quarters << " quarters" << endl;
          }
        }
      }
    }
  }

  return 0;
}
