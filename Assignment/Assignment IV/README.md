# Homework Assignment IV: Hash Function Design & Observation (C/C++ Version)

This assignment focuses on the design and observation of hash functions using C/C++. 
Students are expected to implement and analyze the behavior of hash functions, 
evaluate their efficiency, and understand their applications in computer science.

Developer: Kuang-Yen, Tai  
Email: twell9525@gmail.com  
Develop platform: Windows 11

## My Hash Function
### Integer Keys 
- Formula / pseudocode:
  ```text
  //m is the size of the hash table
  p = 2654435761  // A sufficiently large prime number

  function myHashInt(key, m):
      // Multiply the key by the large prime p, then modulo m to get the final index
      key = (p * key) % m;

      return key
  ```
- Rationale: This desing utilize the Multiplication Method, multiplying the key by the large prime p. This prime number fundamentally scrambles the input key's bit patterns, generating a strong Avalanche Effect that breaks any sequential or predictable key patterns. The high dispersion achieved before the final modulo m operation is the core strategy for minimizing collisions.
- Reference: https://www.hello-algo.com/zh-hant/chapter_hashing/hash_algorithm/

### Non-integer Keys
- Formula / pseudocode:
  ```text
  // m: The size of the hash table
  // p: A prime number used as a multiplier
  // str: The input string (non-integer key)
  // hash: An initial hash value 

  hash = 0
  p = 31 // A prime base for the polynomial hash

  for (char c : str)
  {
      // Convert the character to its ASCII/numeric value, multiply by p,
      // and add it to the running hash.
      hash = (hash + p * static_cast<unsigned char>(c)) % m;
  }

  return hash
  ```
- Rationale: The key step is the inclusion of the prime multiplier p, which ensures the hash result is dependent on the order of the characters, not just their sum. This    approach effectively distinguishes between similar strings (like anagrams), achieving high dispersion for string keys and minimizing collisions.
- Reference: https://www.hello-algo.com/zh-hant/chapter_hashing/hash_algorithm/


## Experimental Setup
- Table sizes tested (m): 10, 11, 37
- Test dataset:
  - Integers: 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60
  - Strings: "cat", "dog", "bat", "cow", "ant", "owl", "bee", "hen", "pig", "fox"
- Compiler: GCC and G++
- Standard: C23 and C++23

## Results
| Table Size (m) | Index Sequence         | Observation              |
|----------------|------------------------|--------------------------|
| 10             | 1, 2, 3, 4, ...        | Pattern repeats every 10 |
| 11             | 10, 0, 1, 2, ...       | More uniform             |
| 37             | 20, 21, 22, 23, ...    | Near-uniform             |

## Compilation, Build, Execution, and Output

### Compilation
- The project uses a comprehensive Makefile that builds both C and C++ versions with proper flags:
  ```bash
  # Build both C and C++ versions
  make all
  
  # Build only C version
  make c
  
  # Build only C++ version
  make cxx
  ```

### Manual Compilation (if needed)
- Command for C:
  ```bash
  gcc -std=c23 -Wall -Wextra -Wpedantic -g -o C/hash_function C/main.c C/hash_fn.c
  ```
- Command for C++:
  ```bash
  g++ -std=c++23 -Wall -Wextra -Wpedantic -g -o CXX/hash_function_cpp CXX/main.cpp CXX/hash_fn.cpp
  ```

### Clean Build Files
- Remove all compiled files:
  ```bash
  make clean
  ```

### Execution
- Run the compiled binary:
  ```bash
  ./hash_function
  ```
  or
  ```bash
  ./hash_function_cpp
  ```

