# Unit II: Pointers, References, Arrays and Strings

A pointer stores an address and can be changed to point elsewhere. A reference is an alias that must be initialized and cannot later refer to a different object.

## Pointer safety

A null pointer points to no object. A dangling pointer refers to an object whose lifetime ended. A wild pointer has not been initialized. Always initialize pointers and avoid dereferencing invalid addresses.

Pointer arithmetic is meaningful within an array. A pointer to pointer stores the address of another pointer. A void pointer can hold an address of any type, but it must be cast before dereferencing.

## Arrays and strings

Arrays have fixed size and contiguous storage. A C-style string ends with `\\0`; `std::string` is safer and supports useful operations. In a class, arrays can be members and strings can be processed with member functions.
