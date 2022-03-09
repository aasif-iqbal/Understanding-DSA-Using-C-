#include <iostream>

using namespace std;

struct Array
{
	int A[10];
	int size;
	int length;
};

void display2(struct Array ar1)
{
	 int i;
    int len = sizeof(ar1.A) / sizeof(int);
	 
	for (i = 0; i < len; i++)
	{
		cout<<" "<< ar1.A[i];
	}
}

int main()
{

	struct Array ar = {{1,2,3,4,5,6,7,8,9,20},10,10};
	display2(ar);
}