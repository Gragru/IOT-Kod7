#include <iostream>
#include <string>
using namespace std;

// Linearly search x in arr[].  If x is present then return its 
// location,  otherwise return -1 
int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
			return i;
	}
	return -1;
}

// Driver code 
int main()
{
	int arr[] = { 3, 4, 1, 7, 5, 2, 6, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	for (int x = 1; x < 10; x++)
	{
		int index = search(arr, n, x);
		if (index == -1)
			cout << "Element " << x << " is not present in the array" << endl;
		else
			cout << "Element " << x << " found at position " << index << endl;
	}


	string y;
	getline(cin, y);
	return 0;
}