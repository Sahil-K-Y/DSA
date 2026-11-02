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
    bool isident(TreeNode*t1,TreeNode*t2){
        if(!t1 && !t2){
            return true;
        }
        if(!t1||!t2){
            return false;
        }
        bool leftnode = isident(t1->left, t2->left);
        bool rightnode = isident(t1->right, t2->right);
        return leftnode && rightnode && t1->val == t2->val;
    }
    bool isSubtree(TreeNode* root, TreeNode* subtree) {
        if(root==nullptr || subtree==nullptr){
            return root == subtree;
        }
        if(root->val==subtree->val && isident(root,subtree)){
            return true;
        }
        return isSubtree(root->left,subtree)||isSubtree(root->right,subtree);
    }
};