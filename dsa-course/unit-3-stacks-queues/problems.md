# Unit III Problems

## 1. Stack using an array

**Type:** Linear stack

Implement `push`, `pop`, `top`, `isEmpty`, and overflow detection. Every operation should be `O(1)`.

## 2. Stack using a linked list

**Type:** Dynamic stack

Use the head as the top so insertion and deletion remain `O(1)`. Handle underflow when popping an empty stack.

## 3. Balanced parentheses

**Type:** Stack application

Check `()`, `{}`, and `[]` using a stack. Push opening symbols and verify each closing symbol matches the top. Complexity: `O(n)` time.

Example: `{[()]}` is balanced; `{[(])}` is not.

## 4. Infix to postfix conversion

**Type:** Expression transformation

Send operands directly to output and use a stack for operators. Respect precedence and associativity. Example: `A + B * C` -> `A B C * +`.

## 5. Evaluate a postfix expression

**Type:** Stack evaluation

Push operands. On an operator, pop the right operand first, then the left operand, calculate, and push the result. Example: `2 3 * 4 +` -> `10`.

## 6. Circular queue

**Type:** Queue implementation

Use front, rear, and size or a full flag. Wrap indexes using modulo capacity. Enqueue and dequeue should be `O(1)`.

## 7. Sliding-window maximum

**Type:** Deque optimization

For every window of size `k`, maintain a decreasing deque of indexes. The maximum is at the front. Complexity: `O(n)` instead of `O(nk)`.
