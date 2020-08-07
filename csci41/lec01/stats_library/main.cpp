#include <iostream>
#include <vector>
using namespace std;

#include "stats.h"

int main() {
  // ask the user for ints, and keep track of how many were entered &
  // the max # entered

  Statistician s;
  s.init();

  cout << "Enter the next #: ";
  int num;
  cin >> num;
  while (num != -1) {
    // add to currentNums
    s.addNumber(num);
    add1ToNums(s);
    // print out the numbers
    cout << "Current numbers: ";
    for (int i = 0; i < s.getCurrentNums().size(); i++)
      cout << s.getCurrentNums().at(i) << " ";
    cout << endl;
    // add 1 to count
    cout << "Current max: " << s.getMax() << endl;
    // ask for another number
    cout << "Enter the next #: ";
    cin >> num;
  }

  return 0;
}
