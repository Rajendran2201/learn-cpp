// Let's explore the syntax of conditionals here..

#include <iostream>
using namespace std;

int main(){

  int a = 8, b = 9;

  if (a > b){
    cout << a << " is greater than " << b << endl;
  }else{
    cout << b << " is greater than " << a << endl;
  }

  // OP: 9 is greater than 8

  // ?: -> ternary operator

  // Switch statement 

  string x = "cat";
  int stringLength = x.length();

  switch(stringLength){
    case 1: 
      cout << "single letter word";
      break;
    case 2: 
      cout << "double letter word";
      break;
    case 3: 
      cout << "tripe letter word";
      break;
    case 4: 
      cout << "four letter word";
      break;
    case 5: 
      cout << "five letter word";
      break;
    default:
      cout << "word contains more than five letters";
  }

  // OP: tripe letter word

  return 0;
}