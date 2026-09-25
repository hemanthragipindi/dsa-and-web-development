# Unit VI: Graphs

A graph contains vertices and edges. It may be directed or undirected, weighted or unweighted.

## Representations

- Adjacency matrix uses `O(V^2)` memory and gives constant-time edge lookup.
- Adjacency list uses `O(V + E)` memory and is efficient for sparse graphs.

## Traversal

- BFS uses a queue and explores level by level. It finds shortest paths in an unweighted graph. Complexity: `O(V + E)` with an adjacency list.
- DFS uses recursion or an explicit stack. It can find connected components, cycles, and paths. Complexity: `O(V + E)`.

Always track visited vertices. For disconnected graphs, start another traversal from every unvisited vertex.

## Shortest paths

- Dijkstra works with non-negative edge weights.
- Bellman-Ford handles negative edges and detects negative cycles.
- Floyd-Warshall finds all-pairs shortest paths in `O(V^3)` time.
