# Unit II Problems

## 1. Insert and delete nodes

**Type:** Basic singly linked list

Implement insertion at the beginning and end, deletion by value, and display. Test empty, one-node, head deletion, and missing-value cases. Traversal takes `O(n)` time.

## 2. Reverse a linked list

**Type:** Pointer manipulation

Reverse `1 -> 2 -> 3` into `3 -> 2 -> 1` using three pointers. Complexity: `O(n)` time and `O(1)` extra space.

## 3. Find the middle node

**Type:** Slow and fast pointers

Move `slow` one node and `fast` two nodes at a time. When `fast` reaches the end, `slow` is at the middle. Decide whether even-sized lists should return the first or second middle.

## 4. Detect and remove a cycle

**Type:** Floyd cycle detection

Use slow and fast pointers to detect a meeting point. Reset one pointer to the head and move both one step to find the cycle start. Then unlink the last node in the cycle.

## 5. Merge two sorted linked lists

**Type:** Linked-list merge

Compare the heads of two sorted lists and connect the smaller node to a result list. Complexity: `O(n + m)` time and `O(1)` extra space if existing nodes are reused.

Example: `1 -> 4` and `2 -> 3` -> `1 -> 2 -> 3 -> 4`.

## 6. Check whether a list is a palindrome

**Type:** Fast/slow plus reversal

Find the middle, reverse the second half, and compare both halves. Complexity: `O(n)` time and `O(1)` extra space. Restore the second half if the original list must remain unchanged.

## 7. Implement a doubly linked list

**Type:** Two-way list

Support insertion at both ends, deletion of a given node, forward traversal, and backward traversal. Update both `prev` and `next` links at every boundary.
