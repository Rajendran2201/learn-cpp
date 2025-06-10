/*

An enum is a special type that represents a group of constants (unchangeable values).

To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma
 the first item of an enum has the value 0. The second has the value 1, and so on.

*/

#include<iostream>
using namespace std;

enum range {
  LOW, 
  MID, 
  HIGH
};

int main(){

  enum range mark = MID;
  cout << "The value is " << mark << endl;
  // OP: The value is 1


  return 0;
}


