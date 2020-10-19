#include <iostream>
#include <string>
using namespace std;

void printFrom1To(int n) {
  if (n == 0)
    return;  // do nothing
  else {
    // recursively print from 1 to n-1
    printFrom1To(n - 1);  // assume that this works!
    // solve the bigger problem by printing our n next
    cout << n << endl;
  }
}

// pretty much the same as the previous function, except the two lines
// in the recursive case are swapped!
void printNto1(int n) {
  if (n == 0)
    return;  // do nothing
  else {
    cout << n << endl;
    // recursively print from n-1 to 1
    printNto1(n - 1);  // assume that this works!
  }
}

void printCharsOfString(string s) {
  if (s == "")
    return;
  else {
    cout << s.at(0) << endl;
    // recursively print the smaller string
    string smallerString = s.erase(0, 1);
    printCharsOfString(smallerString);
  }
}

void printCharsOfStringReverse(string s) {
  if (s == "")
    return;
  else {
    string originalS = s;
    // recursively print the smaller string in reverse
    s.erase(0, 1);
    printCharsOfString(s);
    // print the first char of the original string
    cout << originalS.at(0) << endl;
  }
}

int main() {
  printFrom1To(5);
  cout << endl;
  printNto1(5);
  cout << endl;
  printCharsOfString("hello");
  cout << endl;
  printCharsOfStringReverse("hello");

  return 0;
}
