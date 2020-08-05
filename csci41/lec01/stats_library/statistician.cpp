#include "statistician.h"

void Statistician::init() { currentNums.push_back(42); }

int Statistician::max() {
  // now we're setting the member variable
  currentMax = currentNums.at(0);
  for (int i = 1; i < currentNums.size(); i++) {
    if (currentNums.at(i) > currentMax) currentMax = currentNums.at(i);
  }
  return currentMax;
}

void Statistician::addNumber(int newNum) { currentNums.push_back(newNum); }

const std::vector<int>& Statistician::getCurrentNums() { return currentNums; }

void add1ToNums(Statistician& s) {
  for (int i = 0; i < s.currentNums.size(); i++) {
    s.currentNums.at(i) += 1;
  }
}
