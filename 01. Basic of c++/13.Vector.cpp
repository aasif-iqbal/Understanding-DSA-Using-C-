/*

#------------------ Vectors ------------------#

Vectors are same as dynamic arrays with the ability to resize itself automatically 
when an element is inserted or deleted, with their storage being handled automatically 
by the container. Vector elements are placed in contiguous storage so that they can be 
accessed and traversed using iterators. In vectors, data is inserted at the end. 
Inserting at the end takes differential time, as sometimes there may be a need of extending 
the array. Removing the last element takes only constant time because no resizing happens. 
Inserting and erasing at the beginning or in the middle is linear in time.

*/ 

#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v1)
{
	for(int i = 0; i <v1.size(); i++)
	{
		cout <<v1[i] << " ";
	}
	cout <<endl;
}

int main() {

	vector<int> vec1;
	int element;
	
	// int length;
	// cin>>length;
	
	// while(length--){
	// 	cin>>element;
	// 	vec1.push_back(element);

	// }

	cout<< "Enter the value in vector";
	for(int i = 0; i < 5; i++)
	{
		cin >> element;
		vec1.push_back(element);
	}
	display(vec1);
	return 0;
}