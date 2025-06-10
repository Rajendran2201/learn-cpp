## References

> The references and pointer concepts are similar to C language. 

let's look at some examples.


```cpp

string food = "Pizza";  // food variable
string &meal = food;    // reference to food

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza
```
In the example from the previous page, the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.

To access it, use the & operator, and the result will represent where the variable is stored:

```cpp

string food = "Pizza";

cout << &food; // Outputs something like 0x6dfed4
```

References and pointers gives the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance.

## Pointers

A pointer however, is a variable that stores the memory address as its value.

A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:

```cpp

string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

```

*Deference*

```cpp

string food = "Pizza";  // Variable declaration
string* ptr = &food;    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n";

```


