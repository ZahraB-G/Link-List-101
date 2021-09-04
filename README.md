# Link-List-101
Why Linked List?
1.	Problem with Arrays
2.	Difference between Array and Linked List
Arrays have a fixed size that has to be defined at the time of programming. (meaning programmer has to give the size and not the user)
Array can be defined inside heap or stack.
Defining an array inside the STACK:      int A[5];
The space is contiges side by side, so it is accessible by index.
Defining an array in the HEAP (need a pointer): 	int * p = new int [5];
(pointer p created inside the stack and points to the array inside the HEAP)

In Link List we do not want a fix size array because we do not know the size. 
User can give us the size and add/reduce in size. Then we need variable data structure for this need to create memory in HEAP during the run time and we should use link List.
What is Link List? 
Link List is a collection of nodes where each nodes contains data and pointer to the next node.
First, we have a pointer which we called first or head. Head/First is a pointer that points to the first node. Link List is created inside the HEAP.
In Link List, the nodes are not going to be side by side in the memory(HEAP). How the continuous is maintained through links, that is addresses.
Self-referential structure is a structure that has pointer of itself. They are famous of being used in Link List. 
Structure node{         -->Self Referential structure
	int data;
	node* next
} 
(**The difference between CLASS and STRUCTURE?
In CLASS everything by default is private, but in STRUCTURE everything by default is public. **)
We can use class or structure in c++ and structure in c.
In any compiler pointer takes same size of integer meaning if integer is 2 bytes pointer is 2 bytes and if it is 4 bytes pointer is 4 bytes as well.
Search on Link List/array
1.	Linear search -->sutable for link list and array both
2.	Binary search --> only works on ordered list. It is not suitable for Link List because we can not get to the middle of the link list in constant time we have to traverse.

To improve linear search there are two main methods
1.	Transposition-->we avoid movement of value so we do not use it in Link List
2.	Move to Head --> can be used in Link List
Merging is suitable on link list because it does not require extra space. It does not suitable on array.
Merge on link list time: O(n+m) n:# elements of one link list and m:#elements of second link list




 



