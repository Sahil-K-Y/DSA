/*
GFG: Diagonal Traversal of Binary Tree
Approach: Queue + Tuple + Ordered Map

For each node:
- Right child remains on the same diagonal.
- Left child belongs to the next diagonal.
We process each node's complete right chain before moving to
the queued left subtrees. This preserves GFG's required ordering.
*/

class Solution {
public:
    vector<int> diagonal(Node *root) {
        vector<int> ans;
        if (!root) return ans;

        // {node, row, diagonal}
        queue<tuple<Node*, int, int>> q;
        map<int, vector<int>> mp;

        q.push({root, 0, 0});

        while (!q.empty()) {
            auto [node, row, diagonal] = q.front();
            q.pop();

            // Process the complete diagonal path to the right.
            while (node) {
                mp[diagonal].push_back(node->data);

                // Left child starts the next diagonal.
                if (node->left) {
                    q.push({node->left, row + 1, diagonal + 1});
                }

                // Right child stays on the current diagonal.
                node = node->right;
                row++;
            }
        }

        // map iterates diagonals in increasing order.
        for (auto &entry : mp) {
            for (int value : entry.second) {
                ans.push_back(value);
            }
        }

        return ans;
    }
};
