# Heaps 

## 1. 核心定義
* **結構性質**：
    * 必須是 **Complete Binary Tree**。
    * 因此非常適合使用 **Array** 實作 (節省指標空間)。
* **順序性質**：
    * **Max Heap**: Parent $\ge$ Children (Root 最大)。
    * **Min Heap**: Parent $\le$ Children (Root 最小)。

## 2. Array 實作 (0-based Indexing)
若節點索引為 $i$：
* **Left Child**: $2i + 1$
* **Right Child**: $2i + 2$
* **Parent**: $\lfloor \frac{i-1}{2} \rfloor$

## 3. 主要操作與複雜度

### Insert
* **步驟**：
    1. 將元素放到 Array 最尾端 (保持 Complete Tree 形狀)。
    2. **Sift-up**：與父節點比較，若順序錯誤則交換，重複直到根或正確。
* **複雜度**：$O(\log n)$

### Extract Root
* **步驟**：
    1. 取出 Root (Array[0])。
    2. 將 Array 最後一個元素移到 Root。
    3. **Sift-down**：與子節點較大(Max)或較小(Min)者比較交換，重複直到葉子或正確。
* **複雜度**：$O(\log n)$

### Build Heap
* **方法**：從最後一個非葉子節點開始，往前對每個節點做 Sift-down。
* **複雜度**：$O(n)$ (數學證明收斂於線性時間)。

## 4. 應用
* **Priority Queue**：任務排程、Dijkstra 最短路徑演算法。
* **Heap Sort**：空間複雜度 $O(1)$ 的排序法 (In-place)，時間 $O(n \log n)$。