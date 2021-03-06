/**
 *  Solution to: https://leetcode.com/problems/maximum-depth-of-binary-tree/
 *   Definition for a binary tree node.
 *    struct TreeNode {
 *       int val;
 *          TreeNode *left;
 *           TreeNode *right;
 *            TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *        };
 */
class Solution {
  public:
    int maxDepth(TreeNode* root) {
      if (root == NULL)
        return 0;
      if (root->left == NULL && root->right == NULL)
        return 1;
      return max(maxDepth(root->left) + 1, maxDepth(root->right) + 1);
    }
};
