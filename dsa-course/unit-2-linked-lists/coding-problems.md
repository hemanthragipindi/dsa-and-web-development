# Unit II Coding Problems

## 1. Build a singly linked list

Create a menu-driven program for insertion at the beginning, insertion at the end, deletion by value, and traversal.

**Required cases:** empty list, one-node list, deleting the head, deleting the last node, and deleting a missing value.

## 2. Insert at a position

Insert a new node at zero-based position `k`. Reject positions outside `0` through `length` without changing the list.

**Example:** `10 -> 20 -> 40`, `k = 2`, value `30` gives `10 -> 20 -> 30 -> 40`.

## 3. Reverse in groups of k

Reverse a linked list in groups of `k` nodes. If the final group has fewer than `k` nodes, leave it unchanged.

**Example:** `1 -> 2 -> 3 -> 4 -> 5`, `k = 2` gives `2 -> 1 -> 4 -> 3 -> 5`.

## 4. Find the middle and kth node from the end

Use slow and fast pointers to find the middle. Then use two pointers to return the kth node from the end in one traversal.

**Edge case:** report an invalid request when `k` is greater than the list length.

## 5. Detect and remove a cycle

Create a test list with a cycle, detect it using Floyd's algorithm, find the first cycle node, and unlink the cycle. Prove that traversal terminates afterward.

## 6. Add two numbers represented by lists

Each list stores one digit in reverse order. Add the numbers and return a new list.

**Example:** `2 -> 4 -> 3` plus `5 -> 6 -> 4` represents `342 + 465`, so output `7 -> 0 -> 8`.

## 7. Merge and sort a linked list

Sort a singly linked list using merge sort. Split with slow and fast pointers, recursively sort both halves, and merge them. Target complexity: `O(n log n)` time and `O(log n)` recursion stack.

## 8. Doubly and circular list operations

Implement forward/backward traversal for a doubly linked list and insertion/deletion for a circular linked list. Verify that the circular traversal stops after returning to the starting node.
