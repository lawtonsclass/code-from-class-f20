// any line starting with '#' is a preprocessor directive
// they get "run" before the compiler
#ifndef ADD1_H  // only if ADD1_H
#define ADD1_H  // define a compiler level variable
// makes sure this .h file is only ever included once

// #include "add1.h"

// .h stands for "header"
// it contains the declarations of things
int add1(int x);

#endif
