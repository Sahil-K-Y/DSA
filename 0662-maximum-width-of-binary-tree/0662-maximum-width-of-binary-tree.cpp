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
    int widthOfBinaryTree(TreeNode* root) {
        int ans=0;
        queue<pair<TreeNode*,long long >>q;
        q.push({root,0});
        while(q.size()>0){
            int n=q.size();
            int st=q.front().second;
            int end=q.back().second;
            ans=max(ans,end-st+1);
            for(int i=0;i<n;i++){
                auto node=q.front();
                TreeNode*curr=node.first;
                // q.pop();
                q.pop();
                long long ind=node.second-st;
                if(curr->left)q.push({curr->left,2*ind+1});
                if(curr->right)q.push({curr->right,2*ind+2});
                
            }
        }
        return ans;
    }
};