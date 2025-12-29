# Heaps

## 1. Core Definition
* **Structure Property**:
    * Must be a **Complete Binary Tree**.
    * Ideally implemented using an **Array** (saves pointer space).
* **Heap Order Property**:
    * **Max Heap**: `Parent >= Children` (Root is Max).
    * **Min Heap**: `Parent <= Children` (Root is Min).

## 2. Array Implementation (0-based Indexing)
For a node at index `i`:
* **Left Child**: `2i + 1`
* **Right Child**: `2i + 2`
* **Parent**: `(i-1) / 2` (Integer division)

## 3. Key Operations & Complexity

### Insert
* **Steps**:
    1. Place element at the end of the Array (maintaining Complete Tree shape).
    2. **Sift-up**: Compare with parent and swap if order is violated; repeat until valid.
* **Complexity**: `O(log n)`

### Extract Root
* **Steps**:
    1. Remove Root (Array[0]).
    2. Move the last element of the Array to Root.
    3. **Sift-down**: Compare with the larger (Max) or smaller (Min) child and swap; repeat.
* **Complexity**: `O(log n)`

### Build Heap
* **Method**: Start from the last non-leaf node and perform Sift-down backwards.
* **Complexity**: `O(n)` (mathematically converges to linear time).

## 4. Applications
* **Priority Queue**: Task scheduling, Dijkstra's algorithm.
* **Heap Sort**: In-place sorting with `O(1)` space and `O(n log n)` time.