
#include <bits/stdc++.h>
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

int searchInOrder(int inOrder[], int start, int end, int val) {
  for (int i = start; i <= end; i++) {
    if (inOrder[i] == val) {
      return i;
    }
  }
  return -1; // Element not found
}

Node *buildTreeFromPreOrderInOrder(int preOrder[], int inOrder[], int start,
                                   int end, int &preIndex) {
  if (start > end) {
    return NULL;
  }

  // Find the current root node's index in the inorder array
  int curr = searchInOrder(inOrder, start, end, preOrder[preIndex]);

  // Create the root node
  Node *ele = new Node(preOrder[preIndex++]);

  // Construct left and right subtrees recursively
  ele->left = buildTreeFromPreOrderInOrder(preOrder, inOrder, start, curr - 1,
                                           preIndex);
  ele->right =
      buildTreeFromPreOrderInOrder(preOrder, inOrder, curr + 1, end, preIndex);

  return ele;
}

void inorderTraversal(Node *root) {
  if (root == NULL) {
    return;
  }
  inorderTraversal(root->left);
  cout << root->data << " ";
  inorderTraversal(root->right);
}

int main() {
  int preorder[] = {1, 2, 4, 3, 5};
  int inorder[] = {4, 2, 1, 5, 3};
  int n = sizeof(preorder) / sizeof(preorder[0]);

  int preIndex = 0;
  Node *root =
      buildTreeFromPreOrderInOrder(preorder, inorder, 0, n - 1, preIndex);

  // Print the constructed tree (for verification)
  cout << "Inorder Traversal of the constructed tree: ";
  cout << endl;

  return 0;
}

// https://www.youtube.com/watch?v=HJKoNLGRnYk&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=93&t=17s
