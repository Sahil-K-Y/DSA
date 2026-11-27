/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

// Morris Inorder Traversal
// Time: O(N)
// Auxiliary space: O(1) (excluding the output vector)
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr = root;

        while (curr != nullptr) {
            // If there is no left subtree, visit curr and move right.
            if (curr->left == nullptr) {
                ans.push_back(curr->val);
                curr = curr->right;
            } else {
                // Find the inorder predecessor of curr.
                TreeNode* pred = curr->left;
                while (pred->right != nullptr && pred->right != curr) {
                    pred = pred->right;
                }

                // First visit to curr: create a temporary thread.
                if (pred->right == nullptr) {
                    pred->right = curr;
                    curr = curr->left;
                } else {
                    // Returning to curr: remove the thread, then visit curr.
                    pred->right = nullptr;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }

        return ans;
    }
};
