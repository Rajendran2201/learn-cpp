# Functions

The functions are as a=same as in C language.

Let's look at some examples from W3Schools.


```cpp
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Liam Refsnes
// Jenny Refsnes
// Anja Refsnes

```

Default parameters

```cpp

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

```

Pass by reference 

```cpp

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}


```

Pass Arrays as Function Parameters


```cpp
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

```

Pass Structure to a Function


```cpp
struct Car {
  string brand;
  int year;
};

void myFunction(Car c) {
  cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
}

```

### Function Overloading

```cpp

int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)

```

### Variable scopes 

1. local scope 
2. global scope 

Naming variables: If you operate with the same variable name inside and outside of a function, C++ will treat them as two separate variables; One available in the global scope (outside the function) and one available in the local scope (inside the function).


## Recursion

Recursion is a powerful concept which is same as C or Java in Cpp. 

