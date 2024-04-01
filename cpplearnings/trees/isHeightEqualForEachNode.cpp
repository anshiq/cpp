#include <bits/stdc++.h>
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

bool isHeightEqualForEveryNode(treeNode *root) {
  if (root == NULL) {
    return true;
  }
  int leftHeight = heightOfTree(root->left);
  int rightHeight = heightOfTree(root->right);
  if (leftHeight != rightHeight) {
    return false;
  }
  return isHeightEqualForEveryNode(root->left) &&
         isHeightEqualForEveryNode(root->right);
}

int main() {
  treeNode *root = new treeNode(4);
  root->left = new treeNode(2);
  root->right = new treeNode(3);
  root->left->left = new treeNode(4);
  root->left->right = new treeNode(5);
  root->right->left = new treeNode(6);
  // root->right->right = new treeNode(7);

  cout << isHeightEqualForEveryNode(root) << endl;
  return 0;
}
