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
    TreeNode*first=nullptr;
    TreeNode*second=nullptr;
    TreeNode*pre=nullptr;
    void inorder(TreeNode*root){
        if(!root){
            return;
        }
        inorder(root->left);
        if(pre && pre->val>root->val){
            if(!first)first=pre;
            second=root;
        }
        pre=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        if(first && second){
            swap(first->val,second->val);
        }
    }
};