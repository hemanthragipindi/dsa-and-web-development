# Unit III Coding Problems

## 1. Stack using an array

Implement `push`, `pop`, `peek`, `isEmpty`, and `isFull`. Print `Overflow` and `Underflow` for invalid operations.

## 2. Stack using a linked list

Implement the same stack interface using nodes. The top operation must remain `O(1)` and every removed node must be deleted.

## 3. Balanced brackets

Given a string containing `()`, `{}`, `[]`, determine whether every opening bracket is closed in the correct order.

**Examples:** `{[()]}` -> `YES`; `{[(])}` -> `NO`.

## 4. Infix to postfix and prefix

Convert an expression containing operands, parentheses, and operators `+ - * / ^` to postfix and prefix notation. Respect precedence and right associativity of exponentiation.

## 5. Evaluate postfix expression

Evaluate a space-separated postfix expression containing integers and the operators `+ - * /`.

**Example:** `5 1 2 + 4 * + 3 -` -> `14`.

## 6. Queue and circular queue

Implement enqueue, dequeue, front, and display using a fixed-size circular array. Test wraparound after removing elements from the front.

## 7. Queue using two stacks

Implement FIFO `enqueue` and `dequeue` using two LIFO stacks. Explain why the amortized complexity of each operation is `O(1)`.

## 8. Sliding-window maximum

For an array and window size `k`, print the maximum value in every window using a deque.

**Example:** `[1, 3, -1, -3, 5, 3, 6, 7]`, `k = 3` -> `[3, 3, 5, 5, 6, 7]`.
