/*

- Structures (also called structs) are a way to group several related variables into one place.

- It's pretty much similar to the structures in C language. 

*/

#include <iostream>
using namespace std;

// unnamed structures
struct{
    int rollNo;
    string name;
  }student;


// names structures
struct staff{
  int ID;
  string name;
};

int main(){

  student.rollNo = 43;
  student.name = "rajendran";

  cout << student.rollNo << " . " << student.name << endl; 

  // OP: 43 . rajendran

  staff staff1;
  staff1.ID = 1;
  staff1.name = "priyanka";

  cout << staff1.ID << " is the ID of the staff named " << staff1.name <<endl;

  // OP: 1 is the ID of the staff named priyanka


  return 0;
}