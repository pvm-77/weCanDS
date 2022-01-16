#include<iostream>
using namespace std;
int partition(int* arr, int start, int end) {
	int temp, lastSwap,pIndex;
	int pivot = arr[end];
	pIndex = start;
	for (int i = start; i <= end - 1; ++i)
	{
		if (arr[i] <= pivot)
		{
			temp = arr[i];
			arr[i] = arr[pIndex];
			arr[pIndex] = temp;
			pIndex = pIndex + 1;

		}
	}
	lastSwap = arr[pIndex];
	arr[pIndex] = arr[end];
	arr[end] = lastSwap;

	return pIndex;
}
void quicksort(int* arr, int start, int end) {
	int pIndex;


	if (start < end)
	{
		pIndex = partition(arr, start, end);
		quicksort(arr,0,pIndex-1);
		quicksort(arr,pIndex+1,end);
	}

}
int main() {
	int arr[] = {1, 4, 2, 9, 5, 3};
	int start = 0;
	int end = 5;
	quicksort(arr,start,end);
	for (int i = 0; i < 6; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}