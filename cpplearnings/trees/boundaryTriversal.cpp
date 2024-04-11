#include <iostream>
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

void leafNodePrint(treeNode *root) {
    if (root == NULL) {
        return;
    }
    leafNodePrint(root->left);
    if (root->left == NULL && root->right == NULL) {
        cout << root->data << " ";
    }
    leafNodePrint(root->right);
}

void rightBoundaryPrint(treeNode *root) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return;
    }
    if (root->right) {
        rightBoundaryPrint(root->right);
    } else {
        rightBoundaryPrint(root->left);
    }
    cout << root->data << " ";
}

void leftBoundaryPrint(treeNode *root) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return;
    }
    cout << root->data << " ";
    if (root->left) {
        leftBoundaryPrint(root->left);
    } else {
        leftBoundaryPrint(root->right);
    }
}

void boundaryTraversal(treeNode *root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    leftBoundaryPrint(root->left);
    leafNodePrint(root);
    rightBoundaryPrint(root->right);
}

int main() {
    treeNode *root = new treeNode(3);
    root->left = new treeNode(2);
    root->right = new treeNode(1);
    root->left->left = new treeNode(4);
    root->left->right = new treeNode(5);
    root->right->left = new treeNode(6);
    root->right->right = new treeNode(7);
    boundaryTraversal(root);

    // Memory deallocation
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
