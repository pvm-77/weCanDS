// how to take input in array

#include<iostream>

using namespace std;
int main(){
	// declare variable to taking array size
	int arraysize;
	cout<<"enter the size of array:"<<endl;
	cin>>arraysize;
	// declare array to hold element upto size arraySize
	int myArray[arraysize];

	// taking input one by one in array
	for (int i = 0; i < arraysize; ++i)
	{
		cout<<"enter "i+1<< " element"<<endl;
		cin>>myArray[i];
	}
	// display array elements 
	for (int i = 0; i < arraysize; ++i)
	{
		cout<<myArray[i]<<" ";
	}

	return 0;
}