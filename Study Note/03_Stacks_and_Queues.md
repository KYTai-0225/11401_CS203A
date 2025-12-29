# Stacks & Queues

## 1. Stack 
* **原則**：**LIFO** (Last-In-First-Out, 後進先出)。
* **應用**：函式呼叫堆疊、括號匹配、瀏覽器上一頁、DFS 演算法。
* **主要操作**：
    * `Push(x)`: 加入元素至頂端。
    * `Pop()`: 移除頂端元素。
    * `Peek()`: 查看頂端元素。
* **實作**：
    * **Array**：使用 `top` 索引追蹤。Push 時 `top++`。
    * **Linked List**：從 Head 進行 Insert/Delete ($O(1)$)。

## 2. Queue
* **原則**：**FIFO** (First-In-First-Out, 先進先出)。
* **應用**：印表機緩衝區、CPU 排程、BFS 演算法。
* **主要操作**：
    * `Enqueue(x)`: 加入元素至尾端 (Rear)。
    * `Dequeue()`: 移除前端 (Front) 元素。
* **實作挑戰 (Array)**：
    * 若單純移動 Front 指標，陣列前方會產生無法使用的廢棄空間 (False Overflow)。

## 3. Circular Queue 
* **解決方案**：利用 Modulo 運算讓索引循環使用。
* **關鍵公式**：
    * **Next Position**: `(index + 1) % MAX_SIZE`
    * **Full Condition**: `(rear + 1) % MAX_SIZE == front`
    * **Empty Condition**: `front == rear`
* **優勢**：完全利用固定大小的陣列空間，不需要搬移元素。

## 4. 複雜度比較

| 資料結構 | Push/Enqueue | Pop/Dequeue |
| :--- | :--- | :--- |
| **Stack** | $O(1)$ | $O(1)$ |
| **Queue** | $O(1)$ | $O(1)$ |