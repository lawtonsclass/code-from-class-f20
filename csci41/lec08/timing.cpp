#include <ctime>
#include <iostream>
using namespace std;

void foo() {
  long long sum = 0;
  for (long long i = 0; i < 10000000000; i++) sum += i;
}

int main() {
  clock_t start = clock();

  foo();

  clock_t end = clock();

  double elapsed = static_cast<double>(end - start) / CLOCKS_PER_SEC;

  cout << "Time elapsed: " << elapsed << endl;

  return 0;
}
