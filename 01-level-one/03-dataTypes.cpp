#include <iostream>
using namespace std;

int main()
{
  int age = 19;
  cout << "My age is " << age; // Output: My age is 19

  cout << "\n"; // creates a new line

  age += 5;
  cout << "In 2030, my age would be " << age; // Output: In 2030, my age would be 24

  double mark = 96.32;

  cout << "\nMy mark is " << mark; // O/P: My mark is 96.32

  // Multiple Assignment of Variables

  int x = 10, y = 20, z = 30;
  cout << "\n"
       << x + y + z; // O/P: 60

// It is also possible to assign one value to multiple variables 
// Note: They have to initialised and declared separately
//       trying to do both at the same time causes an error

int a, b, c;
a = b = c = 52;
cout << "The values of a, b and c are " << a << b << c; // O/P: The values of a, b and c are 525252

// Constants must be intialised and declared at the same time. 

const string name = "Raj";
cout << "\nHey, My name is " << name; // O/P: Hey, My name is Raj

// auto keyword automatically detects the type of the variable based on the value assigned to it.
auto size = 9.2; // has to be declared immediately


}