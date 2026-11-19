/*
Binary Tree Boundary Traversal (anti-clockwise)

Order:
1. Root (unless it is the only leaf)
2. Left boundary, excluding leaf nodes
3. All leaf nodes from left to right
4. Right boundary, excluding leaf nodes, in bottom-up order
*/

class Solution {
private:
    bool isLeaf(TreeNode* node) {
        return node && !node->left && !node->right;
    }

    void addLeftBoundary(TreeNode* node, vector<int>& ans) {
        TreeNode* curr = node->left;

        while (curr) {
            if (!isLeaf(curr)) {
                ans.push_back(curr->val);
            }

            // Prefer the left edge; otherwise follow the right child.
            curr = curr->left ? curr->left : curr->right;
        }
    }

    void addLeaves(TreeNode* node, vector<int>& ans) {
        if (!node) return;

        if (isLeaf(node)) {
            ans.push_back(node->val);
            return;
        }

        addLeaves(node->left, ans);
        addLeaves(node->right, ans);
    }

    void addRightBoundary(TreeNode* node, vector<int>& ans) {
        TreeNode* curr = node->right;
        vector<int> boundary;

        while (curr) {
            if (!isLeaf(curr)) {
                boundary.push_back(curr->val);
            }

            // Prefer the right edge; otherwise follow the left child.
            curr = curr->right ? curr->right : curr->left;
        }

        // The right boundary must be added from bottom to top.
        for (int i = static_cast<int>(boundary.size()) - 1; i >= 0; --i) {
            ans.push_back(boundary[i]);
        }
    }

public:
    vector<int> boundaryOfBinaryTree(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;

        // Add root once. A single-node tree is also a leaf.
        if (!isLeaf(root)) {
            ans.push_back(root->val);
        } else {
            ans.push_back(root->val);
            return ans;
        }

        addLeftBoundary(root, ans);
        addLeaves(root, ans);
        addRightBoundary(root, ans);

        return ans;
    }
};
