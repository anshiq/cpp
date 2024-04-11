class Solution {
public:
  int height(TreeNode *root) {
    if (root == NULL)
      return 0;
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;
    return ans;
  }
  int diameterOfBinaryTree(TreeNode *root) {
    if (root == NULL)
      return 0;
    int leftSideOfTree = diameterOfBinaryTree(root->left);
    int rightSide = diameterOfBinaryTree(root->right);
    int option3 = height(root->left) + height(root->right);
    int ans = max(option3, max(leftSideOfTree, rightSide));
    return ans;
  }
};
