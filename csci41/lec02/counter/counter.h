#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>
#include <vector>

class Counter {
 public:
  // the following is still a "default constructor" even though it
  // takes an argument, because you're not required to give it (i.e.,
  // it has a default)
  Counter(int intialValue = 0);  // constructor
  void inc();
  void reset();

  // getter--marked as const because it's not changing any member
  // variables
  int getCount() const;

  // setter
  void setCount(int newCount) {
    // setters let us prevent the user from doing silly things that we
    // don't want
    if (newCount < 0) {
      count = 0;
    } else {
      count = newCount;
    }
  }

  // + operator: takes our current Counter object, and adds other's
  // count with our own
  Counter operator+(const Counter& other);

  friend Counter operator*(const Counter& x, const Counter& y);

 private:
  int count;
  std::vector<int> blah;
};

Counter operator*(const Counter& x, const Counter& y);
std::ostream& operator<<(std::ostream& os, const Counter& c);

#endif
