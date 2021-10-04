// C++ program to print the maximum elements
// giving second array higher priority
#include <bits/stdc++.h>
using namespace std;

// Compare function used to sort array
// in decreasing order
bool compare(int a, int b)
{
	return a > b;
}

// Function to maximize array elements
void maximizeArray(int arr1[], int arr2[],
								int n)
{
	// auxiliary array arr3 to store
	// elements of arr1 & arr2
	int arr3[2*n], k = 0;
	for (int i = 0; i < n; i++)
		arr3[k++] = arr1[i];
	for (int i = 0; i < n; i++)
		arr3[k++] = arr2[i];

	// hash table to store n largest
	// unique elements
	unordered_set<int> hash;

	// sorting arr3 in decreasing order
	sort(arr3, arr3 + 2 * n, compare);

	// finding n largest unique elements
	// from arr3 and storing in hash
	int i = 0;
	while (hash.size() != n) {

		// if arr3 element not present in hash,
		// then store this element in hash
		if (hash.find(arr3[i]) == hash.end())
			hash.insert(arr3[i]);
		
		i++;
	}

	// store that elements of arr2 in arr3
	// that are present in hash
	k = 0;
	for (int i = 0; i < n; i++) {

		// if arr2 element is present in hash,
		// store it in arr3
		if (hash.find(arr2[i]) != hash.end()) {
			arr3[k++] = arr2[i];
			hash.erase(arr2[i]);
		}
	}

	// store that elements of arr1 in arr3
	// that are present in hash
	for (int i = 0; i < n; i++) {

		// if arr1 element is present in hash,
		// store it in arr3
		if (hash.find(arr1[i]) != hash.end()) {
			arr3[k++] = arr1[i];
			hash.erase(arr1[i]);
		}
	}

	// copying 1st n elements of arr3 to arr1
	for (int i = 0; i < n; i++)
		arr1[i] = arr3[i];
}

// Function to print array elements
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver Code
int main()
{
	int array1[] = { 7, 4, 8, 0, 1 };
	int array2[] = { 9, 7, 2, 3, 6 };
	int size = sizeof(array1) / sizeof(array1[0]);
	maximizeArray(array1, array2, size);
	printArray(array1, size);
}
