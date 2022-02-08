/*
array rotation:
arr[] = {1,2,3,4,5,6,7}, d=2, n=7
output: {3,4,5,6,7,1,2} ie(it rotate for 2nd element)
*/
#include<iostream>

using namespace std;

void shiftByOne(int arr[], int n)
{
	int temp = arr[0];

	for(int i=0; i < n; i++)
	{
		//shifted by one position
		arr[i] = arr[i+1];
	}

	//first element shifted to last position
	arr[n-1] = temp;
}

void rotateArr(int arr[],int d, int n)
{
	for (int i = 1; i < d; i++)
	{
		shiftByOne(arr,n);
	}
}

void printResult(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout << arr[i] <<" ";
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int d=2, n=7;
	shiftByOne(arr,n);
	rotateArr(arr,d,n);
	printResult(arr,n);
	return 0;
}