#include "counter.h"
using namespace std;

Counter::Counter(int startingValue) : count(startingValue) {}

void Counter::inc() { count++; }

int Counter::getCount() const {
  // count++; // not allowed to do this!
  return count;
}

Counter Counter::operator+(const Counter& other) const {
  Counter sum;
  sum.count = count + other.count;

  return sum;
}

Counter operator*(const Counter& x, const Counter& y) {
  Counter product;
  product.count = x.count * y.count;

  return product;
}

Counter Counter::operator-() const {
  Counter negated;
  negated.count = -count;

  return negated;
}

std::ostream& operator<<(std::ostream& os, const Counter& c) {
  // pretend os is cout, and then output the counter to it
  os << "Counter's current count: " << c.getCount() << endl;

  return os;
}
