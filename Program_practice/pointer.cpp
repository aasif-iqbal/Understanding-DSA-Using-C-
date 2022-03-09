#include<iostream>

using namespace std;

int main()
{
	int a = 101;

	//initilize pointer to NULL.
	int *ptr = &a; 

	// ptr = &a;

	cout<< ptr <<endl; // address of a(0x7ffe0d5d77fc)
	
	/* (`*` this means it will go to that address 
	and bring the Value present on that address.)*/
	
	cout<< *ptr <<endl; // value of a.ie 10 
	
	cout<< a <<endl; // value of a. ie 10

	return 0; 
}