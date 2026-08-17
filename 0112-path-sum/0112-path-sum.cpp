class Solution {
    bool check(TreeNode* root, int targetSum) {
        if (root == NULL)
            return false;

        if (root->left == NULL && root->right == NULL) {
            return root->val == targetSum;
        }

        return check(root->left, targetSum - root->val) ||
               check(root->right, targetSum - root->val);
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return false;

        return check(root, targetSum);
    }
};