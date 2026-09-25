# Unit I Coding Problems

## 1. Complexity: operation counter

Write a program that receives `n` and prints the number of times the inner statement executes in each of these loops: one loop, two nested loops, and a loop that doubles its counter. State the complexity of each result.

**Input:** A positive integer `n`.

**Output:** Counts for `O(n)`, `O(n^2)`, and `O(log n)` examples.

## 2. Array insertion and deletion

Implement insertion at a given valid index and deletion at a given index using a fixed-size array. Shift elements as required and print the resulting array.

**Edge cases:** insert at index `0`, insert at the end, delete the first element, and delete the last element.

## 3. Maximum subarray sum

Given an integer array, find the contiguous subarray with the largest sum using Kadane's algorithm.

**Input:** `[-2, 1, -3, 4, -1, 2, 1, -5, 4]`.

**Output:** `6`, from subarray `[4, -1, 2, 1]`.

**Target:** `O(n)` time and `O(1)` extra space.

## 4. Implement bubble, selection and insertion sort

Write all three sorting algorithms and print the sorted result for the same input. Count comparisons and swaps to compare their behavior on random, sorted, and reverse-sorted input.

## 5. Linear search with duplicate positions

Find every index at which a target appears. Return an empty result when it does not occur.

**Example:** Array `[4, 2, 4, 7, 4]`, target `4` -> indexes `0 2 4`.

## 6. Binary search variants

Implement functions for exact search, first occurrence, last occurrence, and count of a target in a sorted array. Each function should run in `O(log n)` time.

## 7. Merge overlapping intervals

Given intervals such as `[[1, 3], [2, 6], [8, 10], [9, 12]]`, merge all overlapping intervals.

**Output:** `[[1, 6], [8, 12]]`.

Sort by start time first, then scan once.
