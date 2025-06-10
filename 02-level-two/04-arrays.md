## Arrays 


- Arrays are also pretty similar. Let's look at some examples.


`string names[5] = {"raj", "hari", "amir", "kalyan", "livin"};`


use `sizeof()` operator to get the size of the array. The sizeof() operator returns the size of a type in bytes.

To get the actual size of the array: 

`int size = sizeof(names) / sizeof(names[0]);`

To access them, we can use the following.

`cout << names[2];`

We can also update the array. For example:

`names[2] = "manoj";`


let's access them using a `for` loop 


```cpp

for (string name : names){
  cout << name << endl;
}

```
> In C++, you don't have to specify the size of the array. 

`string names[] = {"raj", "hari", "amir", "kalyan", "livin"};`

> Note: If you are not declaring immediately, you must specify the size of the array.

- In Cpp, Fixed size are said to be arrays and the dynamic sizes are said to be *vectors*.


### Vectors 

For operations that require adding and removing array elements, C++ provides vectors, which are resizable arrays.

The size of a vector is dynamic, meaning it can grow and shrink as needed.

Vectors are found in the `<vector> `library, and they come with many useful functions to add, remove and modify elements:

Let's see an example: 

```cpp

vector<string> subjects = {"math", "design", "art"};

// to add a new element 

subjects.push_back("architecture");

```

### Multi-dimensional Arrays 


- Almost same as other object oriented programming languages. 





