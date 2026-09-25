# Unit V: Heaps and Hashing

## Heap

A binary heap is a complete binary tree stored efficiently in an array. For a zero-based array, the children of index `i` are `2i + 1` and `2i + 2`.

- Max-heap: parent is greater than or equal to its children.
- Min-heap: parent is less than or equal to its children.

Insertion and deletion of the root take `O(log n)`. Reading the root is `O(1)`. Building a heap from an array takes `O(n)` using bottom-up heapify.

## Heapsort

Build a max-heap, repeatedly move the root to the end, and restore the heap. Time complexity is `O(n log n)` and extra space is `O(1)` for an in-place implementation.

## Hashing

A hash function maps a key to a table index. Collisions are handled by:

- Separate chaining: each slot stores a list of entries.
- Open addressing: find another slot using probing.

Linear probing is simple but can create primary clustering. A good hash function and a controlled load factor improve performance.
