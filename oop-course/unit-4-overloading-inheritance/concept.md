# Unit IV: Operator Overloading, Conversion and Inheritance

Operator overloading gives operators meaning for user-defined types. It should preserve the operator's expected meaning and cannot change precedence, number of operands, or create a new operator.

Unary operators work on one operand; binary operators work on two. An overloaded operator may be a member or a friend function.

Type conversion may be basic-to-class through a converting constructor, or class-to-basic through a conversion function such as `operator double()`. Mark single-argument constructors `explicit` when implicit conversion is unsafe.

## Inheritance

Inheritance models an is-a relationship. Common forms are single, multilevel, multiple, hierarchical, and hybrid. Access mode controls how base members appear in the derived class. Ambiguity in multiple inheritance can be resolved with scope qualification or a virtual base class.
