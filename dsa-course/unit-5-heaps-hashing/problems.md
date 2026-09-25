# Unit V Problems

## 1. Implement a max-heap

**Type:** Heap operations

Implement insert using sift-up and remove-max using sift-down. Both operations should be `O(log n)`.

## 2. Build a heap from an array

**Type:** Bottom-up heapify

Start at the last non-leaf node and sift down toward index `0`. Explain why the complete build is `O(n)`, not `O(n log n)`.

## 3. Kth largest element

**Type:** Heap selection

Maintain a min-heap of size `k` while scanning the array. The root is the kth largest value. Complexity: `O(n log k)` time and `O(k)` space.

## 4. Merge k sorted arrays

**Type:** Priority queue

Insert the first value from every array into a min-heap. Remove the smallest and insert the next value from that same array. Complexity: `O(N log k)`.

## 5. Heapsort

**Type:** Comparison sorting

Sort an array in ascending order using a max-heap. Test duplicate values, already sorted values, reverse order, and an empty array.

## 6. Hash table with chaining

**Type:** Collision handling

Implement insert, search, and erase using a vector of linked buckets. Discuss average `O(1)` lookup and worst-case `O(n)` lookup.

## 7. Open addressing

**Type:** Linear or quadratic probing

Implement insertion and search with a `DELETED` marker. Explain why replacing a deleted slot with empty would incorrectly stop a later search.
