# Unit VI Problems

## 1. BFS traversal

**Type:** Graph traversal

Use an adjacency list, a queue, and a visited array. Print vertices in BFS order from a chosen source. Complexity: `O(V + E)`.

## 2. DFS traversal

**Type:** Recursive or stack traversal

Implement recursive DFS and iterative DFS. Compare call-stack memory with explicit-stack memory.

## 3. Count connected components

**Type:** Repeated traversal

Run BFS or DFS from every unvisited vertex and increment a counter. This handles disconnected undirected graphs.

## 4. Detect a cycle

**Type:** Graph property

For an undirected graph, track the parent during DFS. For a directed graph, track the current recursion path to detect a back edge.

## 5. Shortest path in an unweighted graph

**Type:** BFS shortest path

Store distance and parent arrays during BFS. Reconstruct the path by following parents backward from the destination.

## 6. Dijkstra's algorithm

**Type:** Weighted shortest path

Use a min-priority queue of `(distance, vertex)`. Ignore stale queue entries and relax outgoing edges. Do not use this algorithm with negative edge weights.

## 7. Bellman-Ford and negative cycles

**Type:** Dynamic relaxation

Relax every edge `V - 1` times. A further successful relaxation means a reachable negative cycle exists. Complexity: `O(VE)`.

## 8. Topological sorting

**Type:** Directed acyclic graph

Use DFS finishing times or Kahn's algorithm with indegrees. A complete topological ordering exists only when the graph has no directed cycle.
