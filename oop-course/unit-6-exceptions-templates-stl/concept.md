# Unit VI: Exceptions, Templates and STL

Exceptions separate error handling from normal logic. A `try` block contains risky code, `throw` reports an error, and `catch` handles a matching exception. Catch specific exceptions before general ones and do not use exceptions for ordinary control flow.

A function template or class template lets one algorithm work with multiple types. Templates are checked when instantiated, so useful type requirements should be clear.

## STL

Containers store data, algorithms process ranges, and iterators connect them. `vector` provides dynamic contiguous storage, `list` provides linked nodes, and `map` stores ordered key-value pairs. Common algorithms include `sort`, `find`, `count`, and `reverse`.
