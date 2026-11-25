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
    TreeNode*search(TreeNode*root,int target){
        if(!root)return nullptr;
        if(root->val==target)return root;
        else if(root->val<target)return search(root->right,target);
        else{
            return search(root->left,target);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return search(root,val);
    }
};