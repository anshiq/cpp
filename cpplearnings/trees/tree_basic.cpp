#include <bits/stdc++.h>
#include <cstddef>
using namespace std;
class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int val) {
    data = val;
    left = NULL;
    right = NULL;
  }
};
void preOrder(Node *tree) {
  if (tree == NULL) {
    return;
  }
  cout << tree->data << " ";
  preOrder(tree->left);
  preOrder(tree->right);
  return;
}
void inOrder(Node *tree) {
  if (tree == NULL) {
    return;
  }
  preOrder(tree->left);
  cout << tree->data << " ";
  preOrder(tree->right);
  return;
}
void postOrder(Node *tree) {
  if (tree == NULL) {
    return;
  }
  preOrder(tree->left);
  preOrder(tree->right);
  cout << tree->data << " ";
  return;
}
int main() {
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  root->left->left->left = new Node(8);
  root->left->left->right = new Node(9);
  cout << "preorder: ";
  preOrder(root);
  cout << endl;
  cout << "inorder: ";
  inOrder(root);
  cout << endl;
  cout << "postorder: ";
  postOrder(root);
  cout << endl;
}
