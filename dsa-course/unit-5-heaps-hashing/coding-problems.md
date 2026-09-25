# Unit V Coding Problems

## 1. Min-heap implementation

Implement insert, get-min, extract-min, and decrease-key using a vector. Maintain the heap property after every operation.

## 2. Heap construction and heapsort

Build a max-heap from an unsorted array using bottom-up heapify, then implement heapsort and print the ascending result.

## 3. Kth largest element

Find the kth largest element using a min-heap of size `k`.

**Example:** `[3, 2, 1, 5, 6, 4]`, `k = 2` -> `5`.

Target complexity: `O(n log k)` time.

## 4. Top k frequent values

Count frequencies with a hash table and use a heap to print the `k` most frequent values. Define a tie-breaking rule for equal frequencies.

## 5. Merge k sorted arrays

Use a min-heap containing the current value from each array. Remove the smallest item and insert the next item from its source array until all values are merged.

## 6. Hash table with separate chaining

Implement `insert(key, value)`, `search(key)`, and `erase(key)` using an array of buckets. Test collisions by choosing keys that map to the same bucket.

## 7. Hash table with open addressing

Implement linear probing with `EMPTY`, `OCCUPIED`, and `DELETED` states. Search must continue past deleted slots.

## 8. Longest consecutive sequence

Given an unsorted integer array, find the length of the longest consecutive sequence using a hash set.

**Example:** `[100, 4, 200, 1, 3, 2]` -> `4`, from `1, 2, 3, 4`.
