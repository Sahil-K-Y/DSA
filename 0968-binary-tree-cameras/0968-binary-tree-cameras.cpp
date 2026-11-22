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
    int cam=0;
    int dfs(TreeNode*root){
        if(!root){
            return 0;

        }
        int lt=dfs(root->left);
        int rt=dfs(root->right);
        if(lt==2 || rt==2){
            cam++;
            return 1;
        }
        if(lt==1||rt==1){
            return 0;
        }
        return 2;
    }
    int minCameraCover(TreeNode* root) {
        cam=0;
        if(dfs(root)==2){
            cam++;
        }
        return cam;
    }
};