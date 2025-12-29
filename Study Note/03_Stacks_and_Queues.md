# Stacks & Queues

## 1. Stack
* **Principle**: **LIFO** (Last-In-First-Out).
* **Applications**: Function Call Stack, Parenthesis Matching, Browser History, DFS Algorithm.
* **Key Operations**:
    * `Push(x)`: Add element to the top.
    * `Pop()`: Remove the top element.
    * `Peek()`: View the top element.
* **Implementation**:
    * **Array**: Use a `top` index. `top++` on push.
    * **Linked List**: Insert/Delete from the Head (`O(1)`).

## 2. Queue
* **Principle**: **FIFO** (First-In-First-Out).
* **Applications**: Printer Buffer, CPU Scheduling, BFS Algorithm.
* **Key Operations**:
    * `Enqueue(x)`: Add element to the rear.
    * `Dequeue()`: Remove element from the front.
* **Challenge (Array)**:
    * Simply moving the Front pointer leaves unused "dead space" at the beginning of the array (False Overflow).

## 3. Circular Queue
* **Solution**: Use Modulo arithmetic to reuse indices cyclically.
* **Key Formulas**:
    * **Next Position**: `(index + 1) % MAX_SIZE`
    * **Full Condition**: `(rear + 1) % MAX_SIZE == front`
    * **Empty Condition**: `front == rear`
* **Advantage**: Fully utilizes fixed array space without shifting elements.

## 4. Complexity Comparison

| Structure | Push/Enqueue | Pop/Dequeue |
| :--- | :--- | :--- |
| **Stack** | `O(1)` | `O(1)` |
| **Queue** | `O(1)` | `O(1)` |