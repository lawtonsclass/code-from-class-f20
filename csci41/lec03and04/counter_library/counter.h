#ifndef COUNTER_H
#define COUNTER_H

#include <vector>

class Counter {
 public:
  Counter(int initialCount = 0);
  void reset();
  void inc();
  int getCount() const;

 private:
  int count;
  std::vector<int> contrivedExample;
};

#endif
