#include <iostream>
using namespace std;

// option 1: return a special value if there's an error and yell at
// the user through cout
int divide_opt1(int x, int y) {
  if (y == 0) {
    cout << "Hey man, you tried to divide by 0!\n";
    return 0;
  }
  return x / y;
}

struct AnswerPair {
  int res;
  bool didSomethingGoWrong;
};

// option 2: return a pair instead of just the answer
// the results's .res holds the result if .didSomethingGoWrong ==
// false
AnswerPair divide_opt2(int x, int y) {
  if (y == 0) {
    return {0, true};
  }
  return {x / y, false};
};

// option 3: either use a global variable or pass along a
// reference/pointer to a boolean variable
// set the bool var to true / false after each computation
int divide_opt3(int x, int y, bool& didSomethingGoWrong) {
  if (y == 0) {
    didSomethingGoWrong = true;
    return 0;
  }
  didSomethingGoWrong = false;
  return x / y;
};

int main() {
  int res1 = divide_opt1(5, 0);
  cout << res1 << endl;

  // the issue with opt1 is you (the caller of the func) can't tell
  // when something went wrong
  int res2 = divide_opt1(0, 5);
  // res2 == 0, and no problem occurred

  AnswerPair res3 = divide_opt2(5, 0);
  AnswerPair res4 = divide_opt2(0, 5);
  // upside: I can differentiate res3 and res4 as the caller
  // downside: this is very tedious!
  // if I want to use res4, I need to first check that
  // res4.didSomethingGoWrong == false, and then pick out res4.res
  // You end up with a ton of if statements to make sure all your
  // divisions went right

  bool didItWork;
  int res5 = divide_opt3(5, 0, didItWork);  // will set didItWork to false
  int res6 = divide_opt3(0, 5, didItWork);  // will set didItWork to true
  // still have to test didItWork each time you want to use the answer
  // downsides: gotta make an extra var, pass it along, remember to
  // check it each time before it gets overwritten

  // extra downsides: you have to pass along the fact that something
  // went wrong to whoever needs to know. Maybe main needs to know,
  // but the computation happens inside of foo (who's inside bar,
  // who's inside baz, ...)

  return 0;
}
