#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class treeNode {
public:
  int data;
  treeNode *left;
  treeNode *right;
  treeNode(int d) {
    data = d;
    left = NULL;
    right = NULL;
  }
};
int heightOfTree(treeNode *root) {
  if (root == NULL) {
    return 0;
  }
  int leftSideHeightOfTree = heightOfTree(root->left) + 1;
  int rightSideHeightOfTree = heightOfTree(root->right) + 1;
  if (leftSideHeightOfTree > rightSideHeightOfTree)
    return leftSideHeightOfTree;
  return rightSideHeightOfTree;
}
int main() {
  treeNode *root = new treeNode(4);
  root->left = new treeNode(2);
  root->right = new treeNode(3);
  root->left->left = new treeNode(4);
  root->left->right = new treeNode(5);
  root->right->left = new treeNode(6);
  root->right->right = new treeNode(7);
  // root->left->left->left = new treeNode(8);
  // root->left->left->left->left = new treeNode(8);
  root->left->left->right = new treeNode(9);
  cout << heightOfTree(root);
}
