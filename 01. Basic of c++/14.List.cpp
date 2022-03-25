/*

---------------------------- List -------------------------------#
Lists are sequence containers that allow constant time insert and erase operations anywhere within the sequence, 
and iteration in both directions.

List containers are implemented as doubly-linked lists; Doubly linked lists can store each of the elements they 
contain in different and unrelated storage locations. The ordering is kept internally by the association to each 
element of a link to the element preceding it and a link to the element following it.

*/ 

#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    //create iterator to travers in list
    list<int> :: iterator iter;
    for(iter=lst.begin(); iter != lst.end(); iter++)
    {
        cout<<*iter<<" ";
    }
}

int main()
{
	//initilizing list
	list<int> list1;
	
	list1.push_back(3);
	list1.push_back(2);
	list1.push_back(4);
	list1.push_back(5);
	
	list<int> ::iterator iter;
	
	iter = list1.begin();
	//iter++;
	//cout<<*iter<<" ";
	
	//direct assign value to list
    //	*iter = 94;
	
	
	//delete last element
	//list1.pop_back();
	//list1.pop_front(); // delete from front
	//list1.remove(4);  //remove(value)
	
	
	list<int> list2(4);
	list<int>:: iterator itr;
	itr = list2.begin(); //itr pointing to 1 position of list.
	*itr = 24;
	itr++;
	*itr = 32;
	itr++;
	*itr = 25;
	itr++;
	*itr = 15;
	itr++;
	
	//sorting
	//list2.sort();
    // 	display(list1);
	//display(list2); // 24 32 55
	
	list1.sort();
	list2.sort();
	//merge
// 	cout<<"After merge:";
// 	list1.merge(list2);
// 	display(list1);
	
	
	//Reverse list
	list1.reverse();
	display(list1);
	
	return 0;
}