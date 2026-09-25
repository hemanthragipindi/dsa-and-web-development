# Unit I: C++ Basics and Functions

C++ supports procedural and object-oriented programming. A class combines data and functions; an object is an instance of a class.

## Classes and access control

`public` members can be used by clients, `private` members protect representation, and `protected` members are available to derived classes. Encapsulation keeps invalid state from being changed directly.

Static data belongs to the class rather than one object. A static member function has no `this` pointer and can directly access only static members.

## Functions

Default arguments must be supplied from right to left. Inline functions may reduce function-call overhead, but the compiler decides whether to inline them. Function overloading uses different parameter lists, not different return types.

A friend function is not a member but may access private data when declared with `friend`. References are aliases and must refer to an existing object. Recursion needs a base case and a smaller subproblem.
