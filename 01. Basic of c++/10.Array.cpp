/*
- Array as parameter
- When Function returns Array

# How Arrays are Passed to Functions

- A whole array cannot be passed as an argument to a function in C++. 
  You can, however, pass a pointer to an array without an index by 
  specifying the array’s name.

- In C, when we pass an array to a function say fun(), it is always 
  treated as a pointer by fun(). The below example demonstrates the same. 


reference:https://www.geeksforgeeks.org/return-local-array-c-function/
*/

#include <iostream>

using namespace std;

void fun(int *arr, int size) //SAME AS void fun(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";	
	}
	
}

int main()
{
	int arr[] = {1,2,3,99,4,5,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	fun(arr, size);

	return 0;
}

/*

# How to return a local array from a C/C++ function.
/*
#include <iostream>
using namespace std;
 
int* fun()
{
    int arr[100];
 
    //Some operations on arr[] 
    arr[0] = 10;
    arr[1] = 20;
 
    return arr;
}
 
int main()
{
    int* ptr = fun();
    cout << ptr[0] << " " << ptr[1];
    return 0;
}
Warning: 
In function 'int* fun()':
6:8: warning: address of local variable 'arr' returned [-Wreturn-local-addr]
    int arr[100];

Output:10 20

The above program is WRONG. It may produce values 10 20 as output or may produce 
garbage values or may crash. 
The problem is, we return address of a local variable which is not advised as local 
variables may not exist in memory after function call is over.
So in simple words, Functions can’t return arrays in C. However, inorder to return 
the array in C by a function, one of the below alternatives can be used. 

*/

/*

Following are some correct ways of returning array:

- Using Dynamically Allocated Array.
- Using static array.
- Using struct.


# Using Dynamically Allocated Array.
-	Dynamically allocated memory (allocated using new or malloc()) remains their until 
	we delete it using delete or free(). So we can create a dynamically allocated array 
	and we can delete it once we come out of function.

# Using static array.
#include <iostream>
using namespace std;
 
int* fun()
{
    int* arr = new int[100];
 
     //Some operations on arr[] 
    arr[0] = 10;
    arr[1] = 20;
 
    return arr;
}
 
int main()
{
    int* ptr = fun();
    cout << ptr[0] << " " << ptr[1];
    delete[] ptr; //allocated memory must be deleted
    return 0;
}
Output: 
10 20

# Using static array: 
- Lifetime of a static variable is throughout the program. 
  So we can always create a local static array and return it.

#include <iostream>
using namespace std;
 
int* fun()
{
    static int arr[100];
 
    //Some operations on arr[] 
    arr[0] = 10;
    arr[1] = 20;
 
    return arr;
}
 
int main()
{
    int* ptr = fun();
    cout << ptr[0] << " " << ptr[1];
    return 0;
}  

Output: 
10 20
*/

/*

# Using struct: 
- We can wrap array in a structure/class and return an instance 
	of the struct/class. The reason for this work is, array members 
	of structures are deeply copied. In below program deep copy happens 
	when we returned instance is copied in main.
#include <iostream>
using namespace std;
 
struct arrWrap {
    int arr[100];
};
 
struct arrWrap fun()
{
    struct arrWrap x;
 
    x.arr[0] = 10;
    x.arr[1] = 20;
 
    return x;
}
 
int main()
{
    struct arrWrap x = fun();
    cout << x.arr[0] << " " << x.arr[1];
    return 0;
}

Output: 
10 20
*/