#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

// search for x in the (sub-)list represented by first
// return pointer to the Node if we find it
Node* search(Node* first, int x) {
  // nothing is ever in an empty list--return nullptr
  if (first == nullptr) return nullptr;

  // recursive case: search the rest of the list, consider the first
  // node too
  if (first->data == x)
    return first;  // either the value is in the front of the list
  else
    // or recursively search the rest of the list
    // it'll return a valid pointer if it finds it,
    // or nullptr if not
    return search(first->next, x);
}

void deleteList(Node* first) {
  // base case: empty list; no nodes to delete
  if (first == nullptr) return;

  // recursive case:
  // delete rest of the list
  deleteList(first->next);
  // delete the one node that the recursion didn't touch
  delete first;
}

int main() {
  Node* one = new Node;
  Node* two = new Node;
  Node* three = new Node;

  one->data = 1;
  two->data = 2;
  three->data = 3;

  one->next = two;
  two->next = three;
  three->next = nullptr;

  // first is one, last is three
  Node* first = one;
  Node* last = three;

  Node* curNode = first;
  while (curNode != nullptr) {
    // add one to data
    curNode->data += 1;
    // advance curNode pointer
    curNode = curNode->next;
  }

  // print out the list
  for (Node* n = first; n != nullptr; n = n->next) {
    cout << n->data << " ";
  }
  cout << endl;

  // the list is currently [2, 3, 4]
  cout << search(first, 4)->data << endl;
  cout << search(first, 2)->data << endl;
  cout << search(first, 5) << endl;

  deleteList(first);

  return 0;
}
