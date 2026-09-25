# Unit III: Files, Constructors and Destructors

File streams use `ifstream` for reading, `ofstream` for writing, and `fstream` for both. Always check whether a file opened successfully and close it when finished.

Sequential access processes records from the beginning in order. Random access uses `seekg` and `seekp` to move the read and write positions. Binary files store bytes directly and may require `read` and `write`.

## Object lifetime

A constructor initializes an object and has the class name with no return type. A default constructor takes no required arguments. A parameterized constructor receives values. A copy constructor creates an object from another object of the same class.

A destructor runs when an object is destroyed and releases owned resources. Initialization lists initialize members before the constructor body and are required for const members, references, and base classes.
