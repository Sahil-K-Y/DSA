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
    int count(TreeNode*root){
        if(!root){
            return 0;
        }
        int lt=count(root->left);
        int rt=count(root->right);
        return 1+lt+rt;
    }
    int countNodes(TreeNode* root) {
        return count(root);
    }
};