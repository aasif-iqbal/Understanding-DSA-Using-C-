/*
- In C++, Structure(struct) and Class are same, Only difference is 
  By Default All members in Structure are `public` and in Class, All 
  members are `private`.

- Structure is not secure.and cannot hide its implementation details
  from end-users while a Class is secure and can hide its programming
  and designing details.

- class memory allocated on Heap where structure allocation happens on Stack.
*/ 

#include <iostream>

using namespace std;

class Rectangle
{

private:
	int length;
	int breadth;

public:
	Rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}	

	int area()
	{
		return (length*breadth);
	}

	void changeLength(int l)
	{
		//Assign new length
		length = l;
	}

	void changeBreadth(int b)
	{
		//Assign new breadth
		breadth = b;
	}	
};

int main()
	{
		Rectangle r(10,30);
		
		r.changeLength(8);
		r.changeBreadth(4);

		cout<<r.area();

		return 0;
	}

//To Know More:https://www.geeksforgeeks.org/structure-vs-class-in-cpp/	