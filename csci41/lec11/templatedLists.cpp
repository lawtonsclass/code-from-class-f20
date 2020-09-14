#include <iostream>
using namespace std;

template <class U>
struct Node {
  U data;
  Node* next;
};

// this function will add a new Node<T> to the front of a list, and
// return the new front
template <class T>
Node<T>* push_front(Node<T>* first, T dataVal) {
  // make new node
  Node<T>* newNode = new Node<T>;
  newNode->data = dataVal;
  // the new node's next is the old front
  newNode->next = first;
  // the new first is our new node, so return that
  return newNode;
}

int main() {
  Node<int>* first = nullptr;  // initially empty list
  first = push_front(first, 3);
  first = push_front(first, 2);
  first = push_front(first, 1);
  // now we have the list [1,2,3]

  for (Node<int>* n = first; n != nullptr; n = n->next) {
    cout << n->data << " ";
  }
  cout << endl;

  return 0;
}
