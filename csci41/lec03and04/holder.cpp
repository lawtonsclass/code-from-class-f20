#include <algorithm>  // for std::sort
#include <iostream>
#include <vector>
using namespace std;

class Holder {
 public:
  Holder(int x) : val(x) {}
  int getVal() const { return val; }

 private:
  int val;
};

// comparison class
class HolderCompare {
 public:
  bool shouldSortAscending;

  // operator() is what we are required to implement
  // it's like you're calling an object of this class as a function
  bool operator()(const Holder& x, const Holder& y) {
    // return true if x should come before y
    // it's like you're making your own custom < operation
    if (shouldSortAscending)
      return x.getVal() < y.getVal();
    else
      return x.getVal() > y.getVal();
  }
};

int main() {
  vector<Holder> v = {Holder(1), Holder(3), Holder(2)};
  // option 1: implment operator< for Holder
  // option 2: comparison function
  // option 3: comparison class

  HolderCompare hc;
  hc.shouldSortAscending = true;
  std::sort(v.begin(), v.end(), hc);
  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i).getVal() << " ";
  }
  cout << endl;

  hc.shouldSortAscending = false;
  std::sort(v.begin(), v.end(), hc);
  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i).getVal() << " ";
  }
  cout << endl;

  return 0;
}
