#include <iostream>
using namespace std;

struct TreeNode {
  int key;
  string val;
  TreeNode* left;
  TreeNode* right;
  TreeNode* parent;
};

// recursive search
// recursive case: try to find 4 in a smaller subtree, and then check
// the root
// base case: empty tree: return false, since x can't be in an empty
// tree
bool search(TreeNode* root, int x) {
  if (root == nullptr) {
    // empty tree
    return false;
  }

  // check the entire tree (checking the subtrees recursively)
  return search(root->left, x) || search(root->right, x) || root->key == x;
}

void deleteTree(TreeNode* root) {
  if (root == nullptr) {
    // nothing to delete
    return;
  }

  // recursively delete left subtree
  deleteTree(root->left);
  // same for right
  deleteTree(root->right);
  // delete our root to finish the entire tree off
  delete root;
}

int main() {
  /*
   *
   *       1
   *      / \
   *     2   3
   *      \
   *       4
   *
   *
   * */
  TreeNode* one = new TreeNode;
  TreeNode* two = new TreeNode;
  TreeNode* three = new TreeNode;
  TreeNode* four = new TreeNode;
  one->key = 1;
  one->val = "asdf";
  two->key = 2;
  two->val = "asdf";
  three->key = 3;
  three->val = "asdf";
  four->key = 4;
  four->val = "asdf";
  one->left = two;
  one->right = three;
  one->parent = nullptr;
  two->right = four;
  two->left = four->left = four->right = three->left = three->right = nullptr;
  four->parent = two;
  two->parent = one;
  three->parent = one;

  TreeNode* root = one;
  /*
   *
   *       1
   *      / \
   *     2   3
   *      \
   *       4
   *
   *
   * */

  // print each node, since we know where they are
  cout << root->key << endl;
  cout << root->left->key << endl;
  cout << root->right->key << endl;
  cout << root->left->right->key << endl;

  cout << search(root, 4) << endl;
  cout << search(root, 5) << endl;

  deleteTree(root);

  return 0;
}
