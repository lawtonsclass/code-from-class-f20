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

// it's possible that the root is initially empty--if that's true we
// need to change the root itself to be the node that we insert
void insert(TreeNode*& root, int key) {
  // search to see where to insert. If we don't find it, make a new
  // node and put in the spot where the search process led us to.

  // if the tree is empty--special case
  if (root == nullptr) {
    // the root needs to be this new node
    TreeNode* new_node = new TreeNode;
    new_node->data = key;
    new_node->left = new_node->right = nullptr;
    new_node->parent = nullptr;
    root = new_node;
    return;  // no more work to do!
  }

  // if the tree wasn't empty, we need to search for where to put this
  // new node
  TreeNode* n = root;
  while (n != nullptr) {
    if (key < n->data) {
      // go to the left

      // if n->left is null, I need to insert here
      if (n->left == nullptr) {
        // insert a new node at n->left
        TreeNode* new_node = new TreeNode;
        new_node->data = key;
        new_node->left = new_node->right = nullptr;  // since it's a leaf
        new_node->parent = n;
        n->left = new_node;
        return;  // no more work to do!
      } else {
        // otherwise, I need to advance n to be n->left
        n = n->left;
      }
    } else if (key > n->data) {
      // go to the right

      // if n->right is null, I need to insert here
      if (n->right == nullptr) {
        // insert a new node at n->right
        TreeNode* new_node = new TreeNode;
        new_node->data = key;
        new_node->left = new_node->right = nullptr;
        new_node->parent = n;
        n->right = new_node;
        return;  // no more work to do!
      } else {
        // otherwise, I need to advance n to be n->right
        n = n->right;
      }
    } else {
      // the key was already in the tree!
      // stop because we don't want duplicates
      return;
    }
  }
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

  insert(root, 5);
  cout << search(root, 5) << endl;
  cout << root->left->right->right->data << endl;

  return 0;
}
