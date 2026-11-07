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
    TreeNode* buildTree(vector<int>& preorder,
                        vector<int>& inorder) {

        unordered_map<int, int> mp;

        // Store inorder values and their indices
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        int preIndex = 0;

        return solve(preorder, inorder, mp,
                     preIndex, 0, inorder.size() - 1);
    }

    TreeNode* solve(vector<int>& preorder,
                    vector<int>& inorder,
                    unordered_map<int, int>& mp,
                    int& preIndex,
                    int start,
                    int end) {

        // Base case
        if (start > end) {
            return NULL;
        }

        // Preorder gives the root
        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);

        // Find root position in inorder
        int inIndex = mp[rootVal];

        // Build left subtree
        root->left = solve(preorder, inorder, mp,
                           preIndex, start, inIndex - 1);

        // Build right subtree
        root->right = solve(preorder, inorder, mp,
                            preIndex, inIndex + 1, end);

        return root;
    }
};