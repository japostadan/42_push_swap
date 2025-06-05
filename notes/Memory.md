## How memory works

	- Memory is like a chest of drawers. And each drawer has an address. Each time you want to store something in the memory like char int etc. you ask the computer for some space. The computer gives and address where you can store your item. Storing multiple items in the memory can be by arrays or lists.

### Arrays and Linked lists
	- Why does it the O(n) to insert an element into an array?

 * Inserting into the middle of a list
 Suppose you want your todo list to work more like a calendar. Now you want them in the order which they should be done.
 What is better if you wnat to insert elements in the middle: array or list? With lists it is as easy as changing the previous element points to. But for arrays you have to shift all the rest of the elements down. And if there is no space, you might have to copy everything to new location. Lists are better if you want to insert elements into the middle.
 * Deletions
 If you want to delete an element list are better, because you jus need to change what the previous element points to. With arrayseverything needs to be moved up when you delete an element. Unlike insertions deletions will always work. Insertions can fail sometimes when there's no space left in memory. But you can always delete an element.

 * Common operations on arrays and linked lists
____________|ARRAYS| LIST
 READING	| O(1) | O(n)|
 INSERTION	| O(n) | O(1)|
 DELETION	| O(n) | O(1)|

* It is worth mentioning that insertions and deletion are O(1) time only if you can instanly acces the element to be deleted. It is a common practice to keep track of the first and last items in a linked list, so it would take only O(1) time to delete those.

* Which are more used: arrays or linked lists? Obviously, it depends on the use case. But arrays see a lot of use case, Because they allow random access. There are two different types of access: random access and sequential access. Sequential access means reading the elements one by one, starting at the first element. Linked list can only do sequencial access. If you want to read the 10nth element of a linked list you nedd to access the first 9 elements and then follow the link to the 10th element. Arrays are faster at reads. This is because they provide random access. A lot of use case require random access, so arrays are used alot. 
