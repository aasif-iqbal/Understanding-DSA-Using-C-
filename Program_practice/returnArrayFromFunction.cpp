#include<iostream>

using namespace std;

void display(int *arr, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		cout << arr[i];
	}
}

//Using Dynamically Allocated Array
/*
Dynamically allocated memory (allocated using new or malloc()) 
remains their until we delete it using delete or free(). So we
can create a dynamically allocated array and we can delete it 
once we come out of function.
*/
int *func()
{
	  int *arr = new int[10];

	  arr[0] = 122;
	  arr[1] = 212;	 
	 
	 return arr;
}

/*
Using static array: 
Lifetime of a static variable is throughout the program. 
So we can always create a local static array and return it
*/
int* func2()
{
    static int arr[100];
 
    /* Some operations on arr[] */
    arr[0] = 10;
    arr[1] = 20;
 
    return arr;
}

/*
Using struct: 
We can wrap array in a structure/class and return an instance of 
the struct/class. The reason for this work is, array members of 
structures are deeply copied. In below program deep copy happens 
when we returned instance is copied in main.
*/

struct arrWrap {
    int arr[10];
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
	int arr[] = {1,2,3,4,5,6};
	//display(arr,6);
	int *ptr = func();
	cout<<ptr[0]<<"," <<ptr[1];

	//using struct
	struct arrWrap x = fun();
    cout << x.arr[0] << " " << x.arr[1];

	delete[] ptr;
	return 0; 
}