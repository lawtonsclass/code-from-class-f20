#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>

class Counter {
 public:
  Counter(int startingValue = 0);
  void inc();

  // getter
  int getCount() const;

  // setter
  void setCount(int c) {
    if (c < 0) {
      count = 0;
    } else {
      count = c;
    }
  }

  // + operator, inside the class
  Counter operator+(const Counter& other) const;

  friend Counter operator*(const Counter& x, const Counter& y);

  Counter operator-() const;

 private:
  int count;
};

Counter operator*(const Counter& x, const Counter& y);

std::ostream& operator<<(std::ostream& os, const Counter& c);

#endif
