# Unit I Problems

## 1. Second largest element

**Type:** Array traversal

Find the second largest distinct value without sorting. Track the largest and second largest values in one pass. Complexity: `O(n)` time and `O(1)` extra space.

Example: `[7, 2, 9, 4, 9]` -> `7`.

## 2. Rotate an array by `k`

**Type:** Array manipulation

Rotate `[1, 2, 3, 4, 5]` right by `2` positions to get `[4, 5, 1, 2, 3]`. The reversal method uses three reversals and runs in `O(n)` time with `O(1)` extra space.

## 3. Merge two sorted arrays

**Type:** Two-pointer technique

Use one pointer for each input and repeatedly copy the smaller value. Complexity is `O(n + m)` time.

Example: `[1, 4, 8]` and `[2, 3, 9]` -> `[1, 2, 3, 4, 8, 9]`.

## 4. Binary search first occurrence

**Type:** Modified binary search

In a sorted array with duplicates, continue searching left after finding the target. Complexity: `O(log n)`.

Example: `[1, 2, 2, 2, 5]`, target `2` -> index `1`.

## 5. Sort an array of 0s, 1s and 2s

**Type:** Dutch National Flag

Maintain low, middle and high regions. Place 0 before low, 2 after high, and inspect 1. Complexity: `O(n)` time and `O(1)` extra space.

## 6. Compare sorting algorithms

**Type:** Analysis

For a nearly sorted array, insertion sort can be faster in practice. For a simple teaching implementation, selection sort uses few swaps but still takes `O(n^2)` comparisons. Explain the time and space trade-off for each algorithm.