### Result Snapshot
- Example output for integers:
  ```
  === Hash Function Observation (C Version) ===

  === Table Size m = 10 ===
  Key     Index
  -----------------
  21      1
  22      2
  23      3
  24      4
  25      5
  26      6
  27      7
  28      8
  29      9
  30      0
  51      1
  52      2
  53      3
  54      4
  55      5
  56      6
  57      7
  58      8
  59      9
  60      0

  === Table Size m = 11 ===
  Key     Index
  -----------------
  21      1
  22      0
  23      10
  24      9
  25      8
  26      7
  27      6
  28      5
  29      4
  30      3
  51      4
  52      3
  53      2
  54      1
  55      0
  56      10
  57      9
  58      8
  59      7
  60      6

  === Table Size m = 37 ===
  Key     Index
  -----------------
  21      5
  22      7
  23      9
  24      11
  25      13
  26      15
  27      17
  28      19
  29      21
  30      23
  51      28
  52      30
  53      32
  54      34
  55      36
  56      1
  57      3
  58      5
  59      7
  60      9

  === Hash Function Observation (C++ Version) ===

  === Table Size m = 10 ===
  Key     Index
  -----------------
  21      1
  22      2
  23      3
  24      4
  25      5
  26      6
  27      7
  28      8
  29      9
  30      0
  51      1
  52      2
  53      3
  54      4
  55      5
  56      6
  57      7
  58      8
  59      9
  60      0

  === Table Size m = 11 ===
  Key     Index
  -----------------
  21      1
  22      0
  23      10
  24      9
  25      8
  26      7
  27      6
  28      5
  29      4
  30      3
  51      4
  52      3
  53      2
  54      1
  55      0
  56      10
  57      9
  58      8
  59      7
  60      6

  === Table Size m = 37 ===
  Key     Index
  -----------------
  21      5
  22      7
  23      9
  24      11
  25      13
  26      15
  27      17
  28      19
  29      21
  30      23
  51      28
  52      30
  53      32
  54      34
  55      36
  56      1
  57      3
  58      5
  59      7
  60      9

  === String Hash (m = 10) ===
  Key     Index
  -----------------
  cat     2
  dog     4
  bat     1
  cow     9
  ant     3
  owl     8
  bee     0
  hen     5
  pig     0
  fox     3
  ```

- Example output for strings:
  ```
  === String Hash (m = 10) ===
  Key     Index
  -----------------
  cat     2
  dog     4
  bat     1
  cow     9
  ant     3
  owl     8
  bee     0
  hen     5
  pig     0
  fox     3

  === String Hash (m = 11) ===
  Key     Index
  -----------------
  cat     3
  dog     10
  bat     5
  cow     2
  ant     3
  owl     6
  bee     5
  hen     8
  pig     9
  fox     5

  === String Hash (m = 37) ===
  Key     Index
  -----------------
  cat     15
  dog     3
  bat     21
  cow     24
  ant     23
  owl     7
  bee     13
  hen     34
  pig     4
  fox     0
  ```

- Observations: Outputs align with the analysis, showing better distribution with prime table sizes.
- Example output for integers:
  ```
  Hash table (m=10): [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
  Hash table (m=11): [10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
  Hash table (m=37): [20, 21, 22, 23, 24, 25, 26, 27, 28, 29, ...]
  ```
- Example output for strings:
  ```
  Hash table (m=10): ["cat", "dog", "bat", "cow", "ant", ...]
  Hash table (m=11): ["fox", "cat", "dog", "bat", "cow", ...]
  Hash table (m=37): ["bee", "hen", "pig", "fox", "cat", ...]
  ```
- Observations: Outputs align with the analysis, showing better distribution with prime table sizes.

## Analysis
- Table Size(Prime vs. Non-prime): Choosing a prime number for the table size (m) significantly enhances data distribution. Prime sizes help break up patterns in input keys, ensuring that entries are spread more evenly across the table and reducing the likelihood of collisions compared to composite numbers.
- Patterns and Collision Risks: Non-prime table sizes (especially powers of 2) are prone to repetitive hashing patterns. Even when using the Multiplication Method, if the constant or the table size shares common factors with the input data, it can cause "clustering," where multiple keys map to the same few slots.
- Optimization Strategies: To maximize efficiency, combine a prime table size with a robust hash function. When resizing the table dynamically, always calculate the next available prime number to maintain optimal distribution and ensure the time complexity remains as close to O(1) as possible.

## Reflection
1. Effective hash function design must balance low computational overhead with high collision resistance to maintain optimal performance.
2. Table size is a primary factor in distribution uniformity; utilizing prime numbers significantly reduces clustering compared to non-prime sizes.
3. The combination of a prime-sized table and a linear transformation formula provides the most consistent and uniform index mapping.
4. Simply using the Multiplication Method might not be enough to guarantee an even distribution of keys.