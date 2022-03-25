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

void display(vector<int> &vec)
{
	for(int i=0; i < vec.size(); i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	vector<int> v;
	int element;

	for(int i=0; i < 5; i++)
	{
		cout<<"Enter element:";
		cin>>element;
		v.push_back(element);
	}
	//delete
	//cout<<"last element pop out(deleted)"<<endl;
   // v.pop_back();
    
    //insert
	vector<int>::iterator it;
	it = v.begin();
	it = v.insert(it, 300); //By default, it insert 300 at starting position.
	
	display(v);
	return 0;
}

/*

#------------------------------ Template ----------------------------
template <class T>
void display(vector<T> &vec)
{
    cout<<"display vector:"<<endl;
	for(int i=0; i < vec.size(); i++)
	{
		cout<<vec[i]<<" ";
	 
	}
	cout<<endl;
}

int main()
{
    //ways to create vector.
	vector<int> v;      //zero length vector.
	vector<char> v1(4); //4-element character vector. 
	vector<char> v2(v1); //4-element character vector from v1.
	
	vector<double> v3(6, 3);     // 6 times 3 ie.3 3 3 3 3 3
	
	v1.push_back('hello');
	display(v3);
	return 0;
}

*/

 