class Solution {
public:
    int moves = 0;

    int dfs(TreeNode* root) {

        // Base case
        if (root == nullptr) {
            return 0;
        }

        // Calculate left and right subtree balances
        int left = dfs(root->left);
        int right = dfs(root->right);

        // Count coins moved through both edges
        moves += abs(left) + abs(right);

        // Return excess or deficit of this subtree
        return root->val - 1 + left + right;
    }

    int distributeCoins(TreeNode* root) {
        moves = 0;
        dfs(root);
        return moves;
    }
};