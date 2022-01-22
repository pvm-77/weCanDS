#include<iostream>
using namespace std;

void merge(int A[], int start, int mid, int end) {
	// declare iterator to handle subarray size
	int i = start;
	int j = mid + 1;
	int k = start;
	// declare empty subarray
	int temp[5];

	while (i <= mid && j <= end) {
		if (A[i] < A[j]) {
			temp[k] = A[i];
			i++; k++;
		}
		else {
			temp[k] = A[j];
			j++; k++;
		}
	}
	while (i <= mid) {
		temp[k] = A[i];
		k++; i++;
	}
	while (j <= end) {
		temp[k] = A[j];
		k++; j++;
	}
	for (int p = start; p <= end; ++p)
	{
		A[p] = temp[p];
	}
}


void mergeSort(int A[], int start, int end) {
	
	if (start >= end)
		return;
	// find the mid element
	int mid = (start + end) / 2;
	mergeSort(A, start, mid);
	mergeSort(A, mid + 1, end);
	merge(A, start, mid, end);

}



int main() {
	
		int a[5]={2,7,4,3,1};

	mergeSort(a, 0, 4);
	for (int i = 0; i < 5; ++i)
	{
		
		cout << a[i] << " ";
	}

	
	return 0;
}