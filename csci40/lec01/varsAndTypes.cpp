#include <iostream>  // for cout, cin
#include <string>    // for string
using namespace std;

int main() {
  int x = 42;  // this makes a variable called x, and it holds 42
  // int means integer--aka whole number
  double y = 3.14;  // double means decimal number (aka floating point)
  char c = 'c';     // char means single character
  // chars go between single quotes
  string s = "Hello, world!";  // string means a bunch of chars
  // strings go between double quotes

  // let's print our stuff out
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;
  cout << "c: " << c << endl;
  cout << "s: " << s << endl;

  // use cin to get values
  int z;  // uninitialized--the user will initialize it
  cout << "type an int: ";
  cin >> z;
  // information is flowing from cin (your keyboard) into y
  cout << "you typed: " << z << endl;

  char c2;  // uninitialized--the user will initialize it
  cout << "type an char: ";
  cin >> c2;
  // information is flowing from cin (your keyboard) into y
  cout << "you typed: " << c2 << endl;

  return 0;
}
