#include <iomanip>  // for setprecision
#include <iostream>
using namespace std;

int main() {
  // integer divsion happens when both sides of the / are ints
  double d = 1 / 2;
  cout << "d: " << d << endl;

  // solution: make at least one side a double
  d = 1.0 / 2;
  cout << "d: " << d << endl;

  int x = 1;
  int y = 2;
  // to convert an expression from one type to another, use:
  // static_cast<type_you_want>(exp)
  d = x / static_cast<double>(y);
  cout << "d: " << d << endl;

  // Printing doubles:
  // /////////////////////////////

  double d2 = 1.0;
  cout << "d2: " << d2 << endl;

  // to force the decimal place to be shown, pass std::fixed to cout
  cout << fixed;  // this doesn't print anything. When cout sees fixed, it knows
                  // to start printing the decimal place for doubles
  cout << "d2: " << d2 << endl;

  // to force the number of decimal place to be what you want, you can
  // add setprecision(2). This rounds the output, but does not change
  // any variables
  // std::setprecision lives in the <iomanip> library
  cout << setprecision(2);  // tells cout that for all future doubles, print
                            // after rounding to 2 decimal places
  cout << "d2: " << d2 << endl;

  double d3 = 1.5555;
  cout << "d3: " << d3 << endl;

  cout << setprecision(5);
  cout << "d3: " << d3 << endl;

  return 0;
}
