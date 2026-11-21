
class Solution {
public:
    pair<int, int> solve(TreeNode* root) {
        if (root == nullptr) {
            return {0, 0};
        }

        // Left and right subtree results
        auto left = solve(root->left);
        auto right = solve(root->right);

        // Choice 1: Rob current node
        int rob = root->val + left.second + right.second;

        // Choice 2: Skip current node
        int skip = max(left.first, left.second)
                 + max(right.first, right.second);

        return {rob, skip};
    }

    int rob(TreeNode* root) {
        auto ans = solve(root);
        return max(ans.first, ans.second);
    }
};
