# STL - Standard Template Library

STL is a library that consist of different data structures and algorithms to effectively store and manipulate data.

The most common data structures in Cpp are 

1. Vector 
2. List
3. Stack 
4. Queue
5. Deque
6. Set 
7. Map

These data structures have to be included through the library before usage. 

```cpp
// Include the vector library
#include <vector>

// Include the list library
#include <list>

// Include the set library
#include <set>

// Include the map library
#include <map>

// Include the stack library
#include <stack>

// Include the queue library
#include <queue>

```

##  1. <a name='Vectors'></a>1. Vectors 

```cpp
#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> marks = {99, 96, 99, 97, 98, 100};
  cout << marks[3] << endl;
  for(int mark: marks){
    cout << mark << endl;
  }
  return 0;
}

```

The methods in vectors are, 

1. `push_back()`
2. `pop_back()`
3. `size()`
4. `empty()`

##  2. <a name='Lists'></a>2. Lists 

A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.

However, two major differences between lists and vectors are:

- You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

- Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers

```cpp
#include<iostream>
#include<list>
using namespace std;

int main(){

  list<string> names = {"prem", "kavin", "riya"};
  cout << names.front(); // OP: prem
  cout << nmaes.back(); // OP: riya

  return 0;
}

```

The methods in lists are: 
1. `push_front()`
2. `push_back()`
3. `pop_front()`
4. `pop_back()`
5. `size()`
6. `empty()`

##  3. <a name='Stacks'></a>3. Stacks 

A stack stores multiple elements in a specific order, called LIFO.

LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes, where pancakes are both added and removed from the top. So when removing a pancake, it will always be the last one you added. This way of organizing elements is called LIFO in computer science and programming.

Unlike vectors, elements in the stack are not accessed by index numbers. Since elements are added and removed from the top, you can only access the element at the top of the stack.


```cpp
#include<iostream>
#include<stack>
int main(){
  
  stack<string> colors = {"red", "blue", "yellow"};

  return 0;
}

```

The methods in stack are, 

1. `push()`
2. `pop()`
3. `top()`
4. `empty()`

## 4. Queue

A queue stores multiple elements in a specific order, called FIFO.

FIFO stands for First in, First Out. To visualize FIFO, think of a queue as people standing in line in a supermarket. The first person to stand in line is also the first who can pay and leave the supermarket. This way of organizing elements is called FIFO in computer science and programming.

Unlike vectors, elements in the queue are not accessed by index numbers. Since queue elements are added at the end and removed from the front, you can only access an element at the front or the back

The methods are: 


1. `push()`
2. `pop()`
3. `size()`
4. `empty()`
5. `front()`
6. `back()`

## 5. Deque 
- It can be accessed either from front or back. (Doubly Ended Queue)

- The elements are usually accessed using `.at()` method

## 6. Sets

A set stores unique elements where they:

- Are sorted automatically in ascending order.
- Are unique, meaning equal or duplicate values are ignored.
- Can be added or removed, but the value of an existing - element cannot be changed.
- Cannot be accessed by index numbers, because the order is based on sorting and not indexing.

#### Sort a Set in descending Order

```cpp
// Sort elements in a set in descending order
set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};
// Print the elements
for (int num : numbers) {
  cout << num << "\n";
}

```

The methods in set are: 

1. `insert()`
2. `erase()`
3. `size()`
4. `empty()`

## 7. Maps 

A map stores elements in "key/value" pairs.

Elements in a map are:

- Accessible by keys (not index), and each key is unique.
- Automatically sorted in ascending order by their keys.

```cpp
// Create a map that will store the name and age of different people
map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

 // Get the value associated with the key "Adele"
cout << "Adele is: " << people.at("Adele") << "\n";

// Get the value associated with the key "Bo"
cout << "Bo is: " << people.at("Bo") << "\n";

```

