#include<iostream>
using namespace std;
int main() {
	
	int key, j, i,arraysize;
	cin>>arraysize;

	int arr[arraysize];

	for (int k = 0; k < arraysize; ++k)
	{
		cin>>arr[k];
	}

	// insertion sort main logic to sort array start here
	for (int j = 1; j < arraysize; ++j)
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
	for (int t = 0; t < arraysize; ++t)
	{
		cout << arr[t] << " " << endl;
	}



	return 0;
}