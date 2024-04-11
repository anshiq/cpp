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
void MorrisTraversal(Node *&root) {
  if (root == NULL) {
    return;
  }
  Node *curr = root;
  while (curr != NULL) {
    if (curr->left == NULL) {
      cout << curr->data << " ";
      curr = curr->right;
    } else {
      Node *prev = curr->left;
      while (prev->right && prev->right != curr) {
        prev = prev->right;
      }
      if (prev->right == NULL) {
        prev->right = curr;
        curr = curr->right;
      } else {
        prev->right = NULL; // we are in else because the prev is comming from
                            // inside of while loop; rightmost node of currecnt;
        // https://www.youtube.com/watch?v=80Zug6D1_r4&t=1256s
        cout << prev->data << " ";
        curr = curr->right;
      }
    }
  }
}
int main() {}
