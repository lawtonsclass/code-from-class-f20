#include <iostream>
using namespace std;

struct TreeNode {
  int data;
  TreeNode* left;  // potentially your left child
  TreeNode* right;
  TreeNode* parent;
};

bool search(TreeNode* root, int key) {
  // search from the root for a key
  // keep searching as long as we haven't hit the bottom of the tree
  while (root != nullptr) {
    if (key < root->data) {
      /* go left */
      root = root->left;  // now search the left subtree
    } else if (key > root->data) {
      /* go right */
      root = root->right;  // now search the left subtree
    } else {
      // found it!
      return true;
    }
  }
  // if we ever get here, we couldn't find the key
  return false;
}

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
  seven->left = three;
  seven->right = fortyTwo;
  fortyTwo->left = nullptr;
  fortyTwo->right = nullptr;
  three->left = nullptr;
  three->right = four;
  four->left = nullptr;
  four->right = nullptr;

  // let's also add the parent pointers
  fortyTwo->parent = seven;
  three->parent = seven;
  four->parent = three;
  seven->parent = nullptr;

  TreeNode* root = seven;

  cout << search(root, 42) << endl;
  cout << search(root, 5) << endl;

  return 0;
}
