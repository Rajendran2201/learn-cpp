#include <iostream>
#include <string>
using namespace std;

int main(){

  string name = "rajendran";
  cout << "my name contains " << name.length() << " characters" << endl; // OP: my name contains 9 characters

  cout << "The letter in index-3 of my name is " << name[3] << endl; // OP: The letter in index-3 of my name is e

  cout << "The last letter of my name is " << name[name.length() - 1] << endl; // OP: The last letter of my name is n

  cout << "The letter ar index-0 is " << name.at(0) << endl;
  // The letter ar index-0 is r
  // required the string library





  
  return 0;
}

// Note: In the following scripts, OP refers to Output

