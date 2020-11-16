#include <iostream>
using namespace std;

class Holder {
 public:
  Holder(int val) { x = new int(val); }

  ~Holder() { delete x; }

  Holder(const Holder& other) { x = new int(*other.x); }

  Holder& operator=(const Holder& other) {
    if (&other == this) return *this;

    delete x;
    x = new int(*other.x);
    return *this;
  }

  Holder operator+(const Holder& other) const {
    Holder ret(*x + *other.x);
    return ret;
  }

  // move constructor
  Holder(Holder&& other) {
    cout << "about to move construct a holder with *x = " << *other.x << endl;
    /* x = other.x;  // steal other's x */
    // the line above is fine, but if you wanted to be extra pedantic,
    // you can say
    x = move(other.x);  // steal other's x
    // put other into a state that's safe to be deleted
    // (because its destructor is about to get called)
    other.x = nullptr;  // now other's destructor won't delete the thing we just
                        // stole!
  }

  // move assignment operator
  Holder& operator=(Holder&& other) {
    cout << "about to move assign a holder with *x = " << *other.x << endl;
    if (this == &other) return *this;

    // delete ourselves; we're about to replace our stuff
    delete x;
    x = move(other.x);  // steal x's stuff
    other.x = nullptr;
    return *this;
  }

  int getX() const { return *x; }

 private:
  int* x;  // x lives on the heap
};

Holder function_returning_Holder() { return Holder(44); }

int main() {
  Holder x(42), y(43);
  Holder h1(x);
  // we'd like this to use the move constructor
  Holder h2(move(x + y));
  Holder h3(0);
  // we'd like this to use the move assignment operator
  h3 = function_returning_Holder();

  return 0;
}
