#include <iostream>

using namespace std;

void fun(int *arr, int n)
{
    for(int i=0; i<n; i++)
        cout<< arr[i] << " ";
}

int main()
{
    int arr[] = {2,3,1,4,5,6};
    int n = 6;
    
    fun(arr,n);
    return 0;
}
