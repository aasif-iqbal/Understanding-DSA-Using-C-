/*
# Recursion

The process in which a function calls itself directly or indirectly is called 
recursion and the corresponding function is called as recursive function. 
Using recursive algorithm, certain problems can be solved quite easily. 
Examples of such problems are Towers of Hanoi (TOH), Inorder/Preorder/Postorder
Tree Traversals, DFS of Graph, etc.


Type:
A. Direct Recursion
1.head recursion
2.tail recursion
3.tree recursion
4.nested recursion

B.Indirect recursion


How memory is allocated to different function calls in recursion? 
When any function is called from main(), the memory is allocated to it on the stack. A recursive function calls itself, the memory for a called function is allocated on top of memory allocated to calling function and different copy of local variables is created for each function call. When the base case is reached, the function returns its value to the function by whom it is called and memory is de-allocated and the process continues.
Let us take the example how recursion works by taking a simple function.

When printFun(3) is called from main(), memory is allocated to printFun(3) and a local variable test is initialized to 3 and statement 1 to 4 are pushed on the stack as shown in below diagram. It first prints ‘3’. In statement 2, printFun(2) is called and memory is allocated to printFun(2) and a local variable test is initialized to 2 and statement 1 to 4 are pushed in the stack. Similarly, printFun(2) calls printFun(1) and printFun(1) calls printFun(0). printFun(0) goes to if statement and it return to printFun(1). Remaining statements of printFun(1) are executed and it returns to printFun(2) and so on. In the output, 
value from 3 to 1 are printed and then 1 to 3 are printed. The memory stack has been shown in below diagram.


*/ 