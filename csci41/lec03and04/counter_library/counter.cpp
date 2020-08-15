// to individually compile counter.cpp into object code, you run:
// g++ -std=c++17 -c counter.cpp
// ^ automatically outputs to counter.o
// counter.o will be machine code for this one file--that means it won't run

#include <iostream>
#include <vector>
using namespace std;

#include "counter.h"

Counter::Counter(int initialCount) : count(initialCount) {
  // before the body gets executed, contrivedExample has its default
  // constructor called
  cout << "Counter has been initialized" << endl;
}

void Counter::reset() { count = 0; }
void Counter::inc() { count++; }
int Counter::getCount() const { return count; }
