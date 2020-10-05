#include <iostream>
using namespace std;

struct Node {
  int data;    // each node holds 1 data element
  Node* next;  // and a ptr to the next node
};

int main() {
  Node* one = new Node;
  Node* two = new Node;
  Node* three = new Node;
  one->data = 1;
  two->data = 2;
  three->data = 3;
  one->next = two;
  two->next = three;
  three->next = nullptr;  // nullptr marks the end of the list

  Node* front = one;

  // let's add a 0 node to the front
  Node* zero = new Node;
  zero->data = 0;
  zero->next = one;
  front = zero;
  // just 4 lines of code no matter the length of the list!

  return 0;
}
