//Array Rotation
//Input arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2, n =7
//Output: 3 4 5 6 7 1 2 
#include <iostream>

using namespace std; 

void leftRotateByOne(int arr[],int n)
{
	int temp = arr[0];
	 
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
	for(int i=0;i<n-1;i++)
	{
		//shift by one element
		arr[i] = arr[i+1]; 
	}
	//shift first elem to last-index
	arr[n-1] = temp;
}

void rotateLeft(int arr[], int d, int n)
{
	for(int i = 0; i<d; i++)
	{
		leftRotateByOne(arr,n);k
	}
}

void printArr(int arr[],int n)
{
	for(int i=0;i < n; i++)
	{
		std::cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int d = 3;
	int n = 7;

	rotateLeft(arr,d,n);
	printArr(arr,n);
	return 0;
}