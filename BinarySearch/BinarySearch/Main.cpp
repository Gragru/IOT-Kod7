#include <iostream> 
#include <string>
using namespace std;

// A iterative binary search function. It returns 
// location of x in given array arr[l..r] if present, 
// otherwise -1 
int binarySearch(int arr[], int leftIndex, int rightIndex, int x) // 0-8 först
{
	while (leftIndex <= rightIndex) {
		int middleIndex = leftIndex + (rightIndex - leftIndex) / 2;

		// Check if x is present at mid 
		if (arr[middleIndex] == x)
			return middleIndex;

		// If x is greater than middle, ignore left half 
		if (arr[middleIndex] < x)
			leftIndex = middleIndex + 1;

		// If x is smaller, ignore right half 
		else
			rightIndex = middleIndex - 1;
	}

	// if we reach here, then element was 
	// not present 
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 8, 9, 10, 12, 15, 17};
	
	
	for (int x = 1; x < 20; x++)
	{
		int n = sizeof(arr) / sizeof(arr[0]);
		int result = binarySearch(arr, 0, n - 1, x);

		(result == -1) ? cout << "Element " << x << " is not present in array" << endl
			: cout << "Element " << x << " is present at index " << result << endl;
	}

	string y;
	getline(cin, y);
	return 0;
}
