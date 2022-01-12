#include<iostream>
using namespace std;
int main() {
	// variable declaration
	// the elements which are going to be sorted say them as key
	int key, j, i;

	// array declaration
	int arr[4]={12,11,33,22};

	// insertion sort main logic to sort array start here

	for (int j = 1; j < 4; ++j)
	{
		key = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i] > key) {
			arr[i + 1] = arr[i];
			i = i - 1;
		}
		arr[i + 1] = key;
	}

	// insertion sort main logic to sort array end here


	// print after sorting
	for (int t = 0; t < 4; ++t)
	{
		cout << arr[t] << " " << endl;
	}



	return 0;
}