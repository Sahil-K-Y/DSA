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
    int count=0;
    void dfs(TreeNode*root,long long target,long long sum){
        if(!root){
            return;
        }
        sum+=root->val;
        if(sum==target)count++;
        dfs(root->left,target,sum);
        dfs(root->right,target,sum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)return 0;
        queue<TreeNode*>q;
        count=0;
        q.push(root);
        while(q.size()>0){
            TreeNode*node=q.front();
            q.pop();
            dfs(node,targetSum,0);
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);

        }
        return count;
    }
};