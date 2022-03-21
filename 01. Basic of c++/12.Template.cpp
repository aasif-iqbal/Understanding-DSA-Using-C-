/*
- Template is simple and powerfull tool in c++.
- The simple idea is to pass data type as a parameter so that
  we don’t need to write the same  code for different data types.

For Example: 
	A Software Company may need Sort() function for different Data types.
	Rather than writing and maintaining the multiple codes, we can write
	one Sort() function and pass data type as a parameter.

C++ Added two new Keyword for template:
`templates` and `typename`.

C++ supports generic functions(template function) and generic class(template class).
https://www.geeksforgeeks.org/generics-in-c/
*/ 


#include <iostream>
using namespace std;

/*
Class Templates Like function templates, class templates are useful when a class defines 
something that is independent of the data type. Can be useful for classes like LinkedList, 
BinaryTree, Stack, Queue, Array, etc. 
Following is a simple example of template Array class.  
*/ 

template <class T> 
class Arithmetic
{
private:
	// int a;
	// int b;
	T a;
	T b;

public: 
//	Arithmetic(int a, int b);
	Arithmetic(T a, T b);
	// int add();
	// int sub();	

	T add();
	T sub();	
};

// Arithmetic::Arithmetic(int a, int b)
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
	this->a = a;
	this->b = b;
}

// int Arithmetic::add()
template<class T>
T Arithmetic<T>::add()
{
	// int c;
	T c;
	c = a + b;
	return c;
}

// int Arithmetic::sub()
template<class T>
T Arithmetic<T>::sub()
{
	// int c;
	T c;
	c = a-b;
	return c;
}

int main()
{

	// Arithmetic arr(10,8); //18
	// Arithmetic arr2(10.5,7.3); //17

	Arithmetic<int> arr(10,8); //18
	Arithmetic<float> arr2(10.5,7.3); //17.8

	cout<<arr.add();
	cout<<arr2.add();
	
	return 0;
}
// https://www.geeksforgeeks.org/templates-cpp/