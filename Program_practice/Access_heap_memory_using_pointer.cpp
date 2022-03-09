#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int *p=NULL;	 

	p = new int[5];
	p = (int *)malloc(5*sizeof(int));
	cout<<sizeof(p); //8
	
	//printf("%d\n"sizeof(p));
	 
	return 0;
}