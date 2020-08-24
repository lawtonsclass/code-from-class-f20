#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;

  // if n is divisible by 3, print fizz
  // if n is divisible by 5, print buzz
  // if n is divisible by 3 and 5, print fizzbuzz

  if (n % 3 == 0 && n % 5 == 0) {
    // we have to check this condition first, because any of the
    // weaker conditions below would also be true if we checked them
    // before this one
    cout << "fizzbuzz\n";
  } else if (n % 3 == 0) {
    cout << "fizz\n";
  } else if (n % 5 == 0) {
    cout << "buzz\n";
  } else {
    // if none of the condidtions were true, just print the number
    cout << n << endl;
  }

  return 0;
}
