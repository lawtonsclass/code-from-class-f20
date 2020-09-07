#include <iostream>
using namespace std;

// Nodes make up the Linked List data structure
struct Node {
  int data;    // this linked list holds int data
  Node* next;  // the address of the next Node in the list
};

void printInOrder(Node* n) {
  // base case
  if (n == nullptr) return;  // there's nothing to print for an empty list
  // recursive case
  cout << n->data << endl;
  printInOrder(n->next);  // print the smaller list recursively
}

void printReverse(Node* n) {
  // base case
  if (n == nullptr) return;  // there's nothing to print for an empty list
  // recursive case
  printReverse(n->next);  // print the smaller list recursively
  cout << n->data << endl;
}

bool search(Node* n, int toSearchFor) {
  // there's nothing in an empty list--we couldn't have found
  // the thing
  if (n == nullptr) return false;
  // recursive case
  // search the smaller list, recursively
  // also check if it's in our first element
  return (n->data == toSearchFor) || search(n->next, toSearchFor);
}

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

  // let's recursively print our list in order
  printInOrder(first);
  cout << endl;
  // in reverse order
  printReverse(first);
  cout << endl;

  // search for 3
  cout << search(first, 3) << endl;
  // search for 1
  cout << search(first, 1) << endl;
  // search for 0
  cout << search(first, 0) << endl;

  return 0;
}
