#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  // init our random number generator
  srand(time(0));

  // pick a random num between 1 and 100
  int num = rand() % 100 + 1;

  int guess;

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
    exit(0);  // stop the program
  }
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
    exit(0);  // stop the program
  }
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
    exit(0);  // stop the program
  }
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
    exit(0);  // stop the program
  }
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
    exit(0);  // stop the program
  }
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
    exit(0);  // stop the program
  }
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
    exit(0);  // stop the program
  }
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
    exit(0);  // stop the program
  }
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
    exit(0);  // stop the program
  }
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
    exit(0);  // stop the program
  }
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
    exit(0);  // stop the program
  }

  // if the user isn't good at this game, the program might here and
  // end before the user won. Wouldn't it be nice if we could keep
  // asking for guesses as long as the user didn't guess the number
  // correctly?! (i.e. guess != num)

  return 0;
}
