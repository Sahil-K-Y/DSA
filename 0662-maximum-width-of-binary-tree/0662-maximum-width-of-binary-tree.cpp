/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;

        long long ans = 0;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        while (!q.empty()) {
            int n = q.size();

            long long st = q.front().second;
            long long end = q.back().second;

            ans = max(ans, end - st + 1);

            for (int i = 0; i < n; i++) {
                auto [curr, index] = q.front();
                q.pop();

                long long ind = index - st;

                if (curr->left)
                    q.push({curr->left, 2 * ind + 1});

                if (curr->right)
                    q.push({curr->right, 2 * ind + 2});
            }
        }

        return static_cast<int>(ans);
    }
};