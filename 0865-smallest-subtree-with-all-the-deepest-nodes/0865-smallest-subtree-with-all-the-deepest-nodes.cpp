/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
// class Solution {
// public:
//     TreeNode* subtreeWithAllDeepest(TreeNode* root) {
//         if (!root) return nullptr;

//         unordered_map<TreeNode*, TreeNode*> parent;
//         queue<TreeNode*> q;
//         q.push(root);
//         parent[root] = nullptr;

//         vector<TreeNode*> lastLevel;

//         // 1️⃣ BFS to find deepest level
//         while (!q.empty()) {
//             int sz = q.size();
//             lastLevel.clear();

//             for (int i = 0; i < sz; i++) {
//                 TreeNode* node = q.front();
//                 q.pop();
//                 lastLevel.push_back(node);

//                 if (node->left) {
//                     parent[node->left] = node;
//                     q.push(node->left);
//                 }
//                 if (node->right) {
//                     parent[node->right] = node;
//                     q.push(node->right);
//                 }
//             }
//         }

//         // 2️⃣ Find LCA of all deepest nodes
//         unordered_set<TreeNode*> st(lastLevel.begin(), lastLevel.end());

//         while (st.size() > 1) {
//             unordered_set<TreeNode*> next;
//             for (auto node : st) {
//                 next.insert(parent[node]);
//             }
//             st = next;
//         }

//         return *st.begin();
//     }
// };

// class Solution {
// public:
//     pair<int, TreeNode*> dfs(TreeNode* root) {
//         if (!root) return {0, nullptr};

//         auto left = dfs(root->left);
//         auto right = dfs(root->right);

//         if (left.first == right.first) {
//             return {left.first + 1, root};
//         }
//         if (left.first > right.first) {
//             return {left.first + 1, left.second};
//         }
//         return {right.first + 1, right.second};
//     }

//     TreeNode* subtreeWithAllDeepest(TreeNode* root) {
//         return dfs(root).second;
//     }
// };

class Solution {
public:
    int ans = 0;
    TreeNode* curr = nullptr;
    int func(TreeNode* root) {
        if (root == NULL)
            return 0;
        int l = func(root->left);
        int r = func(root->right);
        return 1 + max(l, r);
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if (root == NULL)
            return NULL;
        int l = func(root->left);
        int r = func(root->right);
        if (l == r)
            return root;
        if (l < r)
            return subtreeWithAllDeepest(root->right);
        return subtreeWithAllDeepest(root->left);
    }
};
