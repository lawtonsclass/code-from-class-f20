#ifndef STATS_H
#define STATS_H

#include <vector>
// NEVER use namespace std in a header file!!!

class Statistician {
 public:
  void init();
  int getMax();
  void addNumber(int n);

  // getter/accessor
  const std::vector<int>& getCurrentNums() { return currentNums; }

  // we trust this function. It's our friend!
  friend void add1ToNums(Statistician& s);

  // the user doesn't get to touch these
 private:
  std::vector<int> currentNums;
  int count;
  int currentMax;
};

void add1ToNums(Statistician& s);

#endif
