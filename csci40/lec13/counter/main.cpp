// g++ -std=c++17 main.cpp counter.cpp -o main

#include <iostream>

#include "counter.h"  // now we have our library functions
using namespace std;

int main() {
  // init our counter so that its value is 0
  init_counter();
  cout << get_count() << endl;

  inc();
  inc();
  cout << get_count() << endl;

  dec();
  cout << get_count() << endl;

  reset();
  cout << get_count() << endl;

  return 0;
}
