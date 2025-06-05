# Binary Search

* Binary Search only works when the list or data provided is in sorted order.

``` C

#include <stdio.h>

// Function for binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;          // Start of the array
    int right = size - 1;  // End of the array

    // While there is still a range to search
    while (left <= right) {
        int mid = left + (right - left) / 2; // Find the middle index

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;  // Target found at index 'mid'
        }

        // If the target is smaller, ignore the right half
        if (arr[mid] > target) {
            right = mid - 1;
        }
        // If the target is larger, ignore the left half
        else {
            left = mid + 1;
        }
    }

    // If we reach here, the element was not present
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};  // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 13;  // The element we are searching for

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

```
