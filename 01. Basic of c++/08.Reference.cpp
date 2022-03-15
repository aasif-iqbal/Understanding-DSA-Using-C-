/*

-------------------------------- Reference -----------------------------------

When a variable is declared as a reference, it becomes an alternative name for 
an existing variable. A variable can be declared as a reference by putting ‘&’ 
in the declaration. 
*/

/*
#include<iostream>
using namespace std;
  
int main()
{
  int x = 10;
  
  // ref is a reference to x.
  int& ref = x;
  
  // Value of x is now changed to 20
  ref = 20;
  cout << "x = " << x << endl ;
  
  // Value of x is now changed to 30
  x = 30;
  cout << "ref = " << ref << endl ;
  
  return 0;
}
*/

//Output:
//      x = 20
//      ref = 30


/*
Applications :  

1. Modify the passed parameters in a function: If a function receives 
   a reference to a variable, it can modify the value of the variable. 
   For example, the following program variables are swapped using references.


#include<iostream>
using namespace std;
  
void swap (int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}
  
int main()
{
    int a = 2, b = 3;
    swap( a, b );
    cout << a << " " << b;
    return 0;
}
Output:

 3 2


*/ 
2. Avoiding a copy of large structures: Imagine a function that has to receive a
   large object. If we pass it without reference, a new copy of it is created which 
   causes wastage of CPU time and memory. We can use references to avoid this.

struct Student {
   string name;
   string address;
   int rollNo;
}
  
// If we remove & in below function, a new
// copy of the student object is created. 
// We use const to avoid accidental updates
// in the function as the purpose of the function
// is to print s only.

void print(const Student &s)
{
    cout << s.name << "  " << s.address << "  " << s.rollNo;
}

3. In For Each Loops to modify all objects : We can use references in 
   for each loops to modify all elements.


#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    vector<int> vect{ 10, 20, 30, 40 }; 
  
    // We can modify elements if we 
    // use reference
    for (int &x : vect) 
        x = x + 5;
  
    // Printing elements
    for (int x : vect) 
       cout << x << " "; 
  
    return 0; 
}
// output: 15 25 35 45 

// ----------------------------References vs Pointers:----------------------------

Both references and pointers can be used to change local variables of one function 
inside another function. Both of them can also be used to save copying of big objects 
when passed as arguments to functions or returned from functions, to get efficiency gain. 
Despite the above similarities, there are the following differences between references and pointers.

1. A pointer can be declared as void but a reference can never be void For example

int a = 10;
void* aa = &a;. //it is valid
void &ar = a; // it is not valid

2. The pointer variable has n-levels/multiple levels of indirection i.e. single-pointer, double-pointer, triple-pointer. Whereas, the reference variable has only one/single level of indirection. The following code reveals the mentioned points:  

3.Reference variable cannot be updated.

4.Reference variable is an internal pointer .

5.Declaration of Reference variable is preceded with ‘&’ symbol ( but do not read it as “address of”).

#include <iostream>
using namespace std;

int main() {
  int i=10; //simple or ordinary variable.
  int *p=&i; //single pointer
  int **pt=&p; //double pointer
  int ***ptr=&pt; //triple pointer
  // All the above pointers differ in the value they store or point to.
  cout << "i=" << i << "\t" << "p=" << p << "\t"
    << "pt=" << pt << "\t" << "ptr=" << ptr << "\n";
  int a=5; //simple or ordinary variable
  int &S=a;
  int &S0=S;
  int &S1=S0;
  cout << "a=" << a << "\t" << "S=" << S << "\t"
    << "S0=" << S0 << "\t" << "S1=" << S1 << "\n";
  // All the above references do not differ in their values
  // as they all refer to the same variable.
}


References are less powerful than pointers
1) Once a reference is created, it cannot be later made to reference another object; 
   it cannot be reset. This is often done with pointers. 
2) References cannot be NULL. Pointers are often made NULL to indicate that they are 
   not pointing to any valid thing. 
3) A reference must be initialized when declared. There is no such restriction with pointers.
   Due to the above limitations, references in C++ cannot be used for implementing data structures 
   like Linked List, Tree, etc. In Java, references don’t have the above restrictions and can be used
   to implement all data structures. References being more powerful in Java is the main reason Java doesn’t 
   need pointers.

   
// Reference:https://www.geeksforgeeks.org/references-in-c/?ref=lbp