/*
Pointer to Array
Pointer to Structure
Pointer to Function
*/ 

#include <iostream>

using namespace std;


/* 
	---------------Pointer to Array---------------

int main()
{
	int arr[] = {1,2,3,4,5,6};
	int size = 6;

	// 1.create pointer variable. 
	int *ptr = NULL;	
	
	// 2.Point the 0-index of array at pointer variable. 
	
	//ptr = &arr[0]; or ptr = arr; 
	ptr = arr; //point at address of 0-index

	// 3. Access Array Elements using pointer variable. 
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		//cout << ptr[i] << " ";
	}
	
	return 0; 
}

*/

/*
	--------------- Pointer to Structure ---------------


struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
	struct Rectangle rect = {10,20};

	struct Rectangle *ptr = &rect;

	(*ptr).length = 33;
	(*ptr).breadth = 13;

	//  or
	
	//ptr->length = 42;
	//ptr->breadth = 24;

	cout << (ptr->length) <<endl;
	cout << ((*ptr).breadth) <<endl;
	
	return 0;
}

*/

/*  Pointer to Function */ 
void fun(int a)
{
	cout <<"Value of a:" << a <<endl;
}

int main()
{
	// fun_ptr is a pointer to function fun() 
    void (*fun_ptr)(int) = &fun;

     //// The above line is equivalent of following two
     // void (*fun_ptr)(int);
     // fun_ptr = &fun; 

    // Invoking fun() using fun_ptr
    (*fun_ptr)(10);
  
    return 0;    
}
//Output:Value of a:10

/*
# Why do we need an extra bracket around function pointers like fun_ptr in above example?
- If we remove bracket, then the expression “void (*fun_ptr)(int)” becomes “void *fun_ptr(int)” 
  which is declaration of a function that returns void pointer.
*/
Reference:https://www.geeksforgeeks.org/function-pointer-in-c/
