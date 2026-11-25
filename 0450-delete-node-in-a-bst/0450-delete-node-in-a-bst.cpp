class Solution {
public:
    // Returns the parent of the node with value `val` (or nullptr if not found / is root)
    TreeNode* searchParent(TreeNode* root, TreeNode* pre, int val) {
        if (!root) return nullptr;
        if (root->val == val) return pre;
        if (root->val < val) return searchParent(root->right, root, val);
        return searchParent(root->left, root, val);
    }

    TreeNode* removeTarget(TreeNode* target) {
        // Case 1: Two children -> replace with Inorder Successor (leftmost in right subtree)
        if (target->left && target->right) {
            TreeNode* succPre = target;
            TreeNode* succ = target->right;
            while (succ->left) {
                succPre = succ;
                succ = succ->left;
            }
            target->val = succ->val;
            // Remove the successor node (which has at most a right child)
            if (succPre == target) {
                succPre->right = succ->right;
            } else {
                succPre->left = succ->right;
            }
            delete succ;
            return target;
        }
        // Case 2 & 3: One child or Leaf (0 children)
        TreeNode* child = target->left ? target->left : target->right;
        delete target;
        return child;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;

        // Special case: root itself is the node to delete
        if (root->val == key) {
            return removeTarget(root);
        }

        TreeNode* pre = searchParent(root, nullptr, key);
        if (!pre) return root; // Key not found in BST

        if (pre->left && pre->left->val == key) {
            pre->left = removeTarget(pre->left);
        } else if (pre->right && pre->right->val == key) {
            pre->right = removeTarget(pre->right);
        }

        return root;
    }
};