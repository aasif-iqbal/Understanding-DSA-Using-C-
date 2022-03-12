/*

#############--------------------Operators in C/C++-------------------------------###############

Operators are the foundation of any programming language. We can define operators as symbols that help us to perform specific mathematical and logical computations on operands.

C/C++ has many built-in operators and can be classified into 6 types:

1. Arithmetic Operators (++, --, +, -, *, /, %)
2. Relational Operators
3. Logical Operators
4. Bitwise Operators
5. Assignment Operators
6. Other Operators

1. Arithmetic Operators :
These operators are used to perform arithmetic/mathematical operations on operands. Examples: (+, -, *, /, %,++,–). Arithmetic operators are of two types: 

a) Unary Operators: Operators that operate or work with a single operand are unary operators. For example: Increment(++) and Decrement(-–) Operators
For Example:
	int val = 5;
	++val; // 6
b) Binary Operators: Operators that operate or work with two operands are binary operators. For example: Addition(+), Subtraction(-), multiplication(*), Division(/) operators.
For Example:
	int a = 7;
	int b = 2;
	cout<<a+b; // 9

2. Relational Operators:

These are used for the comparison of the values of two operands. 
For example, checking if one operand is equal to the other operand or not, an operand is greater than the other operand or not, etc. Some of the relational operators are (==, >= , <= )

3. Logical Operators:

Logical Operators are used to combining two or more conditions/constraints or to complement the evaluation of the original condition in consideration.
The result of the operation of a logical operator is a Boolean value either true or false. 

4. Bitwise Operators: 

The Bitwise operators are used to perform bit-level operations on the operands. 
The operators are first converted to bit-level and then the calculation is performed on the operands.
The mathematical operations such as addition, subtraction, multiplication, etc. can be performed at bit-level for faster processing. 
For example, the bitwise AND represented as & operator in C or C++ takes two numbers as operands and does AND on every bit of two numbers. 
The result of AND is 1 only if both bits are 1.

int a = 5, b = 9;   // a = 5(00000101), b = 9(00001001)
cout << (a ^ b);   //  00001100
cout <<(~a);       // 11111010

5. Assignment Operators: 

Assignment operators are used to assigning value to a variable. 
The left side operand of the assignment operator is a variable and the 
right side operand of the assignment operator is a value. The value on 
the right side must be of the same data type as the variable on the 
left side otherwise the compiler will raise an error. 

6. Other Operators: 

There are some other operators available in C or C++ used to perform some specific tasks. Some of them are discussed here: 
a. Sizeof() operator
b. Comma Operator
c. Conditional operator

======================================================================================================================================

#############-------------------- Unary operators in C/C++ -------------------------------###############

Unary operator: are operators that act upon a single operand to produce a new value.

Types of unary operators:

1. unary minus(-)
2. increment(++)
3. decrement(- -)
4. NOT(!)
5. Addressof operator(&)
6. sizeof()

1. Unary minus
The minus operator changes the sign of its argument. A positive number becomes negative, and a negative number becomes positive.
 int a = 10;
 int b = -a;  // b = -10
unary minus is different from subtraction operator, as subtraction requires two operands.

2. Increment
It is used to increment the value of the variable by 1. The increment can be done in two ways:

a. prefix increment
In this method, the operator precedes the operand (e.g., ++a). The value of operand will be altered before it is used.
  int a = 1;
  int b = ++a;  // b = 2

b. postfix increment
In this method, the operator follows the operand (e.g., a++). The value operand will be altered after it is used.
 int a = 1;
 int b = a++;   // b = 1
 int c = a;     // c = 2

3. Decrement
It is used to decrement the value of the variable by 1. The decrement can be done in two ways:

a. prefix decrement
In this method, the operator precedes the operand (e.g., – -a). The value of operand will be altered before it is used.
  int a = 1;
  int b = --a;  // b = 0

b. postfix decrement
In this method, the operator follows the operand (e.g., a- -). The value of operand will be altered after it is used.
 int a = 1;
 int b = a--;   // b = 1
 int c = a;     // c = 0


4. NOT(!): It is used to reverse the logical state of its operand. If a condition is true, then Logical NOT operator will make it false.
   If x is true, then !x is false
   If x is false, then !x is true 

5. Addressof operator(&): It gives an address of a variable. It is used to return the memory address of a variable.
These addresses returned by the address-of operator are known as pointers because they “point” to the variable in memory.

int a;
int *ptr;
ptr = &a; // address of a is copied to the location ptr. 

6. sizeof(): 
This operator returns the size of its operand, in bytes. The sizeof operator always precedes its operand.The operand is an expression, 
or it may be a cast.


#include <iostream>
using namespace std;
  
int main()
{
   float n = 0;
   cout << "size of n: " << sizeof(n);
   return 1;
}
output:
size of n: 4

==========================================================================================================================

#############-------------------- Pre-increment or Pre-decrement in C++ -------------------------------###############

In C++, pre-increment (or pre-decrement) can be used as l-value, 
but post-increment (or post-decrement) can not be used as l-value.

l-value:
An lvalue (locator value) represents an object that occupies some identifiable location in memory (i.e. has an address).

rvalues are defined by exclusion. Every expression is either an lvalue or an rvalue, so, an rvalue is an expression that
does not represent an object occupying some identifiable location in memory.

Notes: L-value: “l-value” refers to memory location which identifies an object. l-value may appear as either left hand
  	   or right hand side of an assignment operator(=). l-value often represents as identifier.The

for more details see https://www.geeksforgeeks.org/lvalue-and-rvalue-in-c-language/

For example, following program prints a = 20 (++a is used as l-value)

---------------- Pre-increment ---------------
#include <iostream>

using namespace std;

int main()
{
    int a = 10;
  
    ++a = 20; // works
  
    cout<< a;
    return 0;
}
output:20

---------------- Post-increment --------------
#include <iostream>

using namespace std;

int main()
{
    int a = 10;
  
    a++ = 20;  // error
  
    cout<< a;
    return 0;
}
main.cpp:188:11: error: lvalue required as left operand of assignment
   188 |     a++ = 20; 

## How ++a is different from a++ as lvalue?

It is because ++a returns an lvalue, which is basically a reference to the
variable to which we can further assign — just like an ordinary variable. 
It could also be assigned to a reference as follows:

int &ref = ++a; // valid
int &ref = a++; // invalid

Whereas if you recall how a++ works, it doesn’t immediately increment the value
it holds. For brevity, you can think of it as getting incremented in the next statement.
So what basically happens is that a++ returns an rvalue, which is basically just a value 
like the value of an expression which is not stored. You can think of a++ = 20; as follows 
after being processed:   

int a = 10;

// On compilation, a++ is replaced by the value of a which is an rvalue:
10 = 20; // Invalid

// Value of a is incremented
a = a + 1;
That should help to understand why a++ = 20; won’t work.

========================================================================================================================

#######################-------------- new and delete operators in C++ for dynamic memory ---------------################

Dynamic memory allocation in C/C++ refers to performing memory allocation manually by programmer. 
Dynamically allocated memory is allocated on Heap and non-static and local variables get memory 
allocated on Stack.

- One use of dynamically allocated memory is to allocate memory of variable size which is not possible
  with compiler allocated memory except variable length arrays.

- The most important use is flexibility provided to programmers. We are free to allocate and deallocate
  memory whenever we need and whenever we don’t need anymore. There are many cases where this flexibility helps. 
  Examples of such cases are Linked List, Tree, etc.

# How is it different from memory allocated to normal variables? 
- For normal variables like “int a”, “char str[10]”, etc, memory is automatically allocated and deallocated. 
- For dynamically allocated memory like “int *p = new int[10]”, it is programmers responsibility to deallocate 
  memory when no longer needed. If programmer doesn’t deallocate memory, it causes memory leak (memory is not 
  deallocated until program terminates). 

# How is memory allocated/deallocated in C++? 
- C uses malloc() and calloc() function to allocate memory dynamically at run time and uses free() function to 
  free dynamically allocated memory. C++ supports these functions and also has two operators new and delete that 
  perform the task of allocating and freeing the memory in a better and easier way.  

# new operator

- The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available, 
  new operator initializes the memory and returns the address of the newly allocated and initialized memory to the 
  pointer variable. 
  
  Syntax to use new operator: To allocate memory of any data type, the syntax is: 
    
 +----------------------------------------------------+
 |      pointer-variable = new data-type;             |
 +----------------------------------------------------+

Here, pointer-variable is the pointer of type data-type. Data-type could be any built-in data type including array 
or any user defined data types including structure and class. 

Example: 

// Pointer initialized with NULL
// Then request memory for the variable
int *p = NULL; 
p = new int;   

            OR

// Combine declaration of pointer 
// and their assignment
int *p = new int; 

- Initialize memory: We can also initialize the memory for built-in data types using new operator. 
  For custom data types a constructor is required (with the data-type as input) for initializing 
  the value. Here’s an example for the initialization of both data types :

 +----------------------------------------------------+
 |      pointer-variable = new data-type(value);      |
 +----------------------------------------------------+

Example:
int *p = new int(25);
float *q = new float(75.25);

// Custom data type
struct cust
{
    int p;
    cust(int q) : p(q) {}
};

cust* var1 = new cust;    // Works fine, doesn't require constructor

        OR

cust* var1 = new cust();        // Works fine, doesn't require constructor


cust* var = new cust(25)        // Notice error if you comment this line

- Allocate block of memory: new operator is also used to allocate a block(an array) 
  of memory of type data-type. 

 +----------------------------------------------------+
 |      pointer-variable = new data-type[size];       |
 +----------------------------------------------------+ 

- where size(a variable) specifies the number of elements in an array. 
 
Example:
        int *p = new int[10]

# Dynamically allocates memory for 10 integers continuously of type int and returns 
  pointer to the first element of the sequence, which is assigned to p(a pointer). 
  p[0] refers to first element, p[1] refers to second element and so on.        

# Normal Array Declaration vs Using new 
- There is a difference between declaring a normal array and allocating a block of 
  memory using new. The most important difference is, normal arrays are deallocated
  by compiler (If array is local, then deallocated when function returns or completes). 
  However, dynamically allocated arrays always remain there until either they are deallocated 
  by programmer or program terminates.

# What if enough memory is not available during runtime? 
- If enough memory is not available in the heap to allocate, the new request indicates failure
  by throwing an exception of type std::bad_alloc, unless “nothrow” is used with the new operator, 
  in which case it returns a NULL pointer (scroll to section “Exception handling of new operator” 
  in this article). Therefore, it may be good idea to check for the pointer variable produced by 
  new before using it program. 

    int *p = new(nothrow) int;

    if (!p)
    {
       cout << "Memory allocation failed\n";
    }

# delete operator

- Since it is programmer’s responsibility to deallocate dynamically allocated memory, programmers 
  are provided delete operator by C++ language. 
Syntax: 
 // Release memory pointed by pointer-variable

 +----------------------------------------------------+
 |            delete pointer-variable;                |
 +----------------------------------------------------+ 

Here, pointer-variable is the pointer that points to the data object created by new. 
Examples: 
 

  delete p;
  delete q;

To free the dynamically allocated array pointed by pointer-variable, use following form of delete: 
 

// Release block of memory 
// pointed by pointer-variable
delete[] pointer-variable;  

Example:
   // It will free the entire array
   // pointed by p.
   delete[] p;

*/

// C++ program to illustrate dynamic allocation
// and deallocation of memory using new and delete
#include <iostream>
using namespace std;
 
int main ()
{
    // Pointer initialization to null
    int* p = NULL;
 
    // Request memory for the variable
    // using new operator
    p = new(nothrow) int;
    if (!p)
        cout << "allocation of memory failed\n";
    else
    {
        // Store value at allocated address
        *p = 29;
        cout << "Value of p: " << *p << endl;
    }
 
    // Request block of memory
    // using new operator
    float *r = new float(75.25);
 
    cout << "Value of r: " << *r << endl;
 
    // Request block of memory of size n
    int n = 5;
    int *q = new(nothrow) int[n];
 
    if (!q)
        cout << "allocation of memory failed\n";
    else
    {
        for (int i = 0; i < n; i++)
            q[i] = i+1;
 
        cout << "Value store in block of memory: ";
        for (int i = 0; i < n; i++)
            cout << q[i] << " ";
    }
 
    // freed the allocated memory
    delete p;
    delete r;
 
    // freed the block of allocated memory
    delete[] q;
 
    return 0;
}

/*
Output:
Value of p: 29
Value of r: 75.25
Value store in block of memory: 1 2 3 4 5 


Reference:https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/?ref=lbp
*/ 