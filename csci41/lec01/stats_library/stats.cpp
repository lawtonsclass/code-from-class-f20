#include <iostream>
#include <vector>
using namespace std;

#include "stats.h"

void Statistician::init() {
  currentNums = {42};
  count = 0;
  currentMax = 42;
}

void Statistician::addNumber(int n) {
  currentNums.push_back(n);
  count++;
}

int Statistician::getMax() {
  int max = currentNums.at(0);
  for (int i = 1; i < currentNums.size(); i++) {
    if (currentNums.at(i) > max) max = currentNums.at(i);
  }
  currentMax = max;
  return max;
}

// this function is a friend, so it gets to see the private member
// variables of Statistician
void add1ToNums(Statistician& s) {
  for (int i = 0; i < s.currentNums.size(); i++) {
    s.currentNums.at(i) += 1;
  }
}
