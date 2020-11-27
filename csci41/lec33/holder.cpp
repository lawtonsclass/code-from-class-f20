#include <iostream>
using namespace std;

class HolderArr {
 private:
  int* arr;  // ptr to array
  int size;

 public:
  HolderArr(int size) {
    // make array on heap
    arr = new int[size];
    this->size = size;
  }

  HolderArr(const HolderArr& other) {
    // deep copy other's arr
    size = other.size;
    arr = new int[size];

    // copy everything from other into our current arr
    for (int i = 0; i < size; i++) {
      arr[i] = other.arr[i];
    }
  }

  HolderArr& operator=(const HolderArr& other) {
    // watch out for self-assignment
    if (this == &other) return *this;  // nothing left to do

    // delete our current arr
    delete[] arr;

    // deep copy other's arr
    size = other.size;
    arr = new int[size];

    // copy everything from other into our current arr
    for (int i = 0; i < size; i++) {
      arr[i] = other.arr[i];
    }
    return *this;
  }

  ~HolderArr() {
    // delete arr
    delete[] arr;
  }
};

int main() {
  HolderArr h(42);
  HolderArr h2(h);
  HolderArr h3(43);
  h3 = h2;
  h2 = h2;

  return 0;
}
