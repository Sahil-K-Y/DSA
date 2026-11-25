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
    void add(TreeNode* root, int val) {
        TreeNode* node = root;
        TreeNode* pre = nullptr;
        
        while (node) {
            pre = node;
            if (node->val < val) {
                node = node->right;
            } else {
                node = node->left;
            }
        }
        
        if (pre->val < val) {
            pre->right = new TreeNode(val);
        } else {
            pre->left = new TreeNode(val);
        }
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (!root) return new TreeNode(val);
        add(root, val);
        return root;
    }
};