#include <algorithm>
#include <iostream>
#include <vector>
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
  Counter();  // this is a constructor for the Counter class
  // this is another constructor for the Counter class
  Counter(int initialCount);
  void reset(int newCount);
  void inc();
  void operator++();
  bool operator<(const Counter& other) const;
  void dec();
  int getCount() const;  // getter
};

void Counter::operator++() { count++; }
// c1 < c2 ==> c1.operator<(c2)

bool Counter::operator<(const Counter& other) const {
  // c1 is smaller than c2 if the count was smaller
  return count < other.count;
}

// start off the count at 0
// this is a default constructor
Counter::Counter() { count = 0; }

Counter::Counter(int initialCount) : count(initialCount) {}

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

int Counter::getCount() const { return count; }

int main() {
  // this line both makes memory for a counter, and calls the
  // constructor to initialize the Counter
  Counter c;

  cout << c.getCount() << endl;  // should be 0
  c.inc();
  ++c;
  ++c;
  c.dec();
  cout << c.getCount() << endl;  // should be 2
  c.reset(42);
  cout << c.getCount() << endl;  // should be 42
  c.reset(-542);
  // should be 42 still, because we don't do negatives
  cout << c.getCount() << endl;

  Counter d(4321);  // this calls the second constructor
  cout << d.getCount() << endl;

  vector<Counter> v;
  v.push_back(d);
  v.push_back(c);
  // all sort needs to sort a vector of a bunch of things is a < on
  // those things
  sort(v.begin(), v.end());
  cout << v.at(0).getCount() << " " << v.at(1).getCount() << endl;

  return 0;
}
