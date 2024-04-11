#include <iostream>
using namespace std;
class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int d) {
    data = d;
    left = NULL;
    right = NULL;
  }
};
Node *buildBST(int data, Node *&root) {
  if (root == NULL) {
    root = new Node(data);
    return root;
  }

  if (data < root->data) {
    root->left = buildBST(data, root->left);
  } else if (data > root->data) {
    root->right = buildBST(data, root->right);
  } else {
    // Duplicate value, can't insert in a binary search tree
    return root;
  }

  return root;
}
int main() {}
