#include <iostream>
using namespace std;

int fact(int n) {
  if (n == 0)
    return 1;
  else
    return n * fact(n - 1);
}

struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right;
};

int count_leaves(TreeNode* root) {
  if (root == nullptr)
    return 0;
  else if (root->left == nullptr && root->right == nullptr)
    return 1;
  else
    return count_leaves(root->left) + count_leaves(root->right);
}

int main() {
  cout << fact(5) << endl;

  /*
   *      5
   *     / \
   *    3   8
   *   /   / \
   *   1   7 9
   */
  TreeNode* one = new TreeNode({1, nullptr, nullptr});
  TreeNode* seven = new TreeNode({7, nullptr, nullptr});
  TreeNode* nine = new TreeNode({9, nullptr, nullptr});
  TreeNode* three = new TreeNode({3, one, nullptr});
  TreeNode* eight = new TreeNode({8, seven, nine});
  TreeNode* five = new TreeNode({5, three, eight});

  TreeNode* root = five;

  cout << count_leaves(root) << endl;

  return 0;
}
