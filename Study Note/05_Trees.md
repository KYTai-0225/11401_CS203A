# Trees

## 1. 定義與術語
* **定義**：非線性階層結構，由 Node 和 Edge 組成，**無迴圈 (Acyclic)**。
* **術語**：
    * **Root**: 根節點。
    * **Leaf**: 葉節點 (無子節點)。
    * **Height**: 節點到最遠葉子的路徑長度 (樹的高度 = Root 的高度)。
    * **Depth**: 節點到 Root 的路徑長度。

## 2. Binary Tree 
* **限制**：每個節點最多有 2 個子節點 (Left, Right)。
* **特殊型態**：
    * **Full**: 每個節點有 0 或 2 個子節點。
    * **Complete**: 除了最後一層外全滿，且最後一層靠左填充。

## 3. Binary Search Tree (BST)
* **核心規則**：
    $$\text{Left Subtree} < \text{Node} < \text{Right Subtree}$$
* **操作複雜度**：
    * 平均：O(log n) (與樹高成正比)。
    * 最差：O(n) (當樹退化成一直線時)。

## 4. Traversal
* **DFS (深度優先)** - 使用 Stack 或 Recursion:
    1. **Preorder**: Root $\to$ Left $\to$ Right
    2. **Inorder**: Left $\to$ Root $\to$ Right (BST 會得到排序數列)
    3. **Postorder**: Left $\to$ Right $\to$ Root
* **BFS (廣度優先)** - 使用 Queue:
    * **Level-order**: 由上而下，由左而右。

## 5. AVL Tree
* **目的**：解決 BST 退化成 O(n) 的問題。
* **定義**：任一節點的左右子樹高度差 (Balance Factor) 不超過 1。
* **機制**：透過 **Rotation (旋轉)** 來維持平衡 (LL, RR, LR, RL)。
* **保證**：搜尋、插入、刪除皆維持 O(log n)。