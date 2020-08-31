#include <iostream>
using namespace std;

// linear
int rabbitA(int N) { return 2000 * N; }

// quadratically
int rabbitB(int N) { return 2 * N * N; }

int main() {
  int day = 0;
  while (true) {
    cout << "Day " << day << ":\n";
    cout << "\tRabbit As: " << rabbitA(day) << endl;
    cout << "\tRabbit Bs: " << rabbitB(day) << endl;
    day++;
    cin.get();
  }

  return 0;
}
