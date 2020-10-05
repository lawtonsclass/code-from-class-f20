#include <iostream>
using namespace std;

struct TreeNode {
  int data;
  TreeNode* left;  // potentially your left child
  TreeNode* right;
  TreeNode* parent;
};

int main() {
  TreeNode* fortyTwo = new TreeNode;
  TreeNode* three = new TreeNode;
  TreeNode* four = new TreeNode;
  TreeNode* seven = new TreeNode;

  fortyTwo->data = 42;
  three->data = 3;
  four->data = 4;
  seven->data = 7;

  // let's set up the left & right pointers
  fortyTwo->left = three;
  fortyTwo->right = four;
  three->left = nullptr;
  three->right = nullptr;
  four->left = seven;
  four->right = nullptr;
  seven->left = nullptr;
  seven->right = nullptr;

  // let's also add the parent pointers
  fortyTwo->parent = nullptr;
  three->parent = four->parent = fortyTwo;
  seven->parent = four;

  TreeNode* root = fortyTwo;          // the 42 node is the root
  cout << root->data << endl;         // 42
  cout << root->left->data << endl;   // 3
  cout << root->right->data << endl;  // 4

  return 0;
}
