# File Handling in C++: Complete Concept Guide

## 1. Introduction to File Handling

File handling is used to store data permanently on a disk. Unlike variables and arrays, which lose data when the program ends, files keep the data for future use.

In C++, file handling is done with the `fstream`, `ifstream`, and `ofstream` classes from the `<fstream>` header.

- `ofstream` -> used for writing output to a file
- `ifstream` -> used for reading input from a file
- `fstream` -> used for both reading and writing

## 2. Why File Handling Is Needed

File handling is important because:

- data can be stored permanently
- large data can be managed outside memory
- programs can read previous data later
- data can be shared between different runs of a program

Example:

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("student.txt");
    file << "Hemanth Reddy\n";
    file << 20;
    file.close();
    cout << "Data written to file" << endl;
    return 0;
}
```

### Explanation

- `ofstream file("student.txt")` opens a file named `student.txt` for writing.
- `file << "Hemanth Reddy\n";` writes text to the file.
- `file << 20;` writes the number.
- `file.close();` closes the file.

## 3. Opening a File

A file is opened using the `open()` function or directly in the object constructor.

### Syntax

```cpp
ofstream file("filename.txt");
ifstream file("filename.txt");
fstream file("filename.txt", ios::in | ios::out);
```

### File Opening Modes

These modes decide how the file is used:

- `ios::in` -> open for reading
- `ios::out` -> open for writing
- `ios::app` -> append data at the end
- `ios::ate` -> move pointer to end of file
- `ios::binary` -> open in binary mode
- `ios::trunc` -> delete existing contents while opening
- `ios::nocreate` -> open only if file exists
- `ios::noreplace` -> open only if file does not exist

Example:

```cpp
fstream file("student.txt", ios::in | ios::out | ios::app);
```

### Explanation

This opens the file for both reading and writing, and adds new data at the end without deleting the previous content.

## 4. Writing Data to a File

Data can be written using the insertion operator `<<`.

Example:

```cpp
#include <fstream>
using namespace std;

int main() {
    ofstream out("student.txt");
    out << "Name: Hemanth\n";
    out << "Marks: 90\n";
    out.close();
    return 0;
}
```

### Explanation

The program creates a file and writes both text and numbers into it.

## 5. Reading Data from a File

Data can be read using the extraction operator `>>` or functions like `getline()`.

Example:

```cpp
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream in("student.txt");
    string name;
    int marks;

    in >> name >> marks;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
    in.close();
    return 0;
}
```

### Explanation

- `ifstream in("student.txt")` opens the file for reading.
- `in >> name >> marks;` reads data from the file.
- `cout` prints the values.

## 6. Reading Line by Line

When a line contains spaces, `>>` may not read the full line. For that, `getline()` is used.

Example:

```cpp
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream in("student.txt");
    string line;

    while (getline(in, line)) {
        cout << line << endl;
    }

    in.close();
    return 0;
}
```

### Explanation

This reads the file line by line. It is useful when a record contains spaces or multiple words.

## 7. Opening and Checking File Status

Before using a file, it is important to check whether the file opened successfully.

Example:

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream file("student.txt");

    if (!file) {
        cout << "Error: File not found." << endl;
        return 1;
    }

    cout << "File opened successfully" << endl;
    file.close();
    return 0;
}
```

### Explanation

The condition `if (!file)` checks whether the file failed to open. If it is false, the file opened successfully.

## 8. Closing a File

Closing a file is necessary so that all buffered data is saved and resources are released.

Example:

```cpp
file.close();
```

### Explanation

This statement closes the file after reading or writing.

## 9. File Pointers

A file pointer tells the position where the next read or write will happen.

There are two file pointers:

- `get pointer` or `read pointer` for input
- `put pointer` or `write pointer` for output

## 10. Random Access in File Handling

Random access means moving the file pointer to any position without reading the file from the beginning.

### Functions

- `seekp()` -> moves the output/write pointer to a specific position
- `seekg()` -> moves the input/read pointer to a specific position
- `tellp()` -> returns the current position of the output pointer
- `tellg()` -> returns the current position of the input pointer

### Example

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream file("student.txt", ios::in | ios::out);

    file << "Hemanth reddy\n";
    file << 20;

    file.seekg(0, ios::beg);        // move read pointer to beginning
    string name;
    int marks;

    getline(file, name);
    file >> marks;

    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
    file.close();
    return 0;
}
```

### Explanation

- `seekg(0, ios::beg)` moves the read pointer to the start.
- `tellg()` can be used to know the current position.
- `seekp()` is used for writing operations.

### Example using `tellg()` and `tellp()`

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream file("student.txt", ios::in | ios::out);

    file << "Hemanth\n";
    streampos p = file.tellp();
    cout << "Current write position: " << p << endl;

    file.seekg(0, ios::beg);
    streampos g = file.tellg();
    cout << "Current read position: " << g << endl;

    file.close();
    return 0;
}
```

### Explanation

`tellp()` tells the current position of the write pointer and `tellg()` tells the current position of the read pointer.

## 11. Text Files vs Binary Files

### Text files

- store characters as readable text
- human-readable
- easier to understand

Example:

```cpp
ofstream file("data.txt");
file << "Hello";
```

