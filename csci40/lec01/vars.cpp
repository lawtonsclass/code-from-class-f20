// to compile something so a filename other than a.out:
// g++ -std=c++17 vars.cpp -o vars
// this will make the compiled executable called "vars" instead of
// a.out

#include <iostream>
using namespace std;  // now we can skip the "std::"s

int main() {
  int x = 42;  // this makes a place in main's memory called x that has value 42
  cout << x << endl;

  // doubles store decimal numbers
  double d = 3.14;
  cout << d << endl;

  // char is for *single* characters--has to go between single quotes
  char c = 'H';
  cout << c << endl;

  string s = "Pepperoni";
  cout << s << endl;

  int y;
  cout << "Please enter an integer: ";
  // information flows from cin (your keyboard) into y
  cin >> y;

  // now y has whatever value the user gave it
  cout << "You typed " << y << endl;

  return 0;
}
