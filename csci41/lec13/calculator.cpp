#include <iostream>
#include <stack>
using namespace std;

int main() {
  // make operand stack
  stack<int> s;

  while (true) {
    // ask the user if they want to quit, type a #, or type an
    // operator
    cout << "Type q to quit, n to enter a #, or o to enter an operator: ";
    char choice;
    cin >> choice;

    if (choice == 'q')
      break;
    else if (choice == 'n') {
      int n;
      cout << "Enter the number: ";
      cin >> n;
      // push it to the operand stack now
      s.push(n);
    } else {
      // choice was o
      char op;
      cout << "Enter the operator: ";
      cin >> op;

      // we'll always pop the stack twice; let's do that now
      int secondOperand = s.top();
      s.pop();
      int firstOperand = s.top();
      s.pop();

      int result;

      if (op == '+')
        result = firstOperand + secondOperand;
      else if (op == '-')
        result = firstOperand - secondOperand;
      else if (op == '*')
        result = firstOperand * secondOperand;
      else
        result = firstOperand / secondOperand;

      // push the result back on the operand stack
      s.push(result);
    }
  }

  // print the result on the stack
  if (s.size() == 1) {
    cout << "Result: " << s.top() << endl;
  } else {
    cout << "More than one thing left on the stack--something is wrong."
         << endl;
  }

  return 0;
}
