# Unit I: Arrays, Complexity, Sorting and Searching

## Complexity

Time complexity describes how the number of operations grows with input size `n`. Space complexity describes extra memory used by an algorithm.

Common orders, from usually faster to slower:

`O(1)`, `O(log n)`, `O(n)`, `O(n log n)`, `O(n^2)`.

Omega describes a lower bound, Big-O describes an upper bound, and Theta describes a tight bound.

## Arrays

An array stores equal-type values in contiguous memory. Index access is `O(1)`. Inserting or deleting in the middle is `O(n)` because later values may need to shift.

## Sorting

- Bubble sort: repeatedly swaps adjacent values; `O(n^2)` average and worst case.
- Selection sort: selects the minimum for each position; `O(n^2)`.
- Insertion sort: inserts each value into a sorted prefix; `O(n^2)`, but good for nearly sorted data.

## Searching

- Linear search checks values one by one and works on unsorted data: `O(n)`.
- Binary search repeatedly halves a sorted search range: `O(log n)`.

Binary search must maintain a correct sorted range and use `middle = left + (right - left) / 2`.
