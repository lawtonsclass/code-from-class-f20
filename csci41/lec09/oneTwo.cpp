#include <iostream>
using namespace std;

struct Node {
  int data;    // this linked list holds int data
  Node* next;  // the address of the next Node in the list
};

int main() {
  Node n;  // a node on the stack -- it's not a problem to do this, but we tend
           // to make our Nodes on the heap instead

  // [1, 2] using Nodes
  Node* one = new Node;
  Node* two = new Node;
  (*one).data = 1;
  one->next = two;
  two->data = 2;
  two->next = nullptr;

  Node* first = one;
  Node* last = two;

  return 0;
}
