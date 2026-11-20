# Diagonal Traversal of Binary Tree (GFG)

**Problem:** [Diagonal Tree Traversal](https://www.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1)

## Approach: Queue + Tuple + Ordered Map

For every node, track:
- `node`: current tree node
- `row`: its row (used to track depth)
- `diagonal`: its diagonal number

### Rules
- The right child stays on the same diagonal.
- The left child moves to the next diagonal.
- Process the complete right chain of a node before processing queued left subtrees. This maintains GFG's required ordering: when nodes belong to different subtrees on the same diagonal, the left-subtree nodes come first.

Store values in `map<int, vector<int>>`, keyed by diagonal number. Iterating the map gives diagonals in increasing order.

## Complexity
- **Time:** O(n log d), where n is the number of nodes and d is the number of diagonals (map insertion).
- **Auxiliary space:** O(n) for the queue and map.

## GFG Function Signature
```cpp
vector<int> diagonal(Node *root)
```
