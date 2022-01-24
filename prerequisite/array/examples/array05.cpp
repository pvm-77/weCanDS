// write a program to find the smallest and largest number in an array
#include<iostream>
using namespace std;
int main(){
int arraysize;
cin>>arraysize;
int arr[arraysize];
for (int i = 0; i < arraysize; ++i)
{
	/* code */
	cin>>arr[i];
}
int smallest=arr[0];
int largest=arr[0];

for (int i = 0; i < arraysize; ++i)
{
	if (largest<arr[i])
	{
		largest=arr[i];
	}
	if (arr[i]<smallest)
	{
		/* code */
		smallest=arr[i];
	}
}
cout<<"the largest number in array is :"<<largest<<endl;
cout<<"the smallest number in array is :"<<smallest<<endl;



	return 0;
}