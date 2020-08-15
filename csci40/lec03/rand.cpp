#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(0));  // seed the random # generator with the current time

  // get a random # between 0 and 99
  cout << rand() % 100 << endl;

  cout << static_cast<char>(rand() % 128) << endl;
  cout << static_cast<char>(rand() % 128) << endl;
  cout << static_cast<char>(rand() % 128) << endl;

  cout << "Enter a max value: ";
  int maxVal;
  cin >> maxVal;
  cout << (rand() % maxVal) + 1 << endl;

  return 0;
}
