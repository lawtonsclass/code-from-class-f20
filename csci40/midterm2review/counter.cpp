#include <iostream>
using namespace std;

class Counter {
 public:
  Counter(int c = 0);  // constructor
  void inc();
  // getter/accessor: gives back the count
  // const because it doesn't change anything
  int getCount() const;

 private:
  // usually, all your member vars are private
  int count;
};

Counter::Counter(int c) : count(c) {
  /* count = c; could also set count here */
  cout << "Counter constructor called\n";
}

void Counter::inc() { count++; }

int Counter::getCount() const { return count; }

int main() {
  Counter c;  // calls default constructor
  c.inc();
  c.inc();
  c.inc();

  cout << c.getCount() << endl;

  Counter c2(42);  // calls constructor with c = 42
  c2.inc();
  c2.inc();
  c2.inc();

  cout << c2.getCount() << endl;

  return 0;
}
