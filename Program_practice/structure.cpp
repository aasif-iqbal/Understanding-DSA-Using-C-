#include<iostream>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
	int l;
	int b;
	char x;
};

int main()
{
	struct Rectangle r={1,2,3};

	/* char x suppose to use 1-Byte but it use 4-Bytes 
	  which is nearest bigger size to `int` 
	  This is also called Padding.*/
	printf("%d\n",sizeof(r)); //12 {4 bytes,4 bytes,4 bytes}

	return 0;
}