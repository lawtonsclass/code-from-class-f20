#include <iostream>
using namespace std;

struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right;
  TreeNode* parent;
};

TreeNode* search(TreeNode* root, int searchValue) {
  TreeNode* n = root;
  while (n != nullptr) {
    if (searchValue < n->data) {
      // go left
      n = n->left;
    } else if (searchValue > n->data) {
      // go right
      n = n->right;
    } else {
      // found it--it's in n
      return n;
    }
  }
  // if we got here, we didn't find it
  return n;  // n is guaranteed to be nullptr
}

int main() {
  TreeNode* fifty = new TreeNode;
  TreeNode* twentyfive = new TreeNode;
  TreeNode* seventyfive = new TreeNode;
  TreeNode* twelve = new TreeNode;
  TreeNode* thirtythree = new TreeNode;
  fifty->left = fifty->right = fifty->parent = nullptr;
  twentyfive->left = twentyfive->right = twentyfive->parent = nullptr;
  seventyfive->left = seventyfive->right = seventyfive->parent = nullptr;
  twelve->left = twelve->right = twelve->parent = nullptr;
  thirtythree->left = thirtythree->right = thirtythree->parent = nullptr;
  fifty->data = 50;
  twentyfive->data = 25;
  seventyfive->data = 75;
  twelve->data = 12;
  thirtythree->data = 33;
  fifty->left = twentyfive;
  fifty->right = seventyfive;
  twentyfive->left = twelve;
  twentyfive->right = thirtythree;
  thirtythree->parent = twentyfive;
  twelve->parent = twentyfive;
  twentyfive->parent = fifty;
  seventyfive->parent = fifty;

  TreeNode* root = fifty;

  cout << search(root, 33)->data << endl;
  cout << search(root, 32) << endl;

  return 0;
}
