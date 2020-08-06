#include <iostream>
using namespace std;

int main() {
  cout << "Please enter a character: ";
  char c;
  cin >> c;  // get a character from the user, store it in c

  cout << "The character " << c << " as a number is: " << static_cast<int>(c)
       << endl;

  return 0;
}
