#include <ctime>
#include <iostream>
using namespace std;

class Timer {
 public:
  Timer() { starting_time = clock(); }

  ~Timer() {
    clock_t ending_time = clock();
    double diff =
        static_cast<double>(ending_time - starting_time) / CLOCKS_PER_SEC;
    cout << "Time elapsed: " << diff << "s\n";
  }

 private:
  clock_t starting_time;
};

void function_to_time() {
  Timer t;

  int sum = 0;
  for (int i = 0; i < 1000000000; i++) {
    sum += i;
  }

  // becuase of RAII, the Timer class will be destructed right here
  // I started the timer to record the time at the start of the
  // function
  // The destructor will calculate the time elapsed automatically!
}

int main() {
  function_to_time();

  return 0;
}
