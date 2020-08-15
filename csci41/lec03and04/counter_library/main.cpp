// to individually compile counter.cpp into object code, you run:
// g++ -std=c++17 -c main.cpp
// ^ this makes main.o, but it's not runnable
// to link counter.o and main.o (and vector, iostream, etc.):
// g++ -std=c++17 counter.o main.o -o main

#include <iostream>
using namespace std;

#include "counter.h"

int main() {
  Counter c(42);  // if I change this line, I only need to recompile main.o and
                  // then re-link main.o with the existing counter.o
  c.inc();
  c.inc();

  cout << c.getCount() << endl;

  return 0;
}
