# Unit II: Linked Lists

A linked list stores data in nodes. Each node contains a value and a pointer to another node. Nodes do not need contiguous memory.

## Types

- Singly linked list: each node points to the next node.
- Doubly linked list: each node has `prev` and `next` pointers.
- Circular linked list: the last node points back to the first node.
- Header linked list: a special first node stores metadata or simplifies boundary operations.

## Operations

With a head pointer, insertion at the beginning is `O(1)`. Searching, traversal, and insertion at the end without a tail pointer are `O(n)`. Deleting a known node is `O(1)` when its predecessor or required links are already available.

Always handle an empty list, a one-node list, deletion of the head, and deletion of the last node. Every removed node should be released to avoid a memory leak.

## Two useful patterns

- Slow and fast pointers find the middle node and detect cycles.
- Reversal changes links one at a time using `previous`, `current`, and `next` pointers.
