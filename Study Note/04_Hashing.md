# Hashing

## 1. Core Concepts
* **Goal**: Reduce Search, Insert, and Delete time complexity to **`O(1)`**.
* **Components**:
    * **Hash Function**: Maps a Key to an integer Index.
    * **Hash Table**: The array (Bucket Array) that actually stores data.

## 2. Hash Function
* **Requirements**:
    * Fast computation.
    * Uniform distribution to avoid clustering.
* **Common Methods**:
    * Division Method: `h(k) = k % m` (m is usually a prime number).
    * Multiplication Method.

## 3. Collision Resolution
Happens when two different keys map to the same index (`h(k1) == h(k2)`).

### Chaining (Linked List Method) - *Lecture Focus*
* **Approach**: Each bucket in the Hash Table points to the Head of a **Linked List**.
* **Operation**:
    * Upon collision, the new element is appended to the list in that bucket.
* **Structure**: Array of Linked Lists.
* **Pros**:
    * Simple to implement.
    * No overflow unless memory is full.
* **Cons**:
    * Requires extra memory for pointers.
    * If the Hash Function is poor, lists become long, degrading performance to `O(n)`.

## 4. Use Cases
* Symbol Tables (Compilers).
* Dictionaries / Maps.
* DNS Caching.
* Password Verification (storing hashes instead of plain text).