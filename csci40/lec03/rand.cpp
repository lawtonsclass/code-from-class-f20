#include <cstdlib>  // C standard library (gives us rand, srand)
#include <ctime>    // gives us time()
#include <iostream>
using namespace std;

int main() {
  // this initializes the random # generator with the current time
  srand(time(0));

  // now rand() will be different each time we call it
  cout << "Random # between 0 and 99: " << rand() % 100 << endl;

  // char has 8 bits, so it can definitely hold 0 to 127
  cout << static_cast<char>(rand() % 128) << endl;
  cout << static_cast<char>(rand() % 128) << endl;
  cout << static_cast<char>(rand() % 128) << endl;

  cout << "What is the max value? ";
  int maxVal;
  cin >> maxVal;

  // print a random # between 1 and maxVal
  cout << (rand() % maxVal) + 1 << endl;

  return 0;
}
