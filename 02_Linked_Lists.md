# Linked Lists 

## 1. 核心概念 
* **定義**：一種線性結構，由一系列 **節點 (Node)** 組成。
* **記憶體特徵**：節點在記憶體中 **不連續 (Non-contiguous)**，透過指標相連。
* **節點結構**：
    ```c
    struct Node {
        int data;
        struct Node* next;
    };
    ```

## 2. 主要類型 
1. **Singly Linked List (單向)**：每個節點只指向下一個節點 (Next)。
2. **Doubly Linked List (雙向)**：節點包含 `Prev` 與 `Next`，可雙向遍歷，刪除節點較方便。
3. **Circular Linked List (環狀)**：最後一個節點的 Next 指向 Head，形成迴圈，無 NULL 結尾。

## 3. 關鍵操作 

### 存取 (Access)
* **複雜度**：$O(n)$
* **說明**：不支援隨機存取，必須從 Head 開始順序走訪。

### 插入 (Insertion)
* **Head 插入**：$O(1)$
    * `NewNode->next = Head; Head = NewNode;`
* **中間/尾端插入**：$O(1)$ (若已知前一個節點位置 `Prev`)
    * `NewNode->next = Prev->next; Prev->next = NewNode;`

### 刪除 (Deletion)
* **複雜度**：$O(1)$ (若已知 `Prev` 節點)
* **邏輯**：`Prev->next = Target->next; free(Target);`
* **注意**：若只給定 Target 節點 (單向鏈結)，則需從頭搜尋 Prev，總體變為 $O(n)$。

### 移動節點 (MoveTo)
* **步驟**：
    1. **Detach**：將節點從原位置脫鉤 (修改 Prev 的 next)。
    2. **Attach**：將節點插入新位置。
* **風險**：操作順序錯誤會導致 **Dangling Pointers** 或 **Memory Leak**。

## 4. 比較：Array vs Linked List

| 特性 | Array | Linked List |
| :--- | :--- | :--- |
| **記憶體** | 連續 | 分散 |
| **大小** | 固定 (Static) / 需複製 (Dynamic) | 動態增減 |
| **空間效率** | 高 (無額外指標) | 低 (每個節點需額外存指標) |
| **存取速度** | 快 $O(1)$ | 慢 $O(n)$ |
| **插入/刪除** | 慢 $O(n)$ (搬移) | 快 $O(1)$ (改指標) |