class Solution {
public:

    TreeNode* fetch(TreeNode* root, int val)
    {
        if(root == NULL)
            return NULL;

        if(root->val == val)
            return root;

        if(val > root->val)
            return fetch(root->right, val);
        else
            return fetch(root->left, val);
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        return fetch(root, val);
    }
};