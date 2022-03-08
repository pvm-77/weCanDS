# What is array?
An array is a collection of similar type of data items and each data item is called an element of the array.

The elements of array share the same variable name but each element has a different index number known as subscript.

# Why do we need an array?

A variable can contain a single value at a time.Consider, a situation where we have to store and display 77 students roll number we have to do following:

1. Declare 77 diffrent variables to store roll numbers.
2. Assign a value to each of the variable.
3. Display each of the variable.

However, we as a programmer able to perform task but, all the above task would be difficult to manage.
Here concept of array comes into play where we can use array and we can store multiple values in a single array. 

# Declaration of  1-dimensional array 

**syntax**
data_type array_name[array_size];
here,
data_type is the data type of elements of an array.

array_name denotes the name of the array it can be valid any valid C++ identifier.

array_size specifies the number of elements that can be stored in array .
It may be positive integer constant or constant integer expression

Following are the ways in which we can declare the array

1. declaration of array by specifying size
```c++
int rollNumber[5];
```
2. declaration of array by initializing elements
```c++
int rollNumber[]={1,5,6,8,9};
```
3. declaration of array specifying size and initializing elements
```c++
int rollNumber[5]={1,2,5,55,6};
```
In 3rd case if size > no of elements ,remaining index value will be 0.
```c++
int rollNumber[5]={1,2};
```
here array size is 5 and elements 2
rollNumber[0]=1, rollNumber[1]=2, rollNumber[2]=0,
rollNumber[3]=0,rollNumber[4]=0

In 3rd case if size < no of elements , it would be give error
```c++
int rollNumber[2]={1,2,3}; /* error */
```



