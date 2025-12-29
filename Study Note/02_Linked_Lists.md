# Linked Lists

## 1. Core Concepts
* **Definition**: A linear structure consisting of a sequence of **Nodes**.
* **Memory Characteristics**: Nodes are **non-contiguous** in memory, connected via pointers.
* **Node Structure**:
    ```c
    struct Node {
        int data;
        struct Node* next;
    };
    ```

## 2. Main Types
1. **Singly Linked List**: Each node points only to the next node.
2. **Doubly Linked List**: Nodes contain both `prev` and `next` pointers, allowing bidirectional traversal and easier deletion.
3. **Circular Linked List**: The last node's `next` points back to the Head, forming a loop (no NULL terminator).

## 3. Key Operations

### Access
* **Complexity**: `O(n)`
* **Note**: No random access; must traverse sequentially from the Head.

### Insertion
* **At Head**: `O(1)`
    * `NewNode->next = Head; Head = NewNode;`
* **Middle/Tail**: `O(1)` (if the previous node `Prev` is known)
    * `NewNode->next = Prev->next; Prev->next = NewNode;`

### Deletion
* **Complexity**: `O(1)` (if `Prev` node is known)
* **Logic**: `Prev->next = Target->next; free(Target);`
* **Note**: If only the Target node is given (in Singly Linked List), you must search for Prev first, making it `O(n)`.

### MoveTo (Moving Nodes)
* **Steps**:
    1. **Detach**: Unlink the node from its original position.
    2. **Attach**: Insert the node into the new position.
* **Risk**: Incorrect order of operations leads to **Dangling Pointers** or **Memory Leaks**.

## 4. Comparison: Array vs Linked List

| Feature | Array | Linked List |
| :--- | :--- | :--- |
| **Memory** | Contiguous | Scattered (Non-contiguous) |
| **Size** | Fixed (Static) / Copy needed (Dynamic) | Dynamic |
| **Space Overhead** | Low (Raw data) | High (Extra pointer per node) |
| **Access Speed** | Fast `O(1)` | Slow `O(n)` |
| **Insert/Delete** | Slow `O(n)` (Shifting) | Fast `O(1)` (Pointer change) |