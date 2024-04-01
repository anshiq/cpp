#include <bits/stdc++.h>
#include <iostream>
#include <utility>
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
pair<int, int> sumOfLongestSubTree(treeNode *root) {
  if (root == NULL) {
    pair<int, int> k = {0, 0};
    return k;
  }
  pair<int, int> left = sumOfLongestSubTree(root->left);
  pair<int, int> right = sumOfLongestSubTree(root->right);

  left.first += 1;
  right.first += 1;
  if (left.first > right.first) {
    left.second += root->data;
    return left;
  }
  if (left.first == right.first) {
    if (left.second > right.second) {
      left.second += root->data;
      return left;
    }
    right.second += root->data;
    return right;
  }
  right.second += root->data;
  return right;
}
int main() {
  treeNode *root = new treeNode(4);
  root->left = new treeNode(2);
  root->right = new treeNode(3);
  root->left->left = new treeNode(4);
  root->left->right = new treeNode(5);
  root->right->left = new treeNode(6);
  root->right->right = new treeNode(7);
  root->right->right->right = new treeNode(7);
  int sum = 0;
  pair<int, int> l = sumOfLongestSubTree(root);
  cout << "sum" << l.second << " height" << l.first;
}
