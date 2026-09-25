# Unit V: Dynamic Memory and Polymorphism

Dynamic memory is allocated with `new` and released with `delete`; arrays use `new[]` and `delete[]`. Every allocation must have a clear owner and exactly one matching release.

A virtual destructor is important when deleting a derived object through a base pointer. Prefer RAII and standard smart pointers in modern C++ so ownership is explicit.

## Polymorphism

Compile-time polymorphism includes function and operator overloading. Runtime polymorphism uses virtual functions and base-class pointers or references. A pure virtual function makes a class abstract and requires derived classes to implement the operation.

Early binding selects a function at compile time. Late binding selects an overridden virtual function at runtime. Self-referential classes contain a pointer or reference to an object of the same type, such as a linked-list node.
