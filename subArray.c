// C code to print all possible subarrays for given array
// using recursion
#include <stdio.h>

// Recursive function to print all possible subarrays for
// given array
void printSubArrays(int arr[], int start, int end, int size)
{

	// Stop if we have reached the end of the array
	if (end == size)
		return;

	// Increment the end point and start from 0
	else if (start > end)
		printSubArrays(arr, 0, end + 1, size);

	// Print the subarray and increment the starting point
	else {
		printf("[");
		for (int i = start; i < end; i++)
			printf("%d, ", arr[i]);
	
		// cout << arr[i] << ", ";
		printf("%d]\n", arr[end]);
	
		// cout << arr[end] << "]" << endl;
		printSubArrays(arr, start + 1, end, size);
	}
	return;
}

int main()
{
	int arr[] = { 1, 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printSubArrays(arr, 0, 0, n);
	return 0;
}

// This code is contributed by Sania Kumari Gupta
