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
    int ans=0;
    pair<int,int>dfs(TreeNode*root){
        if(!root){
            return {-1,-1};
        }
        auto left=dfs(root->left);
        auto right=dfs(root->right);
        int leftvalue=1+left.second;
        int rightvalue=1+right.first;
        ans=max(ans,max(leftvalue,rightvalue));
        return {leftvalue,rightvalue};
    }
    int longestZigZag(TreeNode* root) {
        ans=0;
        dfs(root);
        return ans;
    }
};