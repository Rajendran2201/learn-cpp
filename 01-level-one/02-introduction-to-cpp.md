# Introduction to C-Plus-Plus

- C++ is a cross-platform language that can be used to create high-performance applications.

- C++ was developed by Bjarne Stroustrup, as an extension to the C language.

- C++ gives programmers a high level of control over system resources and memory.

- C++ is case sensitive
- Every statement ends with a semicolon ;

### Basic Explanation of syntax

`#include <iostream` -> header file library for input and output objects

`using namespace std` -> we can use names for objects and variables from the standard library

### Omitting Namespace

It is possible to omit the namespace but a few changes in the code has to be made. i.e. std keyword followed by :: operator should be used.

For example: 

```cpp
#include <iostream>

int main(){
  std::cout << "Hello";
}

```

### Basic Syntax

- Use `\n` for new line. Example: `cout << "Hello" << "\n";`
- This can also be done using endl manipulator 
Example: `cout << "Hello" << endl;`

> Both `\n` and `endl` are used to break lines

- Some more escape sequences are `\t`, `\\`, `\"` and so on.
- Comments are same as JAVA. `//` for single line comments  and `/**/` for multi-line comments

#### Data types 

1. int 
2. double
3. char
4. string
5. bool 
