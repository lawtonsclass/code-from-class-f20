#include <iostream>
using namespace std;
// you only include header files--that's all the compiler needs to
// know in order to compile the main.cpp file
// saying #include "add1.h" really just copies and pastes add1.h into
// this file
#include "add1.h"
// this program contains the main function and uses our add1 library

// to compile and run this program, we say:
// g++ -std=c++17 main.cpp add1.cpp -o main

int main() {
  cout << add1(42) << endl;
  return 0;
}
