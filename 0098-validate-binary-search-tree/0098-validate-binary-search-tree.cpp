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
    bool dfs(TreeNode*root,long long leftvalue,long long rightvalue){
        if(!root)return true;
        if(root->val <=leftvalue || root->val>=rightvalue)return false;
        return dfs(root->left,leftvalue,root->val) && dfs(root->right,root->val,rightvalue);
    }
    bool isValidBST(TreeNode* root) {
        return dfs(root,LLONG_MIN,LLONG_MAX);
    }
};