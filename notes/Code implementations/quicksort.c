#include <stdio.h>
#include <stdlib.h>

void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void quicksort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pivot = arr[(low + high) / 2]; // Selecting the middle elemet as  pivot
		int i = low;
		int j = high;
		while (i <= j)
		{
		while(arr[i] < pivot)
			i++; // Moving the smaller element to the left;
		while(arr[j] > pivot)
			j--; // Moving larger elment to the riht;;
		if (i <= j)
		{
			ft_swap(&arr[i], &arr[j]);
			i++;
			j--;
		}
		if (low < j)
			quicksort(arr,low,j);
		if (i < high)
			quicksort(arr, i,high);
		}
	}
}


void print_arr(int arr[], int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}

int main()
{
	int arr[] = {42,41,1,4,5,7,24,751,24};
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("original array\n");
	print_arr(arr,n);
	quicksort(arr, 0, n - 1);
	printf("Sortedd array\n");
	print_arr(arr, n);
}	
