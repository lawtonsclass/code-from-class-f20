#include <iostream>
#include <sstream>  // for stringstream
#include <string>
using namespace std;

int main() {
  // stringstream is like our own personal cout/cin

  stringstream ss;  // make a new, empty stringstream
  ss << 42 << " " << 43;
  // technically, ss is "set" to the string "42 43" <-- characters

  // you can look at the string you've built up inside stringstream
  string ss_contents = ss.str();
  cout << ss_contents << endl;

  int firstNum, secondNum;
  ss >> firstNum >> secondNum;
  // firstNum and secondNum have been set to 42 and 43
  cout << "firstNum: " << firstNum << " secondNum: " << secondNum << endl;

  return 0;
}
