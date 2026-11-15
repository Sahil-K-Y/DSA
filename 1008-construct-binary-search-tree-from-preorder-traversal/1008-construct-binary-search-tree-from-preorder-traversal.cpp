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
    TreeNode*build(vector<int>&pre,int &ind,int n){
        if(ind>=pre.size() || pre[ind]>n)return nullptr;
        TreeNode*root=new TreeNode(pre[ind++]);
        root->left=build(pre,ind,root->val);
        root->right=build(pre,ind,n);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=0;
        return build(preorder,n,INT_MAX);
    }
};