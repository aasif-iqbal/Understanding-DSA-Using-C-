/*

- Parameter Vs Argument
- Call By Value
- Call By Address(Pointer)
- Call By Reference 

Parameter Vs Argument
*/ 

//---------------------- Parameter Vs Argument -------------------
#include <iostream>

using namespace std;
/*
int add(int a, int b) // a and b are formal Parameter (Parameter)
{
	int c = a + b;
	return c;
}

int main()
{
	int x,y;
	x = 10, y=30;
	cout<< add(x,y); // x and y are Actual Parameter (Argument)

	return 0;
}
//output:40
*/
//---------------------- Call By Value --------------------
/*
void swap(int x,int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a=10; int b=30;
	swap(a, b);
	cout << "a: " << a << "b: " << b << endl;

	return 0;
}
//Output: a: 10, b: 30 Value of a and b remain same, does not change.
// - The formal Parameter is modified but Actual Parameter remains same.
// - Both Actual and formal Parameter have Different memory location.
*/

//----------------------- Call By Address (Pointer) ---------------------
/*
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a=34, b = 55;
	swap(&a, &b); 		//address of a(0x7ffee24e7a7c) and b(0x7ffee24e7a78) copied/passed to x and y.
	cout << a << "," << b;
	
	return 0;
}

//output:55,34

//Here, Memory Location of the variable is passed to the Parameter in the
//function, and then the operations are performed.

*/

//----------------------- Call By Reference ---------------------

void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 70, b=80;
	swap(a,b);
	cout << "a: " << a << ", b: " << b << endl; // a/x[70] and b/y[80] No Extra Memory.

	return 0;
}

//Output:a: 80, b: 70

//- It allow a function to modify a variable without creating copy of it.
//- We have to declare reference variables.
//- The memory location of the passed variable and parameters is the same
//  and therefore any changes to Parameter reflects in the variable as well.
//- Reference does not take any memory.
//- It is not advise to use call by reference for large projects or multiple 
//	function.

/*
Functions can be invoked in two ways: Call by Value or Call by Reference. 
These two ways are generally differentiated by the type of values passed to them as parameters.

The parameters passed to function are called actual parameters whereas the parameters received by 
function are called formal parameters.

Call By Value: In this parameter passing method, values of actual parameters are copied to function’s 
formal parameters and the two types of parameters are stored in different memory locations. So any changes
made inside functions are not reflected in actual parameters of the caller.

Call by Reference: Both the actual and formal parameters refer to the same locations, so any changes made 
inside the function are actually reflected in actual parameters of the caller.

Reference:http://geeksforgeeks.org/difference-between-call-by-value-and-call-by-reference/
*/ 