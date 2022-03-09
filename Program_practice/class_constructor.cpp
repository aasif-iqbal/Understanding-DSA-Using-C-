#include <iostream>

using namespace std;

class Rectangle
{
private:
	int length;
	int breadth;

public:
	// default constructor
	/*
	Rectangle()
	{
		length = 0;
		breadth = 0;
	}
	*/

	//parameterize constructor
	Rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}

	int area()
	{
		return (length*breadth);
	}

	int perimeter()
	{
		return 2*(l*b);
	}

	void setLength(int l)
	{
		length = l;
	}

	void setBreadth(int b)
	{
		breadth = b;
	}

}