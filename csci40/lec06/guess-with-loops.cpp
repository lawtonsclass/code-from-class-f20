#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  // init our random number generator
  srand(time(0));

  // pick a random num between 1 and 100
  int num = rand() % 100 + 1;

  // start out guess with a value that is always different from num
  int guess = -1;

  // repeatedly ask for a guess while the user is incorrect
  // (i.e., guess != num)
  while (guess != num) {
    cout << "Enter a guess: ";
    cin >> guess;
    if (guess > num) {
      cout << "Too high\n";
    } else if (guess < num) {
      cout << "Too low\n";
    } else {
      // it must be true, if we got here, that guess == num
      // we can end the program here
      cout << "You got it!\n";
    }
  }
  // once we get here (if we ever do), then guess == num

  return 0;
}
