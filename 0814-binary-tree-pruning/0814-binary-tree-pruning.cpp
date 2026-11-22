class Solution {
public:

    TreeNode* dfs(TreeNode* root) {

        if (root == nullptr) {
            return nullptr;
        }

        // Prune left and right subtrees
        root->left = dfs(root->left);
        root->right = dfs(root->right);

        // Remove current node if it is a zero leaf
        if (root->val == 0 &&
            root->left == nullptr &&
            root->right == nullptr) {

            return nullptr;
        }

        return root;
    }

    TreeNode* pruneTree(TreeNode* root) {
        return dfs(root);
    }
};