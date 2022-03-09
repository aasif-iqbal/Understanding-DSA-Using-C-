/*

DATA TYPE
====================================================
- All variable use data-type during declaration to 
restrict the type of data to be store.

- Every data-type require a different amount of memory.

TYPES
-----------------------------------------------------
A. Primitive data-type (pre-defined or built-in)
1. integer
2. character
3. boolean
4. float
5. double
6. void
7. wide character

B. Derived data-type
1. Array
2. Function
3. Pointer
4. Reference

C. Abstract or User defined
1. Class
2. Structure
3. Union
4. Enumeration
5. Typedef

===================================================
Primitive data-type Sizes

1. integer - int - 4 bytes
2. character - char - 1 bytes
3. boolean - bool - 1 bytes (True/false or 0/1)
4. float - float - 4 bytes
5. double - double - 8 bytes
6. void - return NO VALUE
7. wide character - wchar_t - 4 bytes

*/

#include <iostream>

using namespace std;

int main()
{
	cout <<"Size of int:"<< sizeof(int)<<endl; // 4
	cout <<"Size of char:"<< sizeof(char)<<endl; // 1
	cout <<"Size of bool:"<< sizeof(bool)<<endl; // 1
	cout <<"Size of float:"<< sizeof(float)<<endl; // 4
	cout <<"Size of double:"<< sizeof(double)<<endl; // 8
	cout <<"Size of void:"<< sizeof(void)<<endl; // 1
	cout <<"Size of wchar_t:"<< sizeof(wchar_t)<<endl; // 4

	return 0;
}
/*
Output:
--------------------------------------------------------
Size of int:4
Size of char:1
Size of bool:1
Size of float:4
Size of double:8
Size of void:1
Size of wchar_t:4
*/ 