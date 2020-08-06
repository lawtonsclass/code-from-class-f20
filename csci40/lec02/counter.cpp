#include <iostream>
using namespace std;

class Counter {
 public:  // the whole world can see the following
  int count;

  void reset() { count = 0; }

  void inc() { count = count + 1; }
};

int main() {
  Counter c;
  c.reset();  // the counter holds 0

  c.inc();  // increase the count by 1; click the button on the counter
  c.inc();
  c.inc();
  c.inc();
  c.inc();

  cout << "final count: " << c.count << endl;

  c.reset();  // the counter holds 0

  c.inc();  // increase the count by 1; click the button on the counter
  c.inc();
  c.inc();

  cout << "final count 2: " << c.count << endl;

  return 0;
}
