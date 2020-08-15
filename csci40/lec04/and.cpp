#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int num;
  cin >> num;

  bool is_pos = num > 0;  // true or false, depending on whether num is pos.
  bool is_even = num % 2 == 0;

  bool is_pos_and_even = is_pos && is_even;

  if (is_pos_and_even) {
    cout << "Is both positive and even!" << endl;
  } else {
    cout << "Is *not* both positive and even!\n";
  }

  return 0;
}
