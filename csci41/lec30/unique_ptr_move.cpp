#include <iostream>
#include <memory>
#include <utility>
using namespace std;

int main() {
  unique_ptr<int> up = make_unique<int>(42);
  unique_ptr<int> up2 = move(up);

  cout << up.get() << endl;

  return 0;
}
