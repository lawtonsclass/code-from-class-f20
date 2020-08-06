#include <iostream>
// this line above includes the iostream library, which allows us to
// get input (cin) and produce output (cout)
// iostream is part of the C++ standard library (std)

// this is a comment--it's not source code
// It's here for the programmer
// "//" at the beginning of a line marks a line comment

/*
this is a multi-line comment.
Begins
with /*, ends with */

// every C++ program starts with a main function
// it "returns" an integer to the terminal, and that int is an "exit
// code". 0 stands for successful, and any nonzero value means error.
int main() {  // main exists between a { and }
  // every C++ statement ends with a ';'
  std::cout << "Hello, world!\n\n";
  // cout takes information (think of << like an arrow)
  // '\n' is a "newline" character (it presses Enter for you)

  std::cout << "Hello, "
            << "world!"
            << "(again)" << std::endl;

  // returning from main stops the program
  return 0;
}

// to compile, we say g++ -std=c++17 hello.cpp
