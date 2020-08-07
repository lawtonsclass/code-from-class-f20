#include <iostream>
using namespace std;

class Counter {
 public:
  int count;

  void reset() { count = 0; }

  void inc() { count = count + 1; }
};

int main() {
  Counter c;  // make a brand new Counter called c

  c.reset();  // reset the counter's count to 0
  c.inc();
  c.inc();
  c.inc();

  cout << "Current count: " << c.count << endl;

  c.reset();
  c.inc();
  c.inc();

  cout << "Current count: " << c.count << endl;

  return 0;
}
