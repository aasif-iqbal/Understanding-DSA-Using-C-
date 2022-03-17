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