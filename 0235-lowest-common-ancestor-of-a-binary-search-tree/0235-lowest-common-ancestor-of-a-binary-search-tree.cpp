/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public: 
    TreeNode*dfs(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root)return nullptr;
        if(root->val==q->val || root->val==p->val)return root;
        if(p->val<root->val && q->val<root->val)return dfs(root->left,p,q);
        else if(p->val>root->val && q->val>root->val)return dfs(root->right,p,q);
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root,p,q);
    }
};