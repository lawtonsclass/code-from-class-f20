#include <iostream>
#include <stdexcept>
using namespace std;

// no more returning weird numbers or setting silly flags!!!
int divide(int x, int y) {
  // in the exceptional case, you don't have to return
  // anything--you'll jump to the closest catch block anyways
  if (y == 0)
    throw runtime_error("divide by 0");
  else
    return x / y;
}

int main() {
  try {
    cout << divide(5, 0) << endl;
    /* cout << divide(0, 5) << endl; */
  } catch (runtime_error& e) {
    cout << "caught a runtime_error in main: " << e.what() << endl;
  }

  return 0;
}
