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

#############--------------------Unary operators in C/C++-------------------------------###############

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
This operator returns the size of its operand, in bytes. The sizeof operator always precedes its operand.The operand is an expression, or it may be a cast.


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

================================================================================================================
*/