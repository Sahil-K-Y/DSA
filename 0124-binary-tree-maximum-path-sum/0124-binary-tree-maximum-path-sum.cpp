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
    int ans=INT_MIN;
    int dfs(TreeNode* root,int curr){
        if(!root){
            return 0;
        }
        int lt=max(0,dfs(root->left,curr+root->val));
        int rt=max(0,dfs(root->right,curr+root->val));
        ans=max(ans,lt+rt+root->val);
        return max(lt,rt)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};