# Hashing

## 1. 核心概念
* **目的**：將搜尋、插入、刪除的時間複雜度降至 **$O(1)$**。
* **組成**：
    * **Hash Function**: 將 Key 轉換為整數 Index 的函數。
    * **Hash Table**: 實際儲存資料的陣列 (Bucket Array)。

## 2. Hash Function
* **要求**：
    * 計算速度快。
    * 分佈均勻，避免群聚 (Clustering)。
* **常見方法**：
    * Division Method: `h(k) = k % m` (m 通常取質數)。
    * Multiplication Method.

## 3. 碰撞處理
當兩個不同的 Key 對應到同一個 Index 時 (`h(k1) == h(k2)`)。

### Chaining 
* **作法**：Hash Table 的每個 Bucket 是一個 **Linked List** 的 Head。
* **運作**：
    * 發生碰撞時，將新元素串接在該 Bucket 的 Linked List 後面。
* **結構**：Array of Linked Lists。
* **優點**：
    * 處理簡單。
    * 不會因為 Table 滿了而無法插入 (只要記憶體足夠)。
* **缺點**：
    * 需要額外的指標記憶體。
    * 若 Hash Function 很差，特定 Bucket 的 List 會過長，退化成 $O(n)$。

## 4. 應用場景
* Symbol Table (編譯器)。
* Dictionary / Map 資料結構。
* DNS 快取。
* 密碼驗證 (儲存 Hash 值而非明碼)。