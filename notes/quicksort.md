## Quick Sort

	* What is a quick sort algorithm anyway?
Also known as partition-exchange sort, quicksort was developed by Tony Hoare, a British computer scientist, in 1959.
Since publishing his ideas in 1961, quicksort has become one of the top choices for fast array sorting algorithms.
But how does it work?

    - Divide and Conquer: Quicksort is a fast, efficient sorting algorithm, that uses a divide-and-conquer strategy to sort an array.
    - Picking a Pivot: It starts by selecting a 'pivot' element from the array.
    - Partitioning: The array is then partitioned into two parts – elements less than the pivot are moved before it, and elements greater than the pivot are moved after it.
    - Recursive Sorting: This partitioning creates a "partial order." The algorithm then recursively applies the same process to the sub-arrays formed by the partition.
    - Efficiency: When implemented well, it can be about two or three times faster than its main competitors, merge sort and heapsort.
    - Average Complexity: Its average time complexity is O(n log n), but in the worst case, it can degrade to O(n²), especially if the pivot is chosen poorly.

- How does quicksort works?
Picture a stack of books lying and scattered on the floor. Some thick some are thin; to arrange them by height, placing the shortest first. Well instead of comparing each book with others, we can select one of the as "pivot" and then divide the books into two groups-those books are shorter that the pivot and those books that are taller. This is the basic idea behind quick sort.

- Here is the base idea
	Choose a Pivot element.
		* choose an element in an array.
	Partition of the array.
		* everything lower than the element will go to left and to the right if it is greater.
	Recursion time
		* quick sort the sub arrays from the left or right


- The role of Pivot Element and its impact
	* pivot play a core role in how quick sort works. Depending on how the pivot chosen, The algorithm can be slower. Considering a dataset [10,20,30,40,50...]. If we always select the pivot as the first element, then the partitioning will turns out to be unbalanced. Every recursive call almost deals with the entire array, hence making it slower.

	* But we can always randomize the choice of pivot so we will never see the worst-case scenario.

