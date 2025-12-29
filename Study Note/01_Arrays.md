# Arrays

## 1. Core Concepts
* **Definition**: A collection of elements stored in **contiguous memory locations**.
* **Key Characteristics**:
    * **Random Access**: Elements can be accessed directly via index in `O(1)` time.
    * **Homogeneity**: All elements usually have the same data type.
* **Memory Layout**:
    * **1D Array**: Linear arrangement.
    * **2D Array**: Typically **Row-major**, storing the first row followed by the second.
    * **Address Calculation**: `Address(A[i]) = Base_Address + i * sizeof(Type)`

## 2. Types & Implementation

### Static Array
* **Allocation Time**: Compile-time.
* **Location**: Stack.
* **Example**: `int arr[10];`
* **Limitation**: Fixed size; cannot be changed during runtime.

### Dynamic Array
* **Allocation Time**: Runtime.
* **Location**: Heap.
* **Operations**:
    * C: `malloc` / `free`
    * C++: `new` / `delete`
* **Resizing Mechanism**:
    1. Allocate a larger new array (usually 2x size) when full.
    2. Copy old data to the new array.
    3. Free the old array memory.
    * **Cost**: The resizing operation takes `O(n)` time.

## 3. Complexity Analysis

| Operation | Time Complexity | Note |
| :--- | :--- | :--- |
| **Access** | `O(1)` | Direct calculation via memory address. |
| **Search** | `O(n)` | Linear search (unsorted). |
| **Insert** | `O(n)` | Requires shifting subsequent elements. |
| **Delete** | `O(n)` | Requires shifting elements to fill the gap. |

## 4. Pros & Cons
* **Pros**:
    * Extremely fast read access.
    * **Cache Friendly**: High CPU cache hit rate due to contiguous memory.
* **Cons**:
    * Inflexible size (Static).
    * Inefficient insertion and deletion (requires data movement).