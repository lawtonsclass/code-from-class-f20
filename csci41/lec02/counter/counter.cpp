#include "counter.h"
using namespace std;

// constructor--replaces init
// the initializer list is equivalent to the line
// "count = initialValue;"
Counter::Counter(int initialValue) : count(initialValue), blah(42) {
  // the vector has already been initialized to an empty vector in
  // this case; it's too late once you get to the body
  // so, you call the vector's constructor in the initializer list
}

void Counter::inc() { count++; }
void Counter::reset() { count = 0; }
int Counter::getCount() const {
  // const is keeping us from doing the following:
  // count = -42;

  return count;
}

Counter Counter::operator+(const Counter& other) {
  Counter result;
  result.count = count + other.count;
  return result;
}

Counter operator*(const Counter& x, const Counter& y) {
  Counter result;
  result.count = x.count * y.count;
  return result;
}

// the type of cout is ostream
ostream& operator<<(ostream& os, const Counter& c) {
  // implement as if os was cout--i.e., give it stuff with <<
  os << "current count: " << c.getCount();

  return os;
}
