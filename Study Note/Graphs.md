# Graphs

## 1. 核心概念
* **定義**：$G = (V, E)$，由頂點 (Vertex) 與邊 (Edge) 組成。
* **特徵**：無階層限制，可包含 **Cycle (迴圈)**。
* **分類**：
    * Directed vs Undirected
    * Weighted vs Unweighted 
    * Cyclic vs Acyclic 

## 2. 表示法

### Adjacency Matrix
* **結構**：$V \times V$ 的 2D 陣列。`M[i][j] = 1` 表示有邊。
* **空間**：$O(V^2)$
* **適用**：Dense Graph (稠密圖)。
* **優點**：查詢兩點是否相連僅需 $O(1)$。

### Adjacency List
* **結構**：Array of Lists，每個頂點存一個鄰居清單。
* **空間**：$O(V + E)$
* **適用**：Sparse Graph (稀疏圖)。
* **優點**：節省空間，遍歷鄰居快。

## 3. Traversal
**重要**：必須維護一個 `visited[]` 陣列，標記已訪問過的節點，防止無窮迴圈。

### BFS 
* **資料結構**：**Queue**。
* **行為**：像水波紋擴散，先訪問所有鄰居，再訪問鄰居的鄰居。
* **應用**：尋找無權圖的**最短路徑**。

### DFS
* **資料結構**：**Stack** 或 **Recursion**。
* **行為**：一條路走到底，遇到死路再回溯 (Backtrack)。
* **應用**：迷宮探索、連通性檢測、拓樸排序 (Topological Sort)。

## 4. Tree vs Graph 比較
| 特性 | Tree | Graph |
| :--- | :--- | :--- |
| **迴圈** | 無 | 有 |
| **Root** | 只有一個 | 無特定 Root |
| **連通性** | 必定連通 | 可能不連通 |
| **路徑** | 兩點間僅一條路徑 | 可能有多條 |