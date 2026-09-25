# Unit III: Stacks and Queues

## Stack

A stack follows LIFO: last in, first out. Main operations are `push`, `pop`, and `top`, normally `O(1)`. It can be implemented with an array or linked list.

Applications include function-call management, undo operations, balanced brackets, postfix evaluation, and expression conversion.

## Queue

A queue follows FIFO: first in, first out. Main operations are `enqueue` and `dequeue`. A circular array avoids shifting elements after every deletion.

## Deque and priority queue

A deque supports insertion and deletion at both ends. A priority queue removes the item with the highest or lowest priority, commonly using a heap.

## Expression notation

- Infix: `A + B`
- Prefix: `+ A B`
- Postfix: `A B +`

A stack is used to manage operators and parentheses while converting or evaluating expressions.
