/*
A variable is a name given to a memory location. It is the basic unit of storage in a program. 

The value stored in a variable can be changed during program execution.
A variable is only a name given to a memory location, all the operations done on the variable effects that memory location.
In C++, all the variables must be declared before use.

------------------------------------------------------
There are 3 type of variable based on scope of the variable in c++

A. Local variables
B. Global Or Instances variables (Non-static)
C. Static variables (class variables)
*/

#include <iostream>

using namespace std;

class DSA
{
	public:
		static int a; // static variable
		int b;   // instance variable

	public:
		func()
		{
			int c; // local variable
		}	
};

/*
	Instance variable Vs Static variable
	------------------------------------
	- Each object will have its own copy of instance variable whereas We can only have one copy of a static variable per class irrespective of how many objects we create.

	- Changes made in an instance variable using one object will not be reflected in other objects as each object has its own copy of instance variable. In case of static, changes will be reflected in other objects as static variables are common to all object of a class.

	- We can access instance variables through object references and Static Variables can be accessed directly using class name.

*/
//Reference:https://www.geeksforgeeks.org/variables-in-c/?ref=lbp