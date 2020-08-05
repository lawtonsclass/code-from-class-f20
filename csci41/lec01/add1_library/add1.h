// this keeps add1.h from being included multiple times, or being
// infinitely included
// anything that starts with # is a "preprocessor directive"
#ifndef ADD1_H
#define ADD1_H

// this is all the information main needs to be able to use the
// function add1
int add1(int x);

#endif
