#include<bits/stdc++.h>
using namespace std;
int main()
{

	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int n, i;

	// Get the number of elements for the array
	n = 5;
	cout<<"Enter number of elements:"<< n;

	// Dynamically allocate memory using calloc()
	ptr = (int*)malloc(n*sizeof(int));

	// Check if the memory has been successfully
	// allocated by malloc or not
	if (ptr == NULL) {
		cout<<"\nMemory not allocated";
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		cout<<"\nMemory successfully allocated using calloc.\n";

		// Get the elements of the array
		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}

		// Print the elements of the array
		cout<<"The elements of the array are: ";
		for (i = 0; i < n; ++i) {
		     cout<<ptr[i];
		}

		// Get the new size for the array
		n = 10;
		cout<<"\nEnter the new size of the array:"<<n;

		// Dynamically re-allocate memory using realloc()
		ptr = (int*)realloc(ptr, n * sizeof(int));

		// Memory has been successfully allocated
		cout<<"\nMemory successfully re-allocated using realloc.\n";

		// Get the new elements of the array
		for (i = 5; i < n; ++i) {
			ptr[i] = i + 1;
		}

		// Print the elements of the array
		cout<<"The elements of the array are: ";
		for (i = 0; i < n; ++i) {
			cout<<" "<<ptr[i];
		}

		free(ptr);
	}

	return 0;
}
