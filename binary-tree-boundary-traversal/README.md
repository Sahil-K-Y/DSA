# Binary Tree Boundary Traversal

## Problem

Return the boundary of a binary tree in **anti-clockwise order**, without including any node more than once.

## Traversal order

1. **Root** — add the root first.
2. **Left boundary** — walk down the left edge, preferring a left child and otherwise taking the right child. Exclude leaf nodes.
3. **Leaves** — collect every leaf from left to right using DFS.
4. **Right boundary** — walk down the right edge, preferring a right child and otherwise taking the left child. Exclude leaf nodes, then append this boundary in reverse order (bottom to top).

A leaf is a node with no left child and no right child.

## Example

Input tree:

```text
        1
       / \
      2   3
     / \   \
    4   5   6
       / \
      7   8
```

Anti-clockwise boundary:

```text
1, 2, 4, 7, 8, 6, 3
```

- Root: `1`
- Left boundary (excluding leaves): `2`
- Leaves from left to right: `4, 7, 8, 6`
- Right boundary in reverse: `3`

## C++ approach

The implementation uses three helpers:

- `addLeftBoundary()` collects the left edge, excluding leaves.
- `addLeaves()` performs DFS and collects all leaves left-to-right.
- `addRightBoundary()` collects the right edge and appends it bottom-up.

The root is handled separately so it is not duplicated when it is itself a leaf.

## Complexity

Let `n` be the number of nodes and `h` the tree height.

- **Time:** `O(n)` — each node is visited a constant number of times.
- **Auxiliary space:** `O(h)` for recursive leaf traversal, plus `O(h)` for the temporary right-boundary vector. In a skewed tree, this can be `O(n)`.

## Edge cases

- Empty tree: return an empty vector.
- Single-node tree: return only the root.
- Tree with only left children.
- Tree with only right children.
- Missing child along either boundary.
