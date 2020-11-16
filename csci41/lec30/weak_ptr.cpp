#include <iostream>
#include <memory>
using namespace std;

struct Node {
  int data;
  shared_ptr<Node> next;
  weak_ptr<Node> next_weak;

  // structs can have destructors! (shh don't tell the C programmers)
  ~Node() { cout << "destructor: Node with data = " << data << endl; }
};

int main() {
  shared_ptr<Node> one = make_shared<Node>();
  shared_ptr<Node> two = make_shared<Node>();
  shared_ptr<Node> three = make_shared<Node>();
  one->data = 1;
  two->data = 2;
  three->data = 3;
  one->next = two;
  two->next = three;
  three->next_weak = one;

  return 0;
}
