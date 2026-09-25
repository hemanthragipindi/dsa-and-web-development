# Unit VI Coding Problems

## 1. Graph representations

Read a graph and build both an adjacency matrix and an adjacency list. Support adding an edge and printing both representations for directed and undirected input.

## 2. BFS and DFS traversal

Starting from a given vertex, print BFS and DFS order. Handle a disconnected graph by also visiting every remaining unvisited vertex.

## 3. Connected components

Count connected components in an undirected graph using repeated DFS or BFS. Return `0` for a graph with no vertices.

## 4. Cycle detection

Write separate cycle detectors for an undirected graph and a directed graph. Use parent tracking for the undirected case and a recursion-stack or color array for the directed case.

## 5. Shortest path in an unweighted graph

Use BFS to find the shortest number of edges from source to destination. Store parent indexes and print the actual path, or print `-1` when unreachable.

## 6. Dijkstra's algorithm

Given a weighted graph with non-negative weights, print shortest distances from a source using a min-priority queue.

**Edge case:** unreachable vertices should be printed as `INF`.

## 7. Bellman-Ford

Compute shortest paths when negative edges are allowed. After `V - 1` relaxations, perform one extra pass to detect a reachable negative cycle.

## 8. Floyd-Warshall

Given a distance matrix, compute all-pairs shortest paths. Treat missing edges as `INF` and set every diagonal entry to `0`.

## 9. Topological sorting

Print a topological ordering of a directed acyclic graph using Kahn's algorithm. If fewer than `V` vertices are processed, report that the graph contains a cycle.
