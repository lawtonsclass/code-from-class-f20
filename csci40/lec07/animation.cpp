#include <iostream>
#include <string>
using namespace std;

#include <chrono>
#include <thread>

// the pause function stops the program for "seconds" many seconds
// don't worry about the implementation
void pause(double seconds) {
  std::this_thread::sleep_for(std::chrono::duration<double>(seconds));
}

int main() {
  for (int i = 0; i < 10; i++) {
    // this loop executes its body 10 times--because i goes from 0, 1,
    // ..., 9
    string s(i + 1, '*');
    cout << s << endl;
    pause(0.5);
  }

  return 0;
}