### Binary files

- store data in raw binary form
- faster and more compact
- not directly readable by humans

Example:

```cpp
fstream file("data.bin", ios::binary | ios::out);
```

## 12. File Handling with Classes and Objects

You can also store structured data in files.

Example:

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("student.txt");
    string name = "Hemanth Reddy";
    int marks = 95;

    file << name << " " << marks << endl;
    file.close();
    return 0;
}
```

### Explanation

This stores related information like name and marks together in a file.

## 13. Basic File Handling Program Example

```cpp
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    fstream file("student.txt", ios::in | ios::out | ios::trunc);

    if (!file) {
        cerr << "Unable to open file" << endl;
        return 1;
    }

    file << "Hemanth reddy\n";
    file << 20 << endl;

    file.seekg(0);

    string name;
    int marks;

    getline(file, name);
    file >> marks;

    cout << "Name of the student is: " << name << endl;
    cout << "Marks of the student is: " << marks << endl;
    file.close();
    return 0;
}
```

### Explanation

- The file is opened for both reading and writing.
- `ios::trunc` clears old content before writing new content.
- `getline()` reads the full name line.
- `file >> marks` reads the integer marks.
- The program prints both values on the screen.

## 14. Important Points to Remember

- Always close the file after working with it.
- Check whether the file opened successfully.
- Use `getline()` when reading strings with spaces.
- Use `seekg()` and `seekp()` for random access.
- Use appropriate file modes for read/write/append operations.

## 15. Viva Questions with Answers

### Short answer questions

1. What is file handling in C++?
   - Answer: File handling is the process of creating, opening, reading, writing, updating, and closing files in a program so that data can be stored permanently.

2. Why is file handling important?
   - Answer: It helps store data permanently, reuse it later, and manage large amounts of information beyond the lifetime of the program.

3. What is the difference between `ofstream`, `ifstream`, and `fstream`?
   - Answer: `ofstream` is used for writing, `ifstream` is used for reading, and `fstream` supports both reading and writing.

4. What is the purpose of `close()` in file handling?
   - Answer: It closes the file, saves buffered data, and releases system resources.

5. What is the use of `ios::in` mode?
   - Answer: It opens a file for reading only.

6. What is the difference between text mode and binary mode?
   - Answer: Text mode stores data as characters, while binary mode stores data in raw binary format without conversion.

7. What is a file pointer?
   - Answer: A file pointer is a marker showing the current position where the next read or write operation will occur.

8. What is the use of `seekg()`?
   - Answer: `seekg()` moves the input/read pointer to a specific location in the file.

9. What is the use of `seekp()`?
   - Answer: `seekp()` moves the output/write pointer to a specific location so data can be written at that point.

10. What does `tellg()` return?
   - Answer: `tellg()` returns the current position of the get/read pointer.

### Descriptive questions

1. Explain different file opening modes in C++ with examples.
   - Answer: Modes like `ios::in`, `ios::out`, `ios::app`, `ios::ate`, `ios::binary`, and `ios::trunc` are used to define how a file is opened. For example, `ios::out` opens the file for writing, while `ios::app` adds data at the end without deleting the previous content.

2. Write a program to write student data into a file and read it back.
   - Answer: Use `ofstream` to write data and `ifstream` to read it. Example: write name and marks into `student.txt`, then reopen the file and display them using `>>` or `getline()`.

3. Explain the difference between sequential access and random access.
   - Answer: In sequential access, data is read in order from the beginning, while random access allows moving directly to any position using `seekg()` or `seekp()`.

4. What happens if a file cannot be opened? How can we handle it?
   - Answer: The file stream enters a failure state. We can check it using `if (!file)` or `if (file.fail())` and print an error message before exiting.

5. Why is `getline()` preferred over `>>` when reading names containing spaces?
   - Answer: `>>` stops at whitespace, so it cannot read a full name with spaces. `getline()` reads the entire line including spaces.

6. Explain the use of `tellp()` and `tellg()` in file handling.
   - Answer: `tellp()` returns the current write pointer position and `tellg()` returns the current read pointer position. They are useful when tracking file positions while working with random access.

7. Write a short note on the importance of file handling in data storage.
   - Answer: File handling is important because it preserves data permanently, allows processing of large datasets, and helps in applications like result management, banking, inventory, and database systems.

8. What is the advantage of binary file handling over text file handling?
   - Answer: Binary files store data more compactly and are faster for large data, but they are not directly readable by humans.

9. How do random access functions help in updating specific records in a file?
   - Answer: They allow the program to jump directly to the required record location, update or read it, and then continue without processing all earlier records.

10. Explain the complete flow of reading and writing in a C++ file program.
   - Answer: First, open the file in the required mode. Then write or read data using `<<` or `>>`, check file status, move pointers if needed, and finally close the file using `close()`.

## 16. Final Conclusion

File handling is one of the most important concepts in C++. It allows us to store and retrieve data permanently, making programs more useful and realistic. By learning file modes, reading and writing methods, and random access functions such as `seekg()`, `seekp()`, `tellg()`, and `tellp()`, students can build efficient programs that work with persistent data.

This is the foundation of many real-world applications like record management, database systems, student management, and inventory systems.