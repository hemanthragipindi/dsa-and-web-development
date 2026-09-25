# Unit IV: Recursion and Trees

## Recursion

A recursive function needs a base case and a smaller subproblem. Each call uses stack memory. Explain both time and auxiliary stack space when analyzing recursion.

Common examples are factorial, Fibonacci, binary search, merge sort, quick sort, and Tower of Hanoi.

## Binary trees

A binary tree node has at most two children. Traversals are:

- In-order: left, root, right.
- Pre-order: root, left, right.
- Post-order: left, right, root.
- Level-order: breadth-first by levels.

## Binary search tree

A BST stores smaller values in the left subtree and larger values in the right subtree. Search, insert, and delete take `O(h)`, where `h` is tree height. They are `O(log n)` for a balanced tree and `O(n)` for a skewed tree.

## Sorting

Merge sort uses divide and conquer and takes `O(n log n)` time with `O(n)` extra space. Quick sort has `O(n log n)` average time but `O(n^2)` worst case with poor pivots.
