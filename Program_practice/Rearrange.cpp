#include <iostream>

using namespace std;

struct Array
{
	int A[10];
	int length;
	int size;
};

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void Rearrange(struct Array *arr)
{
	int i,j;
	i = 0, j = arr->length - 1;

	if(i<j)
	{
		while(arr->A[i] < 0) i++;
		while(arr->A[j] >= 0) j--;
		if(i < j)
		{
			swap(&arr->A[i], &arr->A[j]);
		}
	}
}

void display(struct Array arr)
{
	int i;
	for(i=0; i < arr.length; i++)
	{
		cout<< arr.A[i] << " ";
	}
}
int main()
{
	struct Array arr = {{1,-1,2,-2,4,8,-7},7,10};
	Rearrange(&arr);
	display(arr);

	return 0;
}