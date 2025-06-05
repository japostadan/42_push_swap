#include <stdio.h>
#include <stdlib.h>

// Function to swap two elements (p and q)

void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

// Partition function

int partition(int nums[], int low, int high)
{
	int pivot = nums[high]; // Select the last element as pivot
	int i = (low - 1); // Index of smaller element
	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or equal to pivot
		if (nums[j] <= pivot)
		{
			i++; // Increment index of smaller element
			swap(&nums[i], &nums[j]);
		}
	}
	swap(&nums[i + 1], &nums[high]);
	return (i + 1);
}

// Iterative Quick Sort function
void qSortIterative(int nums[], int low, int high)
{
		// Create an auxiliary stack
	int *stack = (int *)malloc((high - low + 1) * sizeof(int));
		// Initialise top of stack
	int top = -1;
		// Push initial values of low and high to stack
	stack[++top] = low;
	stack[++top] = high;
		// Keep popping from stack while it is not empty
	while (top >= 0)
	{
		// Pop high and low
		high = stack[top--];
		low = stack[top--];
		// Partition the array and get the pivot index
		int pi = partition(nums, low, high);
		// If there are elements on the left side of the pivot, push left side to stack
		if (pi - 1 > low)
		{
			stack[++top] = low;
			stack[++top] = pi - 1;
		}
			// If there are elements on the right side of the pivot, push right side to stack
		if (pi + 1 < high)
		{
			stack[++top] = pi + 1;
			stack[++top] = high;
		}
	}
	free(stack);
}

int main()
{
	int nums[] = {8, 9, 14, 12, 3, 5, 10, 18, 20}; // create an array
	int size = sizeof(nums) / sizeof(*nums); // get the array size
	qSortIterative(nums, 0, size - 1); // use the qSortIterative function
// print the output
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", nums[i]);
	}
return 0;
}
