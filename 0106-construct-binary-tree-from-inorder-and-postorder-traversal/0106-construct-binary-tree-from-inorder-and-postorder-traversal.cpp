
class Solution {
public:
    unordered_map<int, int> mp;
    int postIndex;

    TreeNode* build(vector<int>& inorder, vector<int>& postorder,
                    int inStart, int inEnd) {

        // No elements left
        if (inStart > inEnd) {
            return nullptr;
        }

        // Last remaining postorder element is the root
        int rootVal = postorder[postIndex];
        postIndex--;

        TreeNode* root = new TreeNode(rootVal);

        // Find root position in inorder
        int mid = mp[rootVal];

        // Build right subtree first
        root->right = build(inorder, postorder, mid + 1, inEnd);

        // Then build left subtree
        root->left = build(inorder, postorder, inStart, mid - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        int n = inorder.size();

        // Store inorder value -> index
        for (int i = 0; i < n; i++) {
            mp[inorder[i]] = i;
        }

        // Start from the last element of postorder
        postIndex = n - 1;

        return build(inorder, postorder, 0, n - 1);
    }
};
