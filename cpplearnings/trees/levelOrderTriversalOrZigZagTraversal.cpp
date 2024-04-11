#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
class treeNode {
public:
  int data;
  treeNode *left;
  treeNode *right;
  treeNode(int k) {
    data = k;
    left = NULL;
    right = NULL;
  }
};
void zigzagTriversal(treeNode *root) {
  if (root == NULL) {
    return;
  }
  vector<int> answer;
  queue<treeNode *> storeEachLevel;
  bool leftToRight = true;
  storeEachLevel.push(root);
  while (!storeEachLevel.empty()) {
    int size = storeEachLevel.size();
    vector<int> levelAnswer(size);
    // triverse level
    for (int i = 0; i < size; i++) {
      treeNode *frontNode = storeEachLevel.front();
      storeEachLevel.pop();
      if (leftToRight) {
        levelAnswer[i] = frontNode->data;
      } else {
        levelAnswer[size - i - 1] = frontNode->data;
      }
      if (frontNode->left)
        storeEachLevel.push(frontNode->left);
      if (frontNode->right)
        storeEachLevel.push(frontNode->right);
    }
    // switching direction
    leftToRight = !leftToRight;
    for (auto i : levelAnswer) {
      answer.push_back(i);
    }
  }
  for (auto i : answer) {
    cout << i << " ";
  }
}
int main() {
  treeNode *root = new treeNode(3);
  root->left = new treeNode(2);
  root->right = new treeNode(1);
  // root->left->left = new treeNode(4);
  // root->left->right = new treeNode(5);
  // root->right->left = new treeNode(6);
  // root->right->right = new treeNode(7);
  zigzagTriversal(root);
}
