#ifndef STATS_H
#define STATS_H

#include <vector>
// NEVER use namespace std inside a header file

class Statistician {
 public:
  void init();
  int max();
  void addNumber(int newNum);

  // getters/accessors allow us to control access to private member
  // variables

  // returns a constant reference to currentNums (so it can't be
  // modified, but it can be seen)
  const std::vector<int>& getCurrentNums();

  friend void add1ToNums(Statistician& s);

  // we don't want outsiders to touch these variables
 private:
  std::vector<int> currentNums;
  int currentMax;
};

void add1ToNums(Statistician& s);

#endif
