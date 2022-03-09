/*
Find Max and Min Value in Array.
Return both max and min value.

*/ 
#include <iostream>

using namespace std;

/*
void max_n_min_value(int arr[],int n)
{
	int max=arr[0], min=arr[0];

	for(int i=1; i<n; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	cout<<"Max: "<< max <<endl;
	cout<<"Min: "<< min <<endl;	
}
*/

// Using Linear search
struct Pair
{
	int max;
	int min;
};

Pair getMaxMin(int arr[], int n)
{

	struct Pair max_min_value;

	//if only one element present in array
	if(n == 1)
	{
		max_min_value.max = arr[0];
		max_min_value.min = arr[0];
		
		return max_min_value;
	}

	//compare first two element of array and
	//Assume that arr[0] is max-value and arr[1] is min-value
	if(arr[0] > arr[1])
	{
		max_min_value.max = arr[0];
		max_min_value.min = arr[1];
	}else{
		max_min_value.min = arr[0];
		max_min_value.max = arr[1];
	}

	for(int i=2; i < n; i++)
	{
		if(arr[i] > max_min_value.max)
		{
			max_min_value.max = arr[i];
		}
		else if(arr[i] < max_min_value.min)
		{
			max_min_value.min = arr[i];
		}
	}
	return max_min_value;
}

int main()
{
	int arr[] = {2,3,1,0, 5,9,8,7};
	int size = 8;
	//max_n_min_value(arr,8);
	
	struct Pair max_min = getMaxMin(arr, size);
	
	cout << "Max:"<<max_min.max <<"\n";
	cout << "Min:"<<max_min.min <<"\n";
	
	getMaxMin(arr,size);
	
	return 0;
}