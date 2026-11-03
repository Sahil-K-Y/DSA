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
    void dfs(TreeNode*root,vector<int>&path,vector<vector<int>>&ans,int target,int curr){
        if(!root){
            return;
        }
        curr+=root->val;
        path.push_back(root->val);
        if(!root->left && !root->right&& curr==target){
            ans.push_back(path);
        }
        dfs(root->left,path,ans,target,curr);
        dfs(root->right,path,ans,target,curr);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        vector<vector<int>>ans;
        dfs(root,path,ans,targetSum,0);
        return ans;
    }
};