# Trees

## 1. Definitions & Terminology
* **Definition**: A non-linear hierarchical structure of Nodes and Edges; **Acyclic**.
* **Terms**:
    * **Root**: The top node.
    * **Leaf**: A node with no children.
    * **Height**: Length of the path to the deepest leaf (Tree Height = Root Height).
    * **Depth**: Length of the path from the Root.

## 2. Binary Tree
* **Constraint**: Each node has at most 2 children (Left, Right).
* **Special Types**:
    * **Full**: Every node has 0 or 2 children.
    * **Complete**: All levels are filled except possibly the last, which is filled from left to right.

## 3. Binary Search Tree (BST)
* **Invariant**:
    `Left Subtree < Node < Right Subtree`
* **Complexity**:
    * Average: `O(log n)` (proportional to tree height).
    * Worst: `O(n)` (when the tree degenerates into a line).

## 4. Traversal
* **DFS (Depth-First)** - Uses Stack or Recursion:
    1. **Preorder**: Root → Left → Right
    2. **Inorder**: Left → Root → Right (Produces sorted order in BST)
    3. **Postorder**: Left → Right → Root
* **BFS (Breadth-First)** - Uses Queue:
    * **Level-order**: Top to bottom, left to right.

## 5. Balanced Tree (AVL Tree)
* **Goal**: Solve the issue of BST degrading to `O(n)`.
* **Definition**: For any node, the height difference (Balance Factor) between left and right subtrees is at most 1.
* **Mechanism**: Uses **Rotation** (LL, RR, LR, RL) to maintain balance.
* **Guarantee**: Search, Insert, and Delete operations remain `O(log n)`.