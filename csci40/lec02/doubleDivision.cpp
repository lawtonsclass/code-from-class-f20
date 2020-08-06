#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double x = 1.0 / 2;
  // no rounding takes place with integer division; it simply drops
  // the decimal places
  cout << x << endl;

  // static_cast converts between types
  // ex: static_cast<type_I_want>(var_I_want_to_convert)
  int divisor = 2;
  double y = 5 / static_cast<double>(divisor);  // 2.5
  cout << y << endl;

  // fixed or std::fixed is a special variable that, when sent to
  // cout, modifies the way cout prints doubles
  cout << fixed;  // makes cout always show the decimal point for doubles
  double z = 2.0;
  cout << z << endl;

  double w = 2.5555;
  // let's say we wanted to print this number with 2 decimal places
  cout << setprecision(2);
  // this tells C++ to print doubles with 2 decimal places
  // need <iomanip> for this
  cout << w << endl;
  // w is still 2.5555
  cout << setprecision(4);
  cout << w << endl;

  return 0;
}
