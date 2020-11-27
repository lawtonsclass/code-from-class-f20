#include <iostream>
#include <vector>
using namespace std;

int main() {
  int x = 42;
  int* p1 = &x;  // p1 points to x
  int* p2 = &x;
  int** p3 = &p1;   // p3 points to p1 (who points to x)
  int*** p4 = &p3;  // p4 points to p3 (who points to p1 (who points to x))

  x++;
  (*p1)++;
  (*p2)++;
  (**p3)++;
  (***p4)++;

  cout << x << endl;
  cout << p3 << endl;

  vector<int> v = {1, 2, 3};
  vector<int>* vp = &v;

  cout << (*vp).size() << endl;
  cout << vp->size() << endl;

  return 0;
}
