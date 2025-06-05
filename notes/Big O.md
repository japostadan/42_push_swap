## Big O

	- The big O notation is way of describing how the performance of complexity of an algorrthim changes as the sise of the input increases.
	It's used to measure the efficiency of an algorithm, specially how it behaves as the input size gets bigger.
	- When writing code or algorithms, we want to know how well they scale when handling larher and larger inputs. Big O hepls us describe this scaling.


### Common Notations

* O(log n): Logarithmic time
	- The time it takes to execute this algorthim grows very slowly as the input size increases. Algorithms that repeatedly divide the problem in half (like binary search) have logarithmic time complexity.
	Ex. Binary Search, where you repeatedly cute the input size on half (like guessing numbers between 1 to 100).

* O(n): Constant time
	- This means that the algorithm takes the same ammount of time regardless of the input size. For example, accessing a specific element in an array is done in constant time (you don't need to loop throuh the entire array).
	Ex. x = arr[5];

* O(n): Linear time
	- The time it takes to execute the algorithm grows directly with the input size.
	Ex. if you have an algorithm that loops throuh a list of size (n), it will take n steps. Summing all the elements in a list ofsize n.

* O(n * log n): Linearithmic time
	- This is mix of O(n) and O(log n), and is often efficient sorting algorithms like merge sort and quick sort.

* O(n^2): Quadratic time
	- The time it take grows with the square of the input size. For example, a simple nested loop where you loop throuh a lust and for eaach item. you loop through it again. if the  list has 10 items, you'll have 10 x 10 operations.
	Ex. A bubble sort algorithm.


### Notables

* O(log n) is faster than O(n), but it gets a lot fater as the list of items you are searching grows.
* Algorithm speed in not measured in seconds.
* Algorithm times are measured in terms of growth of an algorithm.
