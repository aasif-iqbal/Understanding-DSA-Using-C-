/*

# Pointer & Reference

- Pointers store address of variables or a memory location. 

// General syntax

+----------------------------------------------------+
|		    datatype *var_name; 					 |
+----------------------------------------------------+

// An example pointer "ptr" that holds
// address of an integer variable or holds
// address of a memory whose value(s) can
// be accessed as integer values through "ptr"

int *ptr; 

# To use pointers in C, we must understand below two operators. 

A. To access address of a variable to a pointer, we use the unary operator `&` 
  (ampersand) that returns the address of that variable. For example &x gives
  us address of variable x.  

  int main()
  {
	int x = 10;
	cout << &x; 	//0x7ffe8c44a874

	return 0;
  }

B. One more operator is unary * (Asterisk) which is used for two things : 
	
	(i)To declare a pointer variable: When a pointer variable is declared in C/C++, 
	   there must be a * before its name. 
	

	// C program to demonstrate declaration of
	// pointer variables.
	#include <stdio.h>
	int main()
	{
	    int x = 10;
	 
	    // 1) Since there is * in declaration, ptr
	    // becomes a pointer variable (a variable
	    // that stores address of another variable)
	    // 2) Since there is int before *, ptr is
	    // pointer to an integer type variable
	    int *ptr;
	 
	    // & operator before x is used to get address
	    // of x. The address of x is assigned to ptr.
	    ptr = &x;
	 
	    return 0;
	}	   
	
	(ii)To access the value stored in the address we use the unary operator (*) that returns 
	    the value of the variable located at the address specified by its operand. 
	    This is also called Dereferencing.

// C++ program to demonstrate use of * for pointers in C++
#include <iostream>
using namespace std;
 
int main()
{
    // A normal integer variable
    int Var = 10;
 
    // A pointer variable that holds address of var.
    int *ptr = &Var;
 
    // This line prints value at address stored in ptr.
    // Value stored is value of variable "var"
    cout << "Value of Var = "<< *ptr << endl;
 
    // The output of this line may be different in different
    // runs even on same machine.
    cout << "Address of Var = " <<  ptr << endl;
 
    // We can also use ptr as lvalue (Left hand
    // side of assignment)
    *ptr = 20; // Value at address is now 20
 
    // This prints 20
    cout << "After doing *ptr = 20, *ptr is "<< *ptr << endl;
 
    return 0;
}
-----------------------------------------------------------------
Output:
Value of Var = 10
Address of Var = 0x7fffa057dd4
After doing *ptr = 20, *ptr is 20 
-----------------------------------------------------------------

# Array Name as Pointers 
- An array name acts like a pointer constant. The value of this pointer constant 
  is the address of the first element. 
  For example, if we have an array named val then val and &val[0] can be used interchangeably. 

  // C++ program to illustrate Array Name as Pointers in C++
#include <bits/stdc++.h>
using namespace std;
 
void geeks()
{
    // Declare an array
    int val[3] = { 5, 10, 15};
 
    // Declare pointer variable
    int *ptr;
 
    // Assign address of val[0] to ptr.
    // We can use ptr=&val[0];(both are same)
    ptr = val ;
    cout << "Elements of the array are: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2];
 
    return;
}
 
// Driver program
int main()
{
    geeks();
    return 0;
}

Now if this ptr is sent to a function as an argument then the array val can 
be accessed in a similar fashion. 
----------------------------------------------------------------------------
Output:
Elements of the array are: 5 10 15
----------------------------------------------------------------------------

# Applications of Pointers in C/C++

A. To pass arguments by reference. Passing by reference serves two purposes

(i) To modify variable of function in other. Example to swap two variables;

// C++ program to demonstrate that we can change
// local values of one function in another using
// pointers.

#include <iostream>
using namespace std;
 
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
int main()
{
    int x = 10, y = 20;
    swap(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}

----------------------------------------------------------------------------
Output :
20 10
----------------------------------------------------------------------------

(ii) For efficiency purpose. Example passing large structure without reference 
	 would create a copy of the structure (hence wastage of space). 
Note : The above two can also be achieved through References in C++. 
 
- For accessing array elements. Compiler internally uses pointers to access array elements. 

// C++ program to demonstrate that compiler
// internally uses pointer arithmetic to access
// array elements.
#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 100, 200, 300, 400 };
 
    // Compiler converts below to *(arr + 2).
    cout << arr[2] << " ";
 
    // So below also works.
    cout << *(arr + 2) << " ";
 
    return 0;
}

----------------------------------------------------------------------------
Output :
300 300
----------------------------------------------------------------------------

B. To return multiple values. Example returning square and square root of numbers.


// C++ program to demonstrate that using a pointer
// we can return multiple values.
#include <bits/stdc++.h>
using namespace std;
 
void fun(int n, int* square, double* sq_root)
{
    *square = n * n;
    *sq_root = sqrt(n);
}
 
int main()
{
 
    int n = 100;
    int* sq = new int;
    double* sq_root = new double;
    fun(n, sq, sq_root);
    cout << *sq << " " << *sq_root;
    return 0;
}
----------------------------------------------------------------------------
Output :
10000 10
----------------------------------------------------------------------------


C. Dynamic memory allocation : We can use pointers to dynamically allocate memory. 
   The advantage of dynamically allocated memory is, it is not deleted until we explicitly 
   delete it.

// C++ program to dynamically allocate an
// array of given size.

#include <iostream>
using namespace std;
 
int* createArr(int n)
{
    return new int[n];
}
 
int main()
{
    int* pt = createArr(10);
    return 0;
}

D. To implement data structures. 
   Example linked list, tree, etc. We cannot use C++ references to implement these data structures 
   because references are fixed to a location (For example, we can not traverse a linked list using 
   references)

E. To do system level programming where memory addresses are useful. For example shared memory used by 
   multiple threads. For more examples, see IPC through shared memory, Socket Programming in C/C++, etc



//https://www.geeksforgeeks.org/pointers-vs-references-cpp/?ref=lbp
Reference:https://www.geeksforgeeks.org/pointers-in-c-and-c-set-1-introduction-arithmetic-and-array/?ref=lbp

*/ 