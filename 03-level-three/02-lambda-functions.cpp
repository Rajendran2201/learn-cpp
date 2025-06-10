/*

A lambda function is a small, anonymous function you can write directly in your code. It's useful when you need a quick function without naming it or declaring it separately.

*/

#include<iostream>
#include<string>
using namespace std;


int main(){

  auto message = [](string name){
    cout << "Hey, " << name << endl;
  };

  message("raj");

  // OP: Hey, raj

  return 0;
}


/*

Capture Clause [] (Optional)
You can use the [ ] brackets to give a lambda access to variables outside of it.

This is called the capture clause.

In this example, the lambda captures the variable x by value (a copy):

int main() {
  int x = 10;
  auto show = [x]() {
    cout << x;
  };

  show();
  return 0;
}

// OP: 10

Note: The lambda uses a copy of x. If you change x after defining the lambda, it won't affect the value inside the lambda.

Note: You can also use [&] to capture by reference.


CAPTURE BY REFERENCE 


int main() {
  int x = 10;

  auto show = [&x]() {
    cout << x;
  };

  x = 20;  // Change x after the lambda is created

  show();
  return 0;
}



*/