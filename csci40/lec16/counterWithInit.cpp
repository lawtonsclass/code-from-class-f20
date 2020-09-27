#include <iostream>
using namespace std;

/* Member variable: current count */
/* Operations you can do to a Counter: */
/* Init */
/* Reset(new_count) */
/* Inc */
/* Dec */
/* GetCount */

class Counter {
 private:
  int count;  // we don't want the user to mess with the count
 public:
  void init();
  void reset(int newCount);
  void inc();
  void dec();
  int getCount();
};

// start off the count at 0
void Counter::init() { count = 0; }

// reset the current object's count to newCount
void Counter::reset(int newCount) {
  // only reset the count if it's non-negative
  // if you have a 1-line body of an if statement, then you don't need
  // to use braces
  if (newCount >= 0) count = newCount;
}

void Counter::inc() { count++; }
void Counter::dec() {
  count--;
  // make sure count isn't silly
  // should never be negative
  if (count < 0) count = 0;
}

int Counter::getCount() { return count; }

int main() {
  Counter c;
  // always initialize the counter first
  c.init();
  cout << c.getCount() << endl;  // should be 0
  c.inc();
  c.inc();
  c.inc();
  c.dec();
  cout << c.getCount() << endl;  // should be 2
  c.reset(42);
  cout << c.getCount() << endl;  // should be 42
  c.reset(-542);
  // should be 42 still, because we don't do negatives
  cout << c.getCount() << endl;

  return 0;
}
