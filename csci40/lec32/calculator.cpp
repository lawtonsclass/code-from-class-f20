#include <iostream>
#include <string>
using namespace std;

class Calculator {
 private:
  string currentState;
  int firstNum;
  int secondNum;
  char operation;

 public:
  Calculator();

  void press2();
  void press4();
  void press5();
  void press7();
  void pressTimes();
  int pressEquals();
};

Calculator::Calculator()
    : currentState("read first #"), firstNum(0), secondNum(0) {}

void Calculator::press2() {
  // add a 2 to our current digit
  if (currentState == "read first #") {
    firstNum = firstNum * 10 + 2;

  } else if (currentState == "read second #") {
    secondNum = secondNum * 10 + 2;
  }
}

void Calculator::press4() {
  // add a 2 to our current digit
  if (currentState == "read first #") {
    firstNum = firstNum * 10 + 4;

  } else if (currentState == "read second #") {
    secondNum = secondNum * 10 + 4;
  }
}
void Calculator::press5() {
  // add a 2 to our current digit
  if (currentState == "read first #") {
    firstNum = firstNum * 10 + 5;

  } else if (currentState == "read second #") {
    secondNum = secondNum * 10 + 5;
  }
}
void Calculator::press7() {
  // add a 2 to our current digit
  if (currentState == "read first #") {
    firstNum = firstNum * 10 + 7;

  } else if (currentState == "read second #") {
    secondNum = secondNum * 10 + 7;
  }
}

void Calculator::pressTimes() {
  if (currentState == "read first #") {
    operation = '*';
    currentState = "read second #";
  }
}
int Calculator::pressEquals() {
  if (currentState == "read second #") {
    // compute the answer
    int answer;
    if (operation == '+') {
      answer = firstNum + secondNum;
    } else if (operation == '*') {
      answer = firstNum * secondNum;
    }
    // go back to the start state
    currentState = "read first #";
    // give back the answer
    return answer;
  }
  return 42;
}

void assertTrue(bool b, string desc) {
  if (b) {
    cout << "PASSED: " << desc << endl;
  } else {
    cout << "FAILED: " << desc << endl;
  }
}

void testCalculator() {
  Calculator calc;

  // 42 * 57

  calc.press4();
  calc.press2();
  calc.pressTimes();
  calc.press5();
  calc.press7();
  int res = calc.pressEquals();
  int correctAnswer = 42 * 57;
  assertTrue(res == correctAnswer, "42 * 57");
}

int main() {
  Calculator calc;

  // 42 * 57

  calc.press4();
  calc.press2();
  calc.pressTimes();
  calc.press5();
  calc.press7();
  cout << "result: " << calc.pressEquals() << endl;

  testCalculator();

  return 0;
}
