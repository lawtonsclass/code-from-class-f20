#include <iostream>
using namespace std;

// Nodes make up the Linked List data structure
struct Node {
  int data;    // this linked list holds int data
  Node* next;  // the address of the next Node in the list
};

int main() {
  // [1, 2, 3] using Nodes
  Node* one = new Node;
  Node* two = new Node;
  Node* three = new Node;
  (*one).data = 1;
  one->next = two;
  two->data = 2;
  two->next = three;
  three->data = 3;
  three->next = nullptr;  // end of the list

  Node* first = one;
  Node* last = three;

  // let's iterate through this list!!!
  // we'll keep track of where we are currently using a Node pointer

  // while loop iteration
  Node* n = first;        // start iterating from the first Node in the list
  while (n != nullptr) {  // while we still have a Node to look at
    // process the Node
    cout << n->data << " ";
    // advance n to the next place in the list
    n = n->next;
  }
  cout << endl << endl;

  // for loop iteration
  for (Node* n = first; n != nullptr; n = n->next) {
    cout << n->data << " ";
  }

  return 0;
}
