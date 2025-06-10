## OOP Principles 

The OOP paradigms such as 

1. Encapsulation
2. Polymorphism
3. Abstraction
4. Inheritance

are all pretty similar to Java. 

#### Inheritance

```cpp

// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};


```


#### Polymorphism


```cpp

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

```

### Virtual Functions


A virtual function is a member function in the base class that can be overridden in derived classes.

Virtual functions are a key part of polymorphism in C++. They let different objects respond differently to the same function call.


Without virtual, C++ decides which function to call based on the pointer type, not the actual object type.

With virtual, it checks the actual object the pointer is pointing to.

Or to put it even more simply:

- ithout virtual: the base function runs, even if the object is from a child class.
- With virtual: the child's version runs, like you expect.

```cpp

class Animal {
  public:
    virtual void sound() {
      cout << "Animal sound\n";
    }
};

class Dog : public Animal {
  public:
    void sound() override {
      cout << "Dog barks\n";
    }
};

int main() {
  Animal* a;
  Dog d;
  a = &d;
  a->sound(); // Outputs: Dog barks
  return 0;
}

```

The -> Operator in C++
You might be wondering why we used -> in the examples above.

The -> operator is used to access members (like functions or variables) through a pointer.


### C++ Templates

Templates let you write a function or class that works with different data types.

They help avoid repeating code and make programs more flexible.

Syntax: 

```
template <typename T>
return_type function_name(T parameter) {
  // code
} 

```

Example: 

```cpp

template <typename T>
T add(T a, T b) {
  return a + b;
}

int main() {
  cout << add<int>(5, 3) << "\n";
  cout << add<double>(2.5, 1.5) << "\n";
  return 0;
}

```

> The date and time can be used with the help of #include <ctime> library.

