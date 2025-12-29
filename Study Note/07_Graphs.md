# Graphs

## 1. Core Concepts
* **Definition**: `G = (V, E)`, consisting of Vertices and Edges.
* **Characteristics**: No hierarchy; can contain **Cycles**.
* **Classification**:
    * Directed vs Undirected
    * Weighted vs Unweighted
    * Cyclic vs Acyclic

## 2. Representation

### Adjacency Matrix
* **Structure**: `V x V` 2D Array. `M[i][j] = 1` indicates an edge.
* **Space**: `O(V^2)`
* **Use Case**: Dense Graphs.
* **Pro**: Checking edge existence takes `O(1)`.

### Adjacency List
* **Structure**: Array of Lists; each vertex stores a list of neighbors.
* **Space**: `O(V + E)`
* **Use Case**: Sparse Graphs.
* **Pro**: Space-efficient; fast neighbor traversal.

## 3. Traversal
**Important**: Must use a `visited[]` array to mark visited nodes and prevent infinite loops.

### BFS (Breadth-First Search)
* **Data Structure**: **Queue**.
* **Behavior**: Explores layer by layer (neighbors first).
* **Application**: Finding **Shortest Path** in unweighted graphs.

### DFS (Depth-First Search)
* **Data Structure**: **Stack** or **Recursion**.
* **Behavior**: Explores as deep as possible, then **Backtracks**.
* **Application**: Maze solving, connectivity check, Topological Sort.

## 4. Comparison: Tree vs Graph
| Feature | Tree | Graph |
| :--- | :--- | :--- |
| **Cycles** | No | Yes |
| **Root** | Single Root | No specific Root |
| **Connectivity** | Connected | Can be Disconnected |
| **Paths** | Unique path between 2 nodes | Multiple paths possible |