
class Solution {
public:
    unordered_map<int, int> mp;

    TreeNode* helper(vector<int>& preorder, vector<int>& postorder,
                     int prest, int preend,
                     int postst, int postend) {

        if (prest > preend) {
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[prest]);

        if (prest == preend) {
            return root;
        }

        int leftroot = preorder[prest + 1];

        int mid = mp[leftroot];

        int leftsize = mid - postst + 1;

        // Left subtree
        root->left = helper(
            preorder, postorder,
            prest + 1, prest + leftsize,
            postst, mid
        );

        // Right subtree
        root->right = helper(
            preorder, postorder,
            prest + leftsize + 1, preend,
            mid + 1, postend - 1
        );

        return root;
    }

    TreeNode* constructFromPrePost(vector<int>& preorder,
                                   vector<int>& postorder) {

        int n = preorder.size();

        for (int i = 0; i < n; i++) {
            mp[postorder[i]] = i;
        }

        return helper(preorder, postorder,
                      0, n - 1,
                      0, n - 1);
    }
};
