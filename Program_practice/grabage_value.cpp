/*
We find that only 0 and 1 index is filled and remain 
*/
#include <iostream>

using namespace std;

int main()
{
	int num;
	cout<<"Enter size:";
	cin>>num;

	int A[num];
	A[0] = 2;
	A[1] = 3;

	for(int val:A)
	{
		cout<<val<<endl;
	}

	return 0;
}