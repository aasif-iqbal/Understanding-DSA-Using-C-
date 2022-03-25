/*

Maps are associative containers that store elements formed by a combination 
of a key value and a mapped value, following a specific order.

In a map, the key values are generally used to sort and uniquely identify 
the elements, while the mapped values store the content associated to this key

Internally, the elements in a map are always sorted by its key following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).

map containers are generally slower than unordered_map containers to access individual elements by their key, but they allow the direct iteration on subsets based on their order.

The mapped values in a map can be accessed directly by their corresponding key using the bracket operator ((operator[]).

Maps are typically implemented as binary search trees.
*/ 

#include <iostream>
#include <map>
#include <string>

using namespace std;


int main()
{
	//create map
	map<string, int> mask_map;
	map<string, int>:: iterator iter; //iter points to map

	//assign value to map
	mask_map["jack"] = 100;
	mask_map["jim"] = 233;
	mask_map["kakasi"] = 400;

	mask_map.insert({{"miller",211}, {"kai",88}});

	for(iter=mask_map.begin(); iter != mask_map.end(); iter++)
	{
		//cout<<(*iter).first<<" => "<<(*iter).second<<endl;
		 cout << '\t' << iter->first << '\t' << iter->second
             << '\n';
	}

	//Capacity
	cout<<"The size :"<<mask_map.size()<<endl; //5
	cout<<"Max size :"<<mask_map.max_size()<<endl; //128102389400760775
	cout<<"Check for empty :"<<mask_map.empty()<<endl;  //0 ie. false(not empty)
	return 0;
}