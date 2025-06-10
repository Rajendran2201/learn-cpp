#include <iostream>
using namespace std;

// Constructors are same as Java or C
// Learn about Constructor Overloading


class Student{
  public:      // access specifier
    int roll_no;
    string name;

    void printStudent(){
      cout << "Roll number: " << roll_no << endl;
      cout << "Student Name: " << name << endl;
    }

};


int main(){

  Student std1;

  std1.roll_no = 43;
  std1.name = "Rajendran";

  cout << std1.roll_no << " - " << std1.name << endl; // OP: 43 - Rajendran

  std1.printStudent();

  // Roll number: 43
  // Student Name: Rajendran

  return 0;
}

/*

- Some methods can be defined outside the class as well.

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

*/

/*

ACCESS SPECIFIERS

1. public
2. private
3. protected

*/