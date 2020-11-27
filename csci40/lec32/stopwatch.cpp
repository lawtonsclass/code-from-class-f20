#include <ctime>
#include <iostream>
using namespace std;

class Stopwatch {
 public:
  // no need for a constructor--we'll member vars in the start
  // method
  void start();

 private:
  void outputTimeSinceStart() const;

  // save the starting time for the stopwatch
  clock_t start_time;
};

void Stopwatch::start() {
  // save the start time
  start_time = clock();

  // keep getting the current time and displaying the difference
  // between the start time and end time
  while (true) {
    outputTimeSinceStart();
  }
}

void Stopwatch::outputTimeSinceStart() const {
  // get the current time
  clock_t current_time = clock();
  // get the # of seconds between start and end
  double s = static_cast<double>(current_time - start_time) / CLOCKS_PER_SEC;
  // keep going back to the start of the current line and overwriting
  // things
  cout << "\rTime Elapsed: " << s;
}

int main() {
  Stopwatch s;
  s.start();  // start and display the timer

  return 0;
}
